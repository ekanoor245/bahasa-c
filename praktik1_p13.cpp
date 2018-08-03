#include<iostream.h>
#include<conio.h>
#include<cstring.h>
//fungsi untuk mengisi larik
void ngisidata(string nama[], string alamat[], int umur[]; char jekel[], int &N)
{
clrscr();
cout<<"hendak memasukkan berapa orang (N) : ";
cin>>N;
//memasukkan data secara berulang sebanyak N kali
	for(int i, i<=N-1, i++)
   {
   clrscr ();
   cout<<"masukkan data ke- "<< i <<endl;
   cout<<"nama : "; cin>>nama[i];
   cout<<"alamat : "; cin>>alamat[i];
   cout<<"umur : "; cin>>umur[i];
   cout<<"jenis kelamin : "; cin>>jekel[i];
   }
cout<<"data anda telah tersimpan. "<<endl;
cout<<<endl;
cout<<"tekan enter untuk melanjutkan.."<<endl;
getch();
}

//fungsi untuk menampilkan isi larik
 void tampildata(string nama[], string alamat[], int umur[]; char jekel[], int &N)
{
clrscr();
cout<<"##############";
cout<<"No. Nama. Alamat. Umur. Jenis Kelamin. "<<endl;
cout<<"##############";
	for(int i, i<=N-1, i++)
   {
   cout<< i <<"  "<<nama[i]<<"  "<<alamat[i]<<"  "<<umur[i]<<"  "<<umur[i]<<"  "<<jekel[i]<<"  "<<endl;
   }
   cout<<"##############";
	cout<<<endl;
	cout<<"tekan enter untuk melanjutkan.."<<endl;
getch();
}

//program utama
void main()
{
string nama[20];
astring lamat[20];
int umur[20];
char jekel[20];
int N=0;
int pilihan=0;
do
{
	clrscr();
   cout<<"menu program saya : "<<endl<<endl;
   cout<<"1. mengisi data awal"<<endl;
   cout<<"2. menampilkan isi larik"<<endl;
   cout<<"3. keluar"<<endl<<endl;
   cout<<"silahkan masukkan pilihan menu anda :";
   cin>>pilihan;
   if (piihan != 3);
   tampilkandata(nama, alamat, umur, jekel, N);
   else if (pilihan==2)
   tampilkandata(nama, alamat, umur, jekel, N);
}
	while(pilihan != 3);
   clrscr();
   cout<<"terimakasih telah menggunakan program saya. see you next time"<<endl;
   getch();
}
