/*
 * TND012, Lab6
 * Exercise 2: Decode a compressed image
 * Read the compressed image file
 * Store the information in the Image struct
 * Check if the information is ok
 * Write the image
 */

/*
Example input file: uppgift-input-example.txt
  5  96  58  47  97  56  14   7   0  18   1   6   0   6   1   2   2   2   3   2
  2   2   1   2   0   4   1   2   3   2   4   2   3   2   1   2   0   4   1   2
  2   2   3   2   2   2   1   2   0   6   1   6   0  18

Generated output: uppgift-output-example.txt
``````````````
````::::::````
``:://aa//::``
``::aa88aa::``
``:://aa//::``
````::::::````
``````````````
*/

/*
* Input image files:
* "../code/uppgift2-input-example.txt"
* "../code/uppgift2-input-short.txt"
* "../code/uppgift2-input-large.txt"
* 
* "../code/uppgift2-actual-input.txt"
*/

#include <iostream>
#include <fstream>
#include <stdlib.h>

#include "image.h"

// ADD CODE: main

int main(){
    // file to read, change depending on which file should be read
	std::ifstream in_file("../code/uppgift2-input-large.txt");
    // do not change
	std::ofstream out_file("../code/uppgift2-actual-output.txt");  

    // check the in and out files
    if (in_file && out_file) {
        // Load a file of a compressed image
        Image read_img = get_decompressed_image(in_file);
        // is the image empty or does it have a different number of indices compared to the number of repetition values
        if ((read_img.palette.empty() == false) && (read_img.width != 0 && read_img.height != 0) && (read_img.data.size() % 2 == 0)) {
            // the write_image funtion 
            write_image(out_file, read_img);
        }
        else {
            std::cout << "Problem with File Data!!\n";
        }
    }
    else {
        std::cout << "Error in file opening!!\n";
    }
}