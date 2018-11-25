#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int bil, i, j;

cout<<"Program Membuat Anak Panah"<<endl;
cout<<"Masukan angka: ";
cin>>bil;
cout<<endl;
cout<<"Gambar Anak Panah"<<endl;
if((bil>0)&&(bil<=bil))
{
for(i=bil;i>=1;i--)
{
for(j=i;j>0;j--)
{
cout<<" ";
}

for(j=1;j<=bil;j++)
{
cout<<"*";
}
cout<<endl;
}

for(i=0;i<=bil;i++)
{
for(j=0;j<i;j++)
{
cout<<" ";
}

for(j=1;j<=bil;j++)
{
cout<<"*";
}
cout<<endl;
}
}
getch();
}
