#include <iostream>
using namespace std;

main()
{
	int bil, i, genap, ganjil, bnyk_genap, bnyk_ganjil;
	float rata_genap, rata_ganjil;
	bnyk_genap=0;
	bnyk_ganjil=0;
	genap=0;
	ganjil=0;
	for (i=0; i<4; i++)
	{
		cout<<"Masukkan Bilangan = ";
		cin>>bil;
	{
		if(bil%2==0)
		genap = genap+bil;
		else
		ganjil = ganjil+bil;
	}
	{
		if(bil%2==0)
		bnyk_genap=bnyk_genap+1;
		else
		bnyk_ganjil =bnyk_ganjil+1;	
	}
	
	}
	cout<<"Jumlah Genap  = "<<genap<<endl;
	cout<<"Jumlah Ganjil = "<<ganjil<<endl;
	cout<<"Banyak Genap  = "<<bnyk_genap<<endl;
	cout<<"Banyak Ganjil = "<<bnyk_ganjil<<endl;
	rata_genap=genap/bnyk_genap;
	rata_ganjil=ganjil/bnyk_ganjil;
	cout<<"RATA-RATA GENAP  = "<<rata_genap<<endl;
	cout<<"RATA-RATA GANJIL = "<<rata_ganjil<<endl;
	return 0;
	
}
