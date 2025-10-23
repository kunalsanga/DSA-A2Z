#include<bits/stdc++.h>
using namespace std;
int main(){
     double num1,num2;
    cout<<"enter num1: ";
    cin>>num1;
    cout<<"enter num2: ";
    cin>>num2;
    
    char ch;
    cout<<"choose operation(+,-,/,x): ";
    cin>>ch;
    if(ch=='+'){
        double sum = num1+ num2;
        cout<<"sum: "<<sum<<endl;
    }else if(ch=='-'){
        double minus = num1 - num2;
        cout<<"minus: "<<minus<<endl;
    }else if(ch=='/'){
        double div = num1/num2;
        cout<<"div: "<<div<<endl;
    }else if(ch=='x'){
        double mul = num1*num2;
        cout<<"mul: "<<mul<<endl;
    }else{
        cout<<"invalid operator!";
    }
    return 0;

    
}