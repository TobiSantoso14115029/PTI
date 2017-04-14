#include <iostream>

using namespace std;
int main(){
	int a,b,pilih,penju,pengu,kali,bagi,mod;
	cout<<"nilai 1: ";
	cin>>a;
	cout<<"nilai 2: ";
	cin>>b;
	penju=a+b;
	pengu=a-b;
	kali=a*b;
	
	mod=a%b;
	cout<<"===Pilih Operasi==="<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Hasil sisa bagi"<<endl;
	cout<<"6. Tampilankan semuanya"<<endl;
	cout<<"Masukkan Pilihan:";
	cin>>pilih;
	
	switch (pilih){
		case 1 : cout<<a<<"+"<<b<<"="<<penju;
		break;
		case 2: cout<<a<<"-"<<b<<"= "<<pengu;
		break;
		case 3: cout<<a<<"*"<<b<<"= "<<kali;
		break;
		case 4: cout<<a<<"/"<<b<<"= "<<bagi;
		break;
		case 5: cout<<a<<"%"<<b<<"= "<<mod;
		break;
		case 6: cout<<a<<"+"<<b<<"= "<<penju<<"\n";
				cout<<a<<"-"<<b<<"= "<<pengu<<"\n";
				cout<<a<<"*"<<b<<"= "<<kali<<"\n";
				cout<<a<<"/"<<b<<"= "<<(float)a/b<<"\n";
				cout<<a<<"%"<<b<<"= "<<mod<<"\n";		
		break;
		default: cout<<"salah";
		break;	
	}
	return 0;
}
