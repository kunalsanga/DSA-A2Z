#include<iostream>
using namespace std;
int main(){
    float length;
    float breadth;
    double perimeter;
    cout<<"enter the length: ";
    cin>>length;
    cout<<"enter the breadth: ";
    cin>>breadth;
    perimeter = 2*(length + breadth);
    cout<<"perimeter: "<<perimeter;
    return 0;
}