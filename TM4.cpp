#include <iostream>

using namespace std;
int main(){
	int pilih,hari,film;
	cout<<"1. senin"<<endl;
	cout<<"2. selasa"<<endl;
	cout<<"3. rabu"<<endl;
	cout<<"4. kamis"<<endl;
	cout<<"5. jumat"<<endl;
	cout<<"6. sabtu"<<endl;
	cout<<"7. minggu"<<endl;
	cout<<"masukkan pilihan hari:";
	cin>>pilih;
	switch(pilih){
		case 1: 
		cout<<" senin "; 
		break;
		case 2: 
		cout<<"selasa";
		break;
		case 3: 
		cout<<"rabu";
		break;
		case 4:
		cout<<"kamis";
		break;
		case 5: 
		cout<<"jumat";
		break;
		case 6: 
		cout<<"sabtu";
		break;
		case 7: 
		cout<<"minggu";
		break;
	}
	
	return 0;
	
}
