#include <iostream>
using namespace std;
int main()
{
int x,jlh_anak;
cout<<"Masakkan jumlah Anak Ayam yang akan Turun :";
cin>>jlh_anak;
cout<<"Judul Lagu: Anak Ayam Turun "<<jlh_anak<<endl;
for (x=jlh_anak;x>0;x--)
{
if (x>1)
cout<<"Anak Ayam Turun "<<x<<" Mati Satu Tinggal "<<x-1<<endl;
else if (x=1)
cout<<"Anak Ayam Turun 1 Mati Satu Tinggal Induknya"<<endl;
}
return 0;
}
