#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Masukkan Nilai N : "; cin>>N;
    cout<<"\nHitungan mundur dari "<<N<<" hingga 1 :"<<endl;
    while(N >= 1)
    {
        cout<<N<<endl;
        N--;
    }
    return 0;
}
