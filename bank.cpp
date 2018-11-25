#include <stdio.h>  
 #include <stdlib.h>  
 int main(void)  
 {  
 int pilihan;  
 int transaksi,saldo=2000000,setor;  
 printf("------------+ATM Bank ABC+------------\n1.Tarik Tunai\n2.Transfer\n3.Informasi Saldo\n");  
 printf("------------------+++------------------\nMasukan Pilihan Anda : ");  
 scanf("%d",&pilihan);  
 switch (pilihan)  
 {  
      case 1:  
           printf("\n 1.Tarik Tunai\n ");  
           printf(" Masukan Jumlah: ");  
           scanf("%d",&transaksi);  
           saldo-=transaksi;  
           printf(" Saldo Anda Sekrang : %d\n",saldo);  
      break;  
      case 2:  
           printf("\n 2.Setoran Tunai\n");  
           printf(" Masukan jumlah: ");  
           scanf("%d",&setor);  
           saldo+=setor;  
           printf(" Saldo Anda Sekarang : %d\n",saldo);  
      break;  
      case 3:  
           printf("\n 3.Informsi Saldo\n");  
           printf(" Saldo Anda Sekarang : %d\n",saldo);  
      break;  
      default:  
           printf("Perintah Salah (Masukan 1-3)\n");  
      break;  
 }  
 system("pause");  
 return(0);  
 
 }  
