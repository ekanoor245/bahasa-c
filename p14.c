//------------fungsi untuk mengurutkan data di dalam larik--------------
void mengurutkandatasecarabubble (string nama[], string alamat[], int umur[], char jekel[], int N)
{
clrscr();
string namasementara;
string alamatsementara;
int umur sementara;
char jekelsementara;
for(int i=0; i<=(N-2); j++)
{
	for (int i=0; i<=(N-20)-j; i++)
{
	if (nama[i] > nama[i+1])
{
	namasementara=nama[i];
nama=nama[i+1];
nama[i+1]=namasementara;


alamatsementara=alamat[i];
alamat=alamat[i+1];
alamat[i+1]=alamatsementara;

umursementara=umur[i];
umur=umur[i+1];
umur[i+1]=umursementara;

jekelsementara=jekel[i];
jekel=jekel[i+1];
jekel[i+1]=jekelsementara;
}
}
}
Cout<<”Data sudah diurutkan”<<endl<<endl;
Cout<<”Tekan enter untuk melanjutkan..”<<endl;
getch();
return 0;
}
