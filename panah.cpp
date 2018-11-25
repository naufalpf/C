#include<iostream>
#include<conio.h>

using namespace std;
main()
{
int v,a,b,c,x;

cout<<"Masukkan Angka Untuk Gambar Segitiga :";
cin>>v;
cout<<endl;
for(x=v;x>0;x--)
{
for(a=x-1;a>0;a--)
{
cout<<" ";
}

for(b=v-(x-1);b>0;b--)
{
cout<<"*";
}
cout<<endl;
}

for(x=0;x<v;x++)
{
for(a=0;a<x+1;a++)
{
cout<<" ";
}

for(b=0;b<v-(x+1);b++)
{
cout<<"*";
}
cout<<endl;
}
getch();
}
