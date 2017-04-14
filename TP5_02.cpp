#include<iostream>
using namespace std;
int main()
{
    int jumkar = 0;
	int i = 1;
    char c;
    do{
        cout<<"Masukan Char ke ["<<i<<"] "; cin>>c;
        if(c != '.')
        {
            jumkar++;
        }
        i++;
    }
    while(c != '.');
    cout<<endl<<"Banyak Karakter Yang Dimasukkan : "<<jumkar<<endl;
    return 0;
}
