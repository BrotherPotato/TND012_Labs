#include "image.h"

// read file, store in Image
Image get_decompressed_image(std::ifstream& file) {
	Image img;
	int palette_size;
	int temp;

	//read and check palette size
	file >> palette_size;
	if (palette_size <= 0) {
		return img;
	}
	// fill palette vector
	for (int i = 0; i < palette_size; i++)
	{
		file >> std::ws;
		file >> temp;
		img.palette.push_back(char(temp));
	}

	// read width and height, add them to img if they are positive integers
	file >> temp;
	if (temp > 0) {
		img.width = temp;
	}
	file >> temp;
	if (temp > 0) {
		img.height = temp;
	}

	// read the rest of the numbers
	
	while (file) {
		file >> temp;
		if (file && temp >= 0) {
			img.data.push_back(temp);
		}
		else {
			break;
		}
	}

	return img;
}

// read the loaded image and decode it
void write_image(std::ofstream& file_out, const Image& img) {
	int counter = 0;
	// go through all of the palette indices

	int j;
	// this for loop goes through the palette indices
	for (int i = 0; i < img.data.size(); i+=2)
	{
		// output the current palette indice x number of times, to both the cout and file
		j = i + 1;
		// this for loop is for the repetition counter
		for (int y = 0; y < img.data[j]; y++)
		{
			std::cout << img.palette[img.data[i]];
			file_out << img.palette[img.data[i]];
			// new line code
			counter++;
			if (counter == img.width) {
				std::cout << "\n";
				file_out << "\n";
				counter = 0;
			}
		}
	}
}