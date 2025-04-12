#include<iostream>
int main(){
    std::cout<<"hey, kunal"<<std::endl;  //use std::endl to insert a newline character and flush the output buffer
    std::cout<<"hey, kunal";
}


//Newline Characters in C++ - Performance Summary
//When outputting text with line breaks in C++:
//\n is a simple escape sequence that inserts only a newline character
//std::endl does two things: inserts a newline character AND flushes the output buffer
//\n is typically faster because it doesn't perform the additional buffer flushing operation
//The performance difference becomes more noticeable when printing large amounts of text
//Buffer flushing is a relatively costly operation compared to simply inserting a newline character
//\n directly moves the cursor to the beginning of the next line with minimal overhead
//For performance-critical code or when printing large volumes of text, using \n is generally preferred unless you specifically need the buffer-flushing behavior of std::endl.