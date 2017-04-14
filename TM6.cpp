#include <iostream>
using namespace std; 

float penjumlahan(float x, float y);  
float pengurangan(float x, float y);  
float perkalian(float x, float y);  
float pembagian(float x, float y);  

int main()  
{  
char menu;  
float n, hasil=0;  

cout<<endl;   
          
        cout<<"masukkan nilai awal : ";  
        cin>>hasil;  

do  
{  
do  
{  

cout<<endl;  
        cout<<"--------------------------------"<<endl;  
        cout<<"|        Nilai="<<hasil<<"               |"<<endl;  
        cout<<"--------------------------------"<<endl<<endl;  
  
        cout<<"---------------------------"<<endl;  
        cout<<"|       MENU UTAMA       |"<<endl;  
        cout<<"| 1. Operasi Penjumlahan |"<<endl;  
        cout<<"| 2. Operasi Pengurangan |"<<endl;  
        cout<<"| 3. Operasi Perkalian   |"<<endl;  
        cout<<"| 4. Operasi Pembagian   |"<<endl;  
        cout<<"| x. Keluar              |"<<endl;  
        cout<<"---------------------------"<<endl<<endl;  
        cout<<"Pilih Menu Yang Anda Inginkan : ";  
        cin>>menu;  


if(menu!='x' && menu!='1' && menu!='2' && menu!='3' && menu!='4')  
{  
cout<<"Kode tidak sesuai!"<<endl<<endl;  
            
        }  
    }  
      
    while(menu!='1' && menu!='2' && menu!='3' && menu!='4' && menu!='x');  
      
            if (menu=='1')  
            {  
                        cout<<"masukkan nilai penjumlah : ";  
                        cin>>n;  
cout<<endl<<endl;  
                        
                        cout<<hasil<<" + "<<n<<" = "<<penjumlahan(hasil,n)<<endl;  
                        hasil=penjumlahan(hasil,n);  
                          
            }  
  
            else if (menu=='2')  
            {  
                        cout<<"masukkan nilai pengurang : ";  
                        cin>>n;  
cout<<endl<<endl;  
                      
                        cout<<hasil<<" - "<<n<<" = "<<pengurangan(hasil,n)<<endl;  
                        hasil=pengurangan(hasil,n);  
                       
            }  
  
            else if (menu=='3')  
            {  
                        cout<<"masukkan nilai pengali : ";  
                        cin>>n;  
cout<<endl<<endl;  
                    
                        cout<<hasil<<" * "<<n<<" = "<<perkalian(hasil,n)<<endl;  
                        hasil=perkalian(hasil,n);  
                       
            }  
  
            else if (menu=='4')  
            {  
                        cout<<"masukkan nilai pembagi : ";  
                        cin>>n;  
cout<<endl<<endl;  
                         
                        cout<<hasil<<" / "<<n<<" = "<<pembagian(hasil,n)<<endl;  
                        hasil=pembagian(hasil,n);  
                         
            }  
  
            else if (menu=='x')  
            {  
                        cout<<"Terima Kasih"<<endl<<endl;  
            }  
  
    }  
    while(menu=='1' || menu=='2' || menu=='3' || menu=='4');  
        return 0;  
  
  
}  
  
  
//fungsi penjumlahan  
float penjumlahan(float x, float y)  
{  
    x=x+y;  
    return x;  
}  
  
  
//fungsi pengurangan  
float pengurangan(float x, float y)  
{  
    x=x-y;  
    return x;  
}  
  
  
//fungsi perkalian  
float perkalian(float x, float y)  
{  
    x=x*y;  
    return x;  
}  
  
  
//fungsi pembagian  
float pembagian(float x, float y)  
{  
    x=x/y;  
    return x;  
}  
