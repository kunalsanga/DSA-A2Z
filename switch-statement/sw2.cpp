#include<iostream>
using namespace std;
int main(){
    char garde='A';

    switch(garde){
        case 'A':
            cout<<"execellent!"<<endl;
            break;
        case 'B':
            cout<<"good"<<endl;
            break;
        default:
            cout<<"inavlid"<<endl;
    }
    return 0;
}