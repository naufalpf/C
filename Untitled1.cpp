#include <stdio.h>
 
#include <algorithm>
 
#include <string>
 
#include <iostream>
 
#define maks 100
 
using namespace std;
 
 
 
 
char puzzle[maks][maks];
 
int arah,sum;
 
int w,h;
 
string kata;
 
int len_kata,pos;
 
int in_x[100];
 
int in_y[100];
 
bool valid;
 
int direction;
 
 
 
 
/*
 
1 = up
 
2 = up right
 
3 = right
 
4 = down right
 
5 = down
 
6 = down left
 
7 = left
 
8 = up left
 
*/
 
 
 
 
void findword(int x, int y)
 
{
 
if(pos == len_kata) valid = true;
 
if(x>=0 && x<w && y>=0 && y<=h && valid==false)
 
{
 
//up
 
if(puzzle[x-1][y]==kata[pos] && (direction==1 || direction==0))
 
{
 
direction = 1;
 
in_x[pos] = x-1;
 
in_y[pos] = y;
 
pos++;
 
findword(x-1,y);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//upright
 
else if(puzzle[x-1][y+1]==kata[pos] && (direction==2 || direction==0))
 
{
 
direction = 2;
 
in_x[pos] = x-1;
 
in_y[pos] = y+1;
 
pos++;
 
findword(x-1,y+1);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//right
 
else if(puzzle[x][y+1]==kata[pos] && (direction==3 || direction==0))
 
{
 
direction = 3;
 
in_x[pos] = x;
 
in_y[pos] = y+1;
 
pos++;
 
findword(x,y+1);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//downright
 
else if(puzzle[x+1][y+1]==kata[pos] && (direction==4 || direction==0))
 
{
 
direction = 4;
 
in_x[pos] = x+1;
 
in_y[pos] = y+1;
 
pos++;
 
findword(x+1,y+1);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//down
 
else if(puzzle[x+1][y]==kata[pos] && (direction==5 || direction==0))
 
{
 
direction = 5;
 
in_x[pos] = x+1;
 
in_y[pos] = y;
 
pos++;
 
findword(x+1,y);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//downleft
 
else if(puzzle[x+1][y-1]==kata[pos] && (direction==6 || direction==0))
 
{
 
direction = 6;
 
in_x[pos] = x+1;
 
in_y[pos] = y-1;
 
pos++;
 
findword(x+1,y-1);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//left
 
else if(puzzle[x][y-1]==kata[pos] && (direction==7 || direction==0))
 
{
 
direction = 7;
 
in_x[pos] = x;
 
in_y[pos] = y-1;
 
pos++;
 
findword(x,y-1);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
//upleft
 
else if(puzzle[x-1][y-1]==kata[pos] && (direction==8 || direction==0))
 
{
 
direction = 1;
 
in_x[pos] = x-1;
 
in_y[pos] = y-1;
 
pos++;
 
findword(x-1,y-1);
 
pos--;
 
if(pos==1) direction==0;
 
}
 
}
 
}
 
 
 
 
void display(int x, int y)
 
{
 
//display matrix
 
for(x=0;x<w;x++)
 
{
 
for(y=0;y<h;y++)
 
{
 
cout << puzzle[x][y];
 
}
 
printf("\n");
 
}
 
}
 
 
 
 
void reset()
 
{
 
pos=0;
 
valid=0;
 
arah=0;
 
}
 
 
 
 
int main()
 
{
 
int i,j, answer;
 
scanf("%d",&w);
 
scanf("%d",&h);
 
valid = 0;
 
arah = 0;
 
pos = 0;
 
int stop = 0;
 
//input karakter pada array
 
for(i=0;i<w;i++)
 
{
 
for(j=0;j<h;j++)
 
{
 
cin >> puzzle[i][j];
 
}
 
}
 
 
 
 
while(stop == 0)
 
{
 
cout << "Masukkan kata yang ingin dicari : ";
 
cin >> kata;
 
 
 
 
len_kata = kata.length();
 
//mulai melakukan pencarian
 
for(i=0;i<w;i++)
 
{
 
for(j=0;j<h;j++)
 
{
 
if(kata[0] == puzzle[i][j] && valid==false)
 
{
 
//pencatatan indeks
 
in_x[pos] = i;
 
in_y[pos] = j;
 
pos++;
 
 
 
 
findword(i, j);
 
//findword(int pos, int direction)
 
pos--;
 
}
 
}
 
}
 
 
 
 
cout << endl;
 
 
 
 
if(valid==true)
 
cout << "ADA" << endl << endl;
 
else
 
cout << "TIDAK ADA" << endl << endl;
 
 
 
 
for(i=0;i<len_kata;i++)
 
{
 
puzzle[in_x[i]][in_y[i]] = puzzle[in_x[i]][in_y[i]] - 32;
 
}
 
 
 
 
display(i,j);
 
 
 
 
//reset tabel menjadi huruf kecil semua
 
for(i=0;i<len_kata;i++)
 
{
 
puzzle[in_x[i]][in_y[i]] = puzzle[in_x[i]][in_y[i]] + 32;
 
}
 
 
 
 
reset();
 
 
 
 
cout << endl;
 
cout << "Apakah ingin mengakhiri? Ketik 0 untuk bermain lagi, ketik 1 untuk mengakhiri" << endl;
 
cout << "Jawaban : ";
 
cin >> answer;
 
stop = answer;
 
}
 
 
 
 
system("PAUSE");
 
return 0;
 
}
