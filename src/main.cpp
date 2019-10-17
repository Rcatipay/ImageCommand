#include"../header/bitmap.h"

#include<iostream>
#include<fstream>
#include<string>
 
using namespace std;

int main(){
    /* 
    fstream imgfile;


    imgfile.open("images/MARBLES.BMP");

    //check for error
    if(imgfile.fail()){
        cerr << "Error Opening File" << endl;
        exit(1);
    }


    string input;
    string thing = "";

    while(!imgfile.eof()){
        imgfile >> hex >> input;
        thing += input;
    }
    


    cout << thing;

    */

   bitmap test("images/MARBLES.BMP");

    return 0;

    
}