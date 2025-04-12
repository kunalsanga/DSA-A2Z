#include<iostream>
using namespace std;
int main(){
    int marks = 98;
    if(marks<25){
        cout<<"grade:f";
    }else if(marks>=25 && marks<=30){
        cout<<"grade:d";
    }else if(marks>=30 && marks<=60){
        cout<<"grade:c";
    }else if(marks>=60 && marks<=70){
        cout<<"garde:b";
    }else if(marks>=70 && marks<=80){
        cout<<"garde:a";
    }else if(marks>=80 && marks<=90){
        cout<<"garde:e";
    }else if(marks>=90 && marks<=100){
        cout<<"garde:o";
    }else{
        cout<<"invalid marks";
    }
    return 0;
}
