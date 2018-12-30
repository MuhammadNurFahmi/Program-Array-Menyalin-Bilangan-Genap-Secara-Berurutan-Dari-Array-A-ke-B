#include<iostream>
using namespace std;

int main ()
{
	int c[5] = {5,10,6,0,4};
	int d[5];
	int i=0, j=0;
	
	printf("Nilai Array Yang Akan Ditampilkan\n");
	for(i=4; i>=0; i--)
	{
		d[i]=c[j];
		printf("%d", c[j]);
		j++;
	}
	printf("\n");
	printf("Nilai Array Yang Disalin Bilangan Genap Dan Lebih Besar Dari Angka Nol Secara Berurutan =\n");
	for(i=4; i>=0; i--)
	if(d[i]%2==0 && d[i] > 0)
	{
		printf("%d", d[i]);
	}
	return 0;
}
