#include<iostream>
using namespace std;
int main()
{
    int i = 1, bil;
    int ganjil = 0, genap = 0, positif = 0, negatif = 0;
    while(i <= 10)
    {
        cout<<"["<<i<<"] "; cin>>bil;
        if(bil % 2 != 0)
        {
            ganjil++;
        }
        if(bil % 2 == 0)
        {
            genap++;
        }
        if(bil > 0)
        {
            positif++;
        }
        if(bil < 0)
        {
            negatif++;
        }
        i++;
    }
    cout<<"Jumlah Bilangan ganjil = "<<ganjil<<endl;
    cout<<"Jumlah Bilangan genap = "<<genap<<endl;
    cout<<"Jumlah Bilangan positif = "<<positif<<endl;
    cout<<"Jumlah Bilangan negatif = "<<negatif<<endl;

    return 0;
}
