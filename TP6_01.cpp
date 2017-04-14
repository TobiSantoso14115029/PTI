#include <iostream>
using namespace std;

void cek(int a){
	if(a%2==1){
		cout<<"ganjil"<<endl;
	}else{
		cout<<"genap"<<endl;
	}
}
int main(){
	int nilai;
	cout<<"Masukkan Nilai Yang ingin anda cek:";
	cin>>nilai;
	cek(nilai);
	
}
