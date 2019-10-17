#include"../header/bitmap.h"

#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
#include<cmath>
using namespace std;


//default constructor
bitmap::bitmap(){

}

bitmap::bitmap(string file_dir){
    imgfile.open(file_dir);

    //check for error
    if(imgfile.fail()){
        cerr << "Error Opening File" << endl;
        exit(1);
    }


    int length_bytes = 0;

    imgfile.seekg (0, imgfile.end);
    length_bytes = imgfile.tellg();
    imgfile.seekg (0, imgfile.beg);



    buffer = new unsigned char[length_bytes];

    imgfile.read((char * )buffer, length_bytes);

    cout << length_bytes;

    cout << buffer[0] << buffer[1] << endl;

    cout <<"next 4  bytes:" << buffer[2] << buffer[3] << buffer[4] << buffer[5]<<endl;

    cout<< convert_decimal(buffer, 2,5)<< endl;

}

int32_t bitmap::convert_decimal(unsigned char * buff, int begin, int end){
    int32_t result = 0;
    for (int i = end; i>=begin;i--){
        
    result = (result << 8) + buff[i];

    }
    return result;
}


bitmap::~bitmap(){

}