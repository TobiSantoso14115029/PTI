#include <iostream>
using namespace std;

float pembagian(float a, float b){
	if(b!=0){
		return a/b;
	}else{
		return -1;
	}
}
int main(){
	float a,b;
	cout<<"masukkan bilangan a:";
	cin>>a;
	cout<<"masukkan bilangan b:";
	cin>>b;
	cout<<"hasil:"<<pembagian(a,b)<<endl;
	return 0;
	}
