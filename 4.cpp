#include <conio.h>
#include <iostream>
using namespace std;
main()
{
        string nama [20], alamat [50], jenis_kelamin [15], umur [5];
        int N, P;
        char x;
        cout <<"Silahkan Masukkan N = ";
        cin>> N;
        for (int indeks=0; indeks <=N-1; indeks++)
        {
                cout<<"Masukkan Nama Mahasiswa ke-"<<indeks<<"          : ";
                cin >> nama [indeks];
                cout<<"Masukkan Alamat Mahasiswa ke-"<<indeks<<"        : ";
                cin >> alamat [indeks];
                cout<<"Masukkan Umur Mahasiswa ke-"<<indeks<<"          : ";
                cin >> umur [indeks];
                cout<<"Masukkan Jenis Kelamin Mahasiswa ke-"<<indeks<<" : ";
                cin >> jenis_kelamin [indeks];
        }
        cout << "Daftar Nama Mahasiswa "<<endl;
        cout <<"------------------------"<<endl;
        for (int indeks=0; indeks <=N-1; indeks++)
        {
                cout << indeks <<'\t' << nama [indeks] << endl;
                cout << indeks <<'\t' << alamat [indeks] << endl;
                cout << indeks <<'\t'<< umur [indeks] << endl;
                cout << indeks <<'\t' << jenis_kelamin [indeks] << endl;
        }
        cout<<"Apakah anda ingin menambahkan data baru ? Y/N :";
    	cin>>x;
    	if (x=='Y')
    	cout<<"Menambhankan Data di Posisi Tengah"<<endl;
    	cout<<"Masukkan NO Data Tambahan                      : ";
    	cin>>P;
    	{
        for (int indeks=N-1; indeks>=P-1; indeks--)
        {
    	nama[indeks+1]=nama[indeks];
    	alamat[indeks+1]=alamat[indeks];
    	umur[indeks+1]=umur[indeks];
    	jenis_kelamin[indeks+1]=jenis_kelamin[indeks];
		}
        {
                cout<<"Masukkan Nama Mahasiswa Baru               : ";
    			cin>>nama[P-1];
    			cout<<"Masukkan Alamat Mahasiswa Baru             : ";
    			cin>>alamat[P-1];
    			cout<<"Masukkan Umur Mahasiswa Baru               : ";
    			cin>>umur[P-1];
    			cout<<"Masukkan Jenis Kelamin Mahasiswa Baru      : ";
    			cin>>jenis_kelamin[P-1];
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
        return 0;
}
