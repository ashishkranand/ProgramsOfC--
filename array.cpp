#include<iostream>
using namespace std;
int main(){

int marks[4]={45,65,66,78};
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// marks[2]=34;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;

int mathmarks[4];
mathmarks[0]=34;
mathmarks[1]=56;
mathmarks[2]=98;
mathmarks[3]=23;
// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;
// cout<<"marks:-"<<endl;
// for(int i=0;i<=3;i++){
//     cout<<marks[i]<<endl;
// }
// int i=0;
// while(i<=3){
//     cout<<marks[i]<<endl;
//     i++;
// }

// do{
//    cout<<marks[i]<<endl;
//    i++; 
// }while(i<=3);
// *p stores the address of first indexed positoned value in present in array
int*p=marks;
// cout<<*p<<endl;
// cout<<*(p+1)<<endl;
// cout<<*(p+2)<<endl;
// cout<<*(p+3)<<endl;
cout<<"fghj"<<endl;
for(int i=0;i<=3;i++){
    cout<<*(p+i)<<endl;
}





    return 0;
}