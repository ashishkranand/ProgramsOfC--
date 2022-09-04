#include<iostream>
using namespace std;
int main(){
int a=4;
int* b=&a;
cout<<b<<endl;
cout<<&a<<endl;
cout<<*b<<endl;
int** c=&b;
cout<<**c<<endl;
cout<<&b<<endl;
    return 0;
}