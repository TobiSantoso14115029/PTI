#include <iostream>

using namespace std;
int main(){
int pilih,n;
cout<<"===Pilih Kalimat Yang ingin diulang===="<<endl;
cout<<"1. Saya adalah Mahasiswa ITERA yang berprestas"<<endl;
cout<<"2. Saya adalah anak yang berbakti kepada orang tua"<<endl;
cout<<"3. Saya akan menjadi seseorang yang bermanfaat bagi orang di sekitar saya"<<endl;
cout<<"pilih: ";
cin>>pilih;
cout<<"Berapa Banyak Jumlah Kalimat yg ingin diulang :";
cin>>n;
switch(pilih){
	case 1: 
	for(int i=1; i<=n; i++){
	cout<<"Saya adalah Mahasiswa ITERA yang berprestas"<<endl;
	}
	break;
	case 2:
	for(int i=0; i<=n; i++){
	cout<<"Saya adalah anak yang berbakti kepada orang tua"<<endl;
	}
	break;
	case 3: 
	for (int i=0; i<=n; i++){
		cout<<"Saya akan menjadi seseorang yang bermanfaat bagi orang di sekitar saya"<<endl;
	}
	break;
	default : cout<<"salah"<<endl;
	break;
}

	return 0;
}
