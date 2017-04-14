#include<iostream>
using namespace std;
int main()
{
    int a, n;
    int sum = 1, i = 0;
    cout<<"Masukkan a : ";
	cin>>a;
    cout<<"Masukkan n : ";
	cin>>n;

    while(i<n)
    {
        sum =  sum * a;
        i++;
    }

    cout<<endl;
    cout<<"Hasil dari ("<<a<<"^"<<n<<") "<<a<<" pangkat "<<n<<" = "<<sum<<endl;
    return 0;
}
