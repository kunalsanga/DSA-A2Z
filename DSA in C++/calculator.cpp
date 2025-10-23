#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    char ch;
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";
    cin>>num2;
    cout<<"choose operation(+,-,/,x): ";
    cin>>ch;
    if(ch=='+'){
        cout<<"sum: "<<num1+num2<<endl;
    }else if(ch=='-'){
        cout<<"minus: "<<num1-num2<<endl;
    }else if(ch=='/'){
        cout<<"div: "<<static_cast<double>(num1)/num2<<endl;
    }else if(ch=='x'){
        cout<<"mul: "<<num1*num2<<endl;
    }else{
        cout<<"invalid operator!";
    }
    return 0;


}