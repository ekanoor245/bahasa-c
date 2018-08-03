#include<conio.h>
#include<iostream.h>
#include<cstring.h>
//--------------------------------------------------------------------
//------------------------fungsi untuk mengisi larik------------------
//--------------------------------------------------------------------
void ngisiData(string nama[], string alamat[], int umur[], char jekel[], int &N)
{ clrscr();
   cout<<"hendak memasukkan beberapa orang (N) : ";
   cin>>N;
   //memasukkan data secara  berulang sebanyak N kali
   for (int i=0; i<=N-1; i++)
   {    clrscr();
        cout<<"Masukkan data ke " <<i<<endl;
        cout<<"nama          : "; cin>>nama[i];
        cout<<"alamat        : "; cin>>alamat[i];
        cout<<"umur          : "; cin>>umur[i];
        cout<<"jenis kelamin : "; cin>>jekel[i];
   }
   cout<<"Data telah tersimpan. "<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//--------------------------------------------------------------------
//--------------------fungsi untuk menampilkan isi larik--------------
//--------------------------------------------------------------------
void tampilkanData(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   cout<<"--------------------------------------"<<endl;
   cout<<"No. Nama   Alamat  Umur  JenisKelamin "<<endl;
   cout<<"--------------------------------------"<<endl;
   for (int i=0; i<=N-1; i++)
   {   cout<<i<<" "<<nama[i]<<" "<<alamat[i]<<" "<<umur[i]<<" "<<jekel[i]<<endl;
}
   cout<<"--------------------------------------"<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//--------------------------------------------------------------------
//----------fungsi untuk menambah data baru di akhir larik------------
//--------------------------------------------------------------------
void tambahDataBelakang(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   cout<<"Silakan masukkan data baru sbb : "<<endl;
   //memasukkan data, langsung ditempatkan di posisi paling belakang (N)
   cout<<"nama: "; cin>>nama[N];
   cout<<"alamat : "; cin>>alamat[N];
   cout<<"umur : "; cin>>umur[N];
   cout<<"jenis kelamin : "; cin>>jekel[N];
   //N bertambah 1 orang
   N++;
   cout<<"Data telah tersimpan."<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//--------------------------------------------------------------------
//---------fungsi untuk menambah data baru di awal larik--------------
//--------------------------------------------------------------------
void tambahDataDepan(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   //menggeser semua data dalam larik 1 langkah ke belakang
   for (int i=N-1; i>=0; i--)
   {    nama[i+1] = nama[i];
        alamat[i+1] = alamat[i];
        umur[i+1] = umur[i];
        jekel[i+1] = jekel[i];
   }
   //memasukkan data, langsung ditempatkan di posisi paling depan (0)
   cout<<"Silakan masukkan data baru sbb : "<<endl;
   cout<<"nama: "; cin>>nama[0];
   cout<<"alamat : "; cin>>alamat[0];
   cout<<"umur : "; cin>>umur[0];
   cout<<"jenis kelamin : "; cin>>jekel[0];
   N++;
   cout<<"Data telah tersimpan."<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//--------------------------------------------------------------------
//----------fungsi untuk menambah data baru di tengah larik-----------
//--------------------------------------------------------------------
void tambahDataDiTengah(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   int P;
   cout<<"Silakan masukkan lokasi penyisipan : ";
   cin>>P;
   //menggeser data dalam larik mulai dari larik  ke P dan seterusnya 1 langkah ke belakang
   for (int i=N-1; i>=P; i--)
   {    nama[i+1] = nama[i];
        alamat[i+1] = alamat[i];
        umur[i+1] = umur[i];
        jekel[i+1] = jekel[i];
   }
   //memasukkan data, langsung ditempatkan di posisi ke-P
   cout<<"Silakan masukkan data baru sbb : "<<endl;
   cout<<"nama: "; cin>>nama[P];
   cout<<"alamat : "; cin>>alamat[P];
   cout<<"umur : "; cin>>umur[P];
   cout<<"jenis kelamin : "; cin>>jekel[P];
   N++;
   cout<<"Data telah tersimpan."<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//--------------------------------------------------------------------
//---------fungsi untuk menghapus data di akhir larik-----------------
//--------------------------------------------------------------------
void hapusDataBelakang(int &N)
{  clrscr();
   int P;
   cout<<"Silakan masukan posisi yang akan dihapus"<<endl;
   cin>>P;
   //menghapus data di akhir larik: dengan cara menyusutkan nilai N sebesar 1
   N--;
   cout<<"Data telah terhapus"<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//--------------------------------------------------------------------
//----------fungsi untuk menghapus data di awal larik-----------------
//--------------------------------------------------------------------
void hapusDataDepan(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   //menggeser semua data dalam larik 1 langkah ke depan
   for (int i=0; i<=N-2; i++)
   {    nama[i] = nama[i+1];
        alamat[i] = alamat[i+1];
        umur[i] = umur[i+1];
        jekel[i] = jekel[i+1];
   }
   //setelah data hilang nilai N disusut 1
   N--;
   cout<<"Data telah terhapus"<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//----------------------------------------------------------------------
//--------fungsi untuk menghapus data di tengah larik-------------------
//----------------------------------------------------------------------
void hapusDataTengah(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   int P;
   cout<<"Silakan masukkan lokasi data yang akan di hapus : ";
   cin>>P;
   //menggeser data dalam larik mulai dari larik  ke P dan seterusnya 1 langkah ke depan
   for (int i=P; i<=N-2; i++)
   {    nama[i] = nama[i+1];
        alamat[i] = alamat[i+1];
        umur[i] = umur[i+1];
        jekel[i] = jekel[i+1];
   }
   //setelah data hilang nilai N disusut 1
   N--;
   cout<<"Data telah terhapus"<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//----------------------------------------------------------------------------
//---fungsi untuk menghitung rata-rata umur dari semua orang didalam larik----
//----------------------------------------------------------------------------
void hitungRerataUmur(int umur[], int N)
{  clrscr();
   int tampung = 0;
   float rerata;
   //mulai data pertama hingga akhir, kumpulkan semua umur ke variabel tampung
   for (int i=0; i<=N-1; i++)
   {   tampung = tampung + umur[i];
   }
   //menghitung nilai rata-rata
   rerata = tampung / N;
   cout<<"Rerata Umur = "<<rerata<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//----------------------------------------------------------------------------------------
//--fungsi untuk mencari siapa yang usianya paling tua di antara semua orang dalam larik--
//----------------------------------------------------------------------------------------
void menampilkanNamaTertua(string nama[], string alamat[], int umur[], char jekel[], int N)
{  clrscr();
   int tertua = 0;
   int lokasiTertua = -1;
   //mulai data pertama hingga akhir, temukan dan catat jika ada umur yang lebih besar dari variabel 'tertua'
   for(int i=0; i<=N-1; i++)
   {   if(umur[i] > tertua)
       {  tertua = umur[i];
          lokasiTertua = i;
       }
   }
   cout<<"Umur Tertua : "<<tertua<<"tahun"<<endl;
   cout<<"Atas nama : "<<nama[lokasiTertua]
       <<", Alamat : "<<alamat[lokasiTertua]
       <<", Jenis Kelamin : "<<jekel[lokasiTertua]<<endl;
   cout<<"Di posisi ke : "<<lokasiTertua<<endl;
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}
//----------------------------------------------------------------------------------------
//---fungsi untuk menghitung berapa pria dan wanita dari semua orang di dalam larik-------
//----------------------------------------------------------------------------------------
void menampilkanBanyaknyaPriaWanita(char jekel[], int N)
{  clrscr();
   int banyaknyaPria = 0;
   int banyaknyaWanita = 0;
   for(int i=0; i<=N-1; i++)
   {   if(jekel[i] == 'P')
         banyaknyaPria++;
       else
         banyaknyaWanita++;
   }
   cout<<"Banyaknya Pria = "<<banyaknyaPria<<"orang"<<endl;
   cout<<"Banyaknya Wanita = "<<banyaknyaWanita<<"orang"<<endl;
   cout<<endl;
cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}

void mengurutkandatasecaraBubble (string nama[], string alamat[], int umur[], char jekel[], int N)
{
        clrscr();
        string namasementara;
        string alamatsementara;
        int umursementara;
        char jekelsementara;
        for (int j=0; j<=(N-2); j++)
        {
                for (int i=0; i<=(N-2)-j; i++)
                {
                        if (umur[i] > umur[i+1])
                        {
                                namasementara = nama[i];
                                nama[i] = nama[i+1];
                                nama[i+1] = namasementara;

                                alamatsementara = alamat[i];
                                alamat[i] = alamat[i+1];
                                alamat[i+1] = alamatsementara;

                                umursementara = umur[i];
                                umur[i] = umur[i+1];
                                umur[i+1] = umursementara;

                                jekelsementara = jekel[i];
                                jekel[i] = jekel[i+1];
                                jekel[i+1] = jekelsementara;
                        }
                }
        }
        cout << "Data sudah diurutkan" << endl;
        cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}


//--------------------------------------------------------------------
//--------fungsi untuk mencari sebuah nama di dalam larik-------------
//--------------------------------------------------------------------
void mencariDataSecaraLinier(string nama[], string alamat[], int umur[], char jekel[], int &N)
{  clrscr();
   string ketemu="false";
   int lokasiKetemu=0;
   string namaCari="";
   cout<<"Silakan masukkan nama orang yang anda cari : ";
   cin>>namaCari;
   //mulai data pertama hingga akhir, temukan dan catat jika nama sama dengan namaCari
   for(int i=0; i<=N-1; i++)
   {   if(nama[i] ==namaCari)
       { ketemu = "true";
       lokasiKetemu = i;
       }
   }
   //tampilkan hasil pencarian
   if (ketemu=="true")
   { cout<<"Data yang ada anda cari ditemukan, dilokasi ke "<<lokasiKetemu<<endl;
     cout<<"Atas nama : "<<nama[lokasiKetemu]
         <<", Alamat : "<<alamat[lokasiKetemu]
         <<", Umur : "<<umur[lokasiKetemu]
         <<", Jenis Kelamin : "<<jekel[lokasiKetemu]<<endl;
   }
   else
   {
     cout<<"Maaf Data yang anda maksud tidak ditemukan "<<endl;
   }
   cout<<endl;
   cout<<"Tekan enter untuk melanjutkan.."<<endl;
   getch();
}

void mencaridatasecaraBiner (string nama[], string alamat[], int umur[], char jekel[], int N)
{
        string namacari;
        string ketemu = "false";
        int posisi=0;
        cout << "Silahkan masukkan nama orang yang anda cari : ";
        cin >> namacari;

        int atas, bawah, tengah;
        atas =0;
        bawah = N;
        while (( ketemu == "false") && (atas <= bawah-1))
        {
                tengah = (atas + bawah) / 2;
                if (namacari < nama[tengah])
                        bawah = tengah;
                else if (namacari > nama[tengah])
                        atas = tengah;
                else
                {
                        ketemu = "true";
                        posisi = tengah;
                }
        }
        if (ketemu =="true")
                cout << "Data ketemu diposisi ke " << posisi << endl;
        else
                cout << "Maap mas, data yg anda cari nggak ada" << endl;
        cout << endl;
        cout << "Tekan neter untuk melanjutkan.."<<endl;
        getch();
}

//-------------------------------------------------------
//------fungsi untuk mengurut data di dalam larik--------
//-------------------------------------------------------
void mengurutkanDataSecaraBuble (string nama[], string alamat[], int umur[], char jekel[], int N)
{
        clrscr();
        string namaSementara;
        string alamatSementara;
        int umurSementara;
        char jekelSementara;
        for (int j=0; j<=(N-2); j++)
        {
                for (int i=0; i<=(N-2)-j; i++)
                {
                        if (nama[i] > nama[i+1])
                        {
                                namaSementara = nama[i];
                                nama[i] = nama[i+1];
                                nama[i+1] = namaSementara;

                                alamatSementara = alamat[i];
                                alamat[i] = alamat[i+1];
                                alamat[i+1] = alamatSementara;

                                umurSementara = umur[i];
                                umur[i] = umur[i+1];
                                umur[i+1] = umurSementara;

                                jekelSementara = jekel[i];
                                jekel[i] = jekel[i+1];
                                jekel[i+1] = jekelSementara;
                        }
                }
        }
        cout <<"Data sudah diurutkan" <<endl <<endl;
        cout <<"Tekan enter untuk melanjutkan.."<<endl;
        getch();
}

//=========================program utama==============================
void main()
{  string nama[20];
   string alamat[20];
   int umur[20];
   char jekel[20];
   int N=0;
   int pilihan=0;
   do
   { clrscr();
     cout<<"Menu Program Saya : "<<endl<<endl;
     cout<<"1. Mengisi Data Awal"<<endl;
     cout<<"2. Menampilkan isi Larik"<<endl;
     cout<<"3. Menambah data (+) di Akhir Larik"<<endl;
     cout<<"4. Menambah data (+) di Awal Larik"<<endl;
     cout<<"5. Menambah data (+) di Tengah Larik"<<endl;
     cout<<"6. Menghapus data (-) di Akhir Larik"<<endl;
     cout<<"7. Menghapus data (-) di Awal Larik"<<endl;
     cout<<"8. Menghapus data (-) di Tengah Larik"<<endl;
     cout<<"9. Hitung Rerata Umur"<<endl;
     cout<<"10. Tampilkan orang dengan Umur Tertua"<<endl;
     cout<<"11. Tampilkan banyaknya Pria dan Wanita"<<endl;
     cout<<"12. Mengurutkan Data"<<endl;
     cout<<"13. Mencari Data (linear)"<<endl;
     cout<<"14. Mencari Data (biner)"<<endl;
     cout<<"15. KELUAR"<<endl;
     cout<<"Silakan masukkan pilihan menu anda : ";
     cin>>pilihan;
     if (pilihan ==1)
         ngisiData(nama, alamat, umur, jekel, N);
     else if (pilihan == 2)
          tampilkanData(nama, alamat, umur, jekel, N);
     else if (pilihan == 3)
          tambahDataBelakang(nama, alamat, umur, jekel, N);
     else if (pilihan == 4)
          tambahDataDepan(nama, alamat, umur, jekel, N);
     else if (pilihan == 5)
          tambahDataDiTengah(nama, alamat, umur, jekel, N);
     else if (pilihan == 6)
          hapusDataBelakang(N);
     else if (pilihan == 7)
          hapusDataDepan(nama, alamat, umur, jekel, N);
     else if (pilihan == 8)
          hapusDataTengah(nama, alamat, umur, jekel, N);
     else if (pilihan == 9)
          hitungRerataUmur(umur, N);
     else if (pilihan == 10)
          menampilkanNamaTertua(nama, alamat, umur, jekel, N);
     else if (pilihan == 11)
          menampilkanBanyaknyaPriaWanita(jekel, N);
     else if (pilihan == 12)
          mengurutkandatasecaraBubble(nama, alamat, umur, jekel, N);
     else if (pilihan == 13)
          mencariDataSecaraLinier(nama, alamat, umur, jekel, N);
     else if (pilihan == 14)
          mencaridatasecaraBiner(nama, alamat, umur, jekel, N);
   }
   while (pilihan != 15 );
   clrscr();
   cout<<"Terimakasih telah menggunakan program saya. GoodBye"<<endl;
	getch();
}
