#pragma once

#include <iostream>
#include <vector>
#include <fstream>

// ADD new data type Image to represent a decompressed image
struct Image {
	// ADD code
	std::vector<char> palette;
	int width = 0;
	int height = 0;
	std::vector<int> data;
};

// Read a compressed image from file in
// Return a value of type Image representing the decompressed image
// ADD function declaration
Image get_decompressed_image(std::ifstream& file_in);

// Write a decompressed image to file out
// ADD function declaration
void write_image(std::ofstream& file_out, const Image& img);