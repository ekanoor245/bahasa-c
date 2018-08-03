#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 string nama[20], alamat[20],  jk[20];
 int umur[20], r, n;
 char x;
 cout<<"Silahkan masukkan N = ";
 cin>>n;
 for(int i=0;i<=n-1;i++)
 {
  cout<<"Masukkan nama mahasiswa ke- "<<i+1<<" : ";
  cin>>nama[i];
  cout<<"Masukkan Alamat        : ";
  cin>>alamat[i];
  cout<<"Masukkan umur          : ";
  cin>>umur[i];
  cout<<"Masukkan Jenis Kelamin : ";
  cin>>jk[i];
 }
 cout<<"Daftar Nama Mahasiswa  "<<endl;
 cout<<"-----------------------"<<endl;
 int jum=0;
 for(int i=0;i<=n-1;i++)
 {
  cout<<i+1<<"\t"<<nama[i]<<"\t "<<alamat[i]<<"\t"<<umur[i]<<"\t "<<jk[i]<<endl;
  jum=jum+umur[i];
 }
 r=jum/n;
 cout<<endl;
 cout<<"jumlah mahasiswa : "<<n<<"orang"<<endl;
 cout<<"jumlah umur mahasiswa : "<<jum<<" th"<<endl;
 cout<<"Rata-rata umur mahasiswa : "<<r<<" th"<<endl;
 getch();
}

