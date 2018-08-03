#include <conio.h>
#include <iostream>
using namespace std;
main(){
  string nama [20], alamat[20];
  int n, umur[20];
  char x, jekel[20];

  cout<<"Silahkan Masukkan N = ";
  cin>>n;

  for (int i=0; i <=n-1; i++)
  {
    cout<<"Masukkan Nama Mahasiswa Ke- "<<i<<" : ";
    cin>>nama[i];
    cout<<"Masukkan Alamat Mahasiswa Ke- "<<i<<" : ";
    cin>>alamat[i];
    cout<<"Masukkan Umur Mahasiswa Ke- "<<i<<" : ";
    cin>>umur[i];
    cout<<"Masukkan Nama Jenis Kelamin Mahasiswa Ke- "<<i<<" p/w : ";
    cin>>jekel[i];
  }

    cout<<"Daftar Mahasiswa Yang Telah Dimasukkan"<<endl;
    cout<<"Nomor \t"<<"Nama \t"<<"Alamat \t"<<"Umur \t"<<"Jekel \t"<<endl;
    cout<<"--------------------------------------------"<<endl;
    for (int i=0; i <=n-1; i++)
    {
      cout<<i<<'\t'<<nama[i]<<'\t'<<alamat[i]<<'\t'<<umur[i]<<'\t'<<jekel[i]<<'\t'<<endl;
    }
    cout<<"Apakah anda ingin menambahkan data baru ? Y/N :";
    cin>>x;
    if (x=='Y')
    {
    for (int i=n-1; i>=0; i--)
  {
    cout<<"Masukkan Nama Mahasiswa Ke- "<<i<<" : ";
    cin>>nama[i];
    cout<<"Masukkan Alamat Mahasiswa Ke- "<<i<<" : ";
    cin>>alamat[i];
    cout<<"Masukkan Umur Mahasiswa Ke- "<<i<<" : ";
    cin>>umur[i];
    cout<<"Masukkan Nama Jenis Kelamin Mahasiswa Ke- "<<i<<" p/w : ";
    cin>>jekel[i];
  } }
  cin>>x;
    	if (x=='Y')
    	cout<<"Menambhankan Data di Posisi Tengah"<<endl;
    	{
    for (int indeks=N-1; indeks>=n-1; indeks--)
        {
    	nama[indeks+1]=nama[indeks];
    	alamat[indeks+1]=alamat[indeks];
    	umur[indeks+1]=umur[indeks];
    	jenis_kelamin[indeks+1]=jenis_kelamin[indeks];
		}
        {
                cout<<"Masukkan Nama Mahasiswa Baru               : ";
    			cin>>nama[p-1];
    			cout<<"Masukkan Alamat Mahasiswa Baru             : ";
    			cin>>alamat[p-1];
    			cout<<"Masukkan Umur Mahasiswa Baru               : ";
    			cin>>umur[p-1];
    			cout<<"Masukkan Jenis Kelamin Mahasiswa Baru      : ";
    			cin>>jenis_kelamin[p-1];
        }
		}
        cout << "Daftar Nama Mahasiswa "<<endl;
        cout <<"------------------------"<<endl;
        for (int indeks=0; indeks <=N; indeks++)
        {
                cout << indeks <<'\t' << nama [indeks] << endl;
                cout << indeks <<'\t' << alamat [indeks] << endl;
                cout << indeks <<'\t'<< umur [indeks] << endl;
                cout << indeks <<'\t' << jenis_kelamin [indeks] << endl;
        }

    cout<<"Daftar Mahasiswa Yang Telah Dimasukkan"<<endl;
    cout<<"Nomor \t"<<"Nama \t"<<"Alamat \t"<<"Umur \t"<<"Jekel \t"<<endl;
    cout<<"--------------------------------------------"<<endl;
    for (int i=0; i <=n; i++)
    {
      cout<<i<<'\t'<<nama[i]<<'\t'<<alamat[i]<<'\t'<<umur[i]<<'\t'<<jekel[i]<<'\t'<<endl;
    }
    getch();
}
