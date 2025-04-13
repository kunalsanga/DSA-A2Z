#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y=5;

    switch (x+y){
        case 15:
            cout<<"the result is 15"<<endl;
            break;
        case 20:
            cout<<"the result is 20"<<endl;
            break;
        default:
            cout<<"invalid"<<endl;
    }
    return 0;
}