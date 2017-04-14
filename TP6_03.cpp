#include <iostream>
using namespace std;


float rata(float a, float b, float c){
float hasil;
hasil=(a+b+c)/3;
return hasil;
}
int main(){
float nilai1,nilai2,nilai3;

cout<<"masukkan nilai 1:"; cin>>nilai1;
cout<<"masukkan nilai 2:"; cin>>nilai2;
cout<<"masukkan nilai 3 :"; cin>>nilai3;
cout<<"hasilnya adalah:"<<rata(nilai1,nilai2,nilai3)<<endl;
return 0;
}
