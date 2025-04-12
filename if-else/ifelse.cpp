#include<bits/stdc++.h>  //#include <bits/stdc++.h> is a header file commonly used in competitive programming. It includes almost all standard C++ libraries in one line, saving time and effort during contests.
using namespace std;
int main(){
    int age;
    cout<<"enter age: ";
    cin>>age;
    if(age>=18){
        cout<<"your are an adult!";
    }else{
        cout<<"your are not an adult!";
    }
    return 0;
}