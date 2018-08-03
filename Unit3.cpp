#include <conio.h>
#include <iostream>
using namespace std;
main()
{
        string nama [20], alamat [50], jenis_kelamin [15], umur [5];
        int N;
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
    	{
        for (int indeks=N - 1; indeks>=0; indeks--)
         {
    	nama[indeks+1]=nama[indeks];
    	alamat[indeks+1]=alamat[indeks];
    	umur[indeks+1]=umur[indeks];
    	jenis_kelamin[indeks+1]=jenis_kelamin[indeks];
		}
        {
                cout<<"Masukkan Nama Mahasiswa Baru               : ";
    			cin>>nama[0];
    			cout<<"Masukkan Alamat Mahasiswa Baru             : ";
    			cin>>alamat[0];
    			cout<<"Masukkan Umur Mahasiswa Baru               : ";
    			cin>>umur[0];
    			cout<<"Masukkan Jenis Kelamin Mahasiswa Baru      : ";
    			cin>>jenis_kelamin[0];
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
