//fungsi untuk menambah data baru di akhir larik
	{
   clrscr ();
   cout<<"silahkan masukkan data baru sbb: "<<endl;
   //memasukkan data, langsung ditempatkan diposisi paling belakang (N)
   cout<<"nama : "; cin>>nama[i];
   cout<<"alamat : "; cin>>alamat[i];
   cout<<"umur : "; cin>>umur[i];
   cout<<"jenis kelamin : "; cin>>jekel[i];
   //N bertambah 1 orang
   N++;
   cout<<"data anda telah tersimpan"<<endl;
   cout<<"endl;
   cout<<"tekan enter untuk melanjutkan.."<<endl;
   getch();
   }
//fungsi untuk menambah data baru di awal larik
voidtambahdata(string nama[], string alamat[], int umur[], char jekel[] , int &N)
{
clrscr();
//menggeser semua data dalam larik 1 langkah ke belakang
for(int i<=N-1, i>=0, i--)
   {
   nama[i+1] = nama[i];
   alamat[i+1] = alamat[i];
   umur[i+1] = umur[i];
   jekel[i+1] = jekel[i];
   }
//memasukkan data, langsung ditempatkan di posisi paling depan (N)
   cout<<"silahhkan masukkan data baru sbb: ";
	cout<<"nama : "; cin>>nama[i];
   cout<<"alamat : "; cin>>alamat[i];
   cout<<"umur : "; cin>>umur[i];
   cout<<"jenis kelamin : "; cin>>jekel[i];
   N++;
   cout<<"data anda telah tersimpan"<<endl;
   cout<<"endl;
   cout<<"tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//fungsi untuk menambah data baru di tengah larik
void tambahadataditengah (string nama[], string alamat[], int umur[], char jekel[] , int &N)
{
clrscr();
int P;
cout<<"silahkan masukkan lokasi penyisipan : ";
cin>>P;
//menggeser data dalam larik mulai dari larik ke P dan seterusnya 1 langkah kebelakang
 for(int i<=N-1, i>=P, i--)
   {
   nama[i+1] = nama[i];
   alamat[i+1] = alamat[i];
   umur[i+1] = umur[i];
   jekel[i+1] = jekel[i];
   }
//memasukkan data, langsung ditempatkan di posisi P
	cout<<"silahhkan masukkan data baru sbb: ";
	cout<<"nama : "; cin>>nama[i];
   cout<<"alamat : "; cin>>alamat[i];
   cout<<"umur : "; cin>>umur[i];
   cout<<"jenis kelamin : "; cin>>jekel[i];
   N++;
   cout<<"data anda telah tersimpan"<<endl;
   cout<<"endl;
   cout<<"tekan enter untuk melanjutkan.."<<endl;
   getch();
}
