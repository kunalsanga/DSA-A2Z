#include<iostream>
int main(){
    int marks=95;
    char grade;
    if (marks<=25){
        grade = 'c';
    }else if(marks<=30){
        grade='f';
    }else if(marks<=40){
        grade='d';
    }else if(marks<=50){
        grade='c';
    }else if(marks<=60){
        grade='b';
    }else if(marks<=80){
        grade='a';
    }else if(marks<=90){
        grade='e';
    }else if(marks<=100){
        grade='o';
    }

    std::cout<<"Grade: "<<grade<<std::endl;
    return 0;
}