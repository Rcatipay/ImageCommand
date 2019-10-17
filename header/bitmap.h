#ifndef BITMAP_H
#define BITMAP_H

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

class bitmap{
public:
    bitmap();

    bitmap(string file_dir);


    fstream imgfile;

    unsigned char * buffer;

    int32_t convert_decimal(unsigned char * buff, int begin, int end);

    //Define Header variables
    uint32_t file_type;          // File type (BM for bitmap)
    uint32_t file_size;          // Size of the file (in bytes)
    uint32_t reserved;           // Reserved, always 0
    uint32_t offset_data;        // Offset from beginning of file to the beginning of the bitmap data

    //Define InfoHeader variables
    uint32_t size;                      // Size of InfoHeader (in bytes)
    int32_t width;                      // width of bitmap in pixels
    int32_t height;                     // width of bitmap in pixels
                                        //       (if positive, bottom-up, with origin in lower left corner)
                                        //       (if negative, top-down, with origin in upper left corner)
    uint16_t planes;                    // No. of planes (always 1)
    uint16_t bit_count;                 // bits per pixel
    uint32_t compression;               // 0 or 3 - uncompressed. Using only 0 uncompressed
    uint32_t size_image;                // 0 for uncompressed
    int32_t x_pixels_per_meter;
    int32_t y_pixels_per_meter;
    uint32_t colors_used;               // No. color indexes in the color table. Use 0 for the max number of colors allowed by bit_count
    uint32_t colors_important;          // No. of colors used for displaying the bitmap. If 0 all colors are required

    //Define ColorTable variables
        //Will leav out color table for now.
        //space occupied here is 4*(2^bit_count)
    uint32_t color_offset_data;


    ~bitmap();
};


#endif //BITMAP_H