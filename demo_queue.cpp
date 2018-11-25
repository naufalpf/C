#include <stdio.h>

typedef struct {
	int angka[15];
	int head;
	int tail;
} queue;

int isEmpty (queue kartu)
{
	if(kartu.head > kartu.tail) return 1;
	else return 0;
}
void initqueue (queue *kartu)
{
	kartu->head=0;
	kartu->tail=-1;
}

void masuk(queue *kartu, int input)
{
	kartu->angka[++kartu->tail] = input;
}

void dequeue(queue *kartu)
{
	if(!isEmpty(*kartu)) kartu->head++;
}
int main() {
	queue kartu;
	
	int i, j, input[5], pilihan, jumlah=5;
	
	initqueue(&kartu);
	
	for(i=0;i<jumlah;i++)
	{
		scanf("%d", &input[i]);
		masuk(&kartu, input[i]);
	}
	
	scanf("%d", &pilihan);
	
	for(i=0;i<jumlah;i++)
	{
		if(kartu.angka[i]==pilihan)
		{
			dequeue(&kartu);
			break;	
		}  
		else 
		{
			dequeue(&kartu);
			masuk(&kartu, kartu.angka[i]);
		}
		
	}
	printf("\n");
	for(i=0;i<jumlah-1;i++)
	{
		printf("%d ", kartu.angka[kartu.head]);
		dequeue(&kartu);
	}
	
}

