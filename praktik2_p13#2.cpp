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
   cout<<"3. menambahkan data (+) di akhir larik"<<endl<<endl;
   cout<<"4. menambahkan data (+) di awal larik"<<endl;
   cout<<"5. menambahkan data (+) di akhir larik"<<endl;
   cout<<"keluar"<<endl<<endl;
   cout<<"silahkan masukkan pilihan menu anda :";
   cin>>pilihan;
   if (piihan == 1);
   ngisidata(nama, alamat, umur, jekel, N);
   else if (pilihan==2)
   tampilkandata(nama, alamat, umur, jekel, N);
   else if (pilihan==3)
   tampilkandatadibelakang(nama, alamat, umur, jekel, N);
    else if (pilihan==4)
   tampilkandatadidepan(nama, alamat, umur, jekel, N);
    else if (pilihan==5)
   tampilkandataakhir(nama, alamat, umur, jekel, N);
}
   while(pilihan != 6);
   clrscr();
   cout<<"terimakasih telah menggunakan program saya. see you next time"<<endl;
   getch();
}
