//fungsi untuk menghapus data di akhir larik
void hapusdatadibelakang(int &N)
{
clrscr();
//menghapus data di akhir larik: dengan cara menyusutkan nilai N sebesar 1
N--;
cout<<"data anda telah terhapus"<<endl;
cout<<endl;
cout<<"tekan enter untuk melanjutkan..<<endl;
getch();
}
//fungsi untuk menghapus data diawal larik
void hapusdatadidepan (string nama[20];string lamat[20];int umur[20];char jekel[20];int &N)
{
clrscr();
//menggeser semua data dalam larik 1 langkah kedepan
  for (i=0, i<=N-2, i++)
  {
  nama[i]=nama[i+1];
  alamat[i]=alamat[i+1];
  umur[i]=umur[i+1];
  jekel[i]=jekel[i+1];
  }
//setelah data hilang nilai N disusut 1
N--;
cout<<"data telah terhapus"<<endl;
cout<<endl;
cout<<"tekan enter untuk melanjutkan.."<<endl;
getch();
}
//fungsi untuk menghapus data di tengah larik
void hapusdataditengah(string nama[20];string lamat[20];int umur[20];char jekel[20];int &N)
{
clrscr();
int P;
cout<<"silahkan masukkan lokasi data yang akan dihapus :";
cin>>P;
//menggeser data hilang nilai N disusut 1
N--;
cout<<"data anda telah terhapus"<<endl;
cout<<endl;
cout<<"tekan enter untuk melanjutkan..<<endl;
getch();
}
//fungsi untuk menghapus data diawal larik
void hapusdatadidepan (string nama[20];string lamat[20];int umur[20];char jekel[20];int &N)
{
clrscr();
//menggeser semua data dalam larik 1 langkah kedepan
  for (i=0, i<=N-2, i++)
  {
  nama[i]=nama[i+1];
  alamat[i]=alamat[i+1];
  umur[i]=umur[i+1];
  jekel[i]=jekel[i+1];
  }
//setelah data hilang nilai N disusut 1
N--;
cout<<"data telah terhapus"<<endl;
cout<<endl;
cout<<"tekan enter untuk melanjutkan.."<<endl;
getch();
}
