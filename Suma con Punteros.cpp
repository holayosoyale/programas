#include <iostream>
#include <conio.h>

using namespace std;

int arreglo[]={39,95,36,74,46,85,35,65,89,79};
int *n;
int main()
{
	int suma;
	float promedio;
	for(int i=0; i<10; i++)
	{
		n=&arreglo[i];
		suma+=*n;
		if(i==9)
		{
			i++;
			promedio=suma/i;
		}
	}
	cout<<"El promedio es: "<<promedio<<endl;
	cout<<"La suma de los elementos del arreglo es: "<<suma;
	
	getch();
	return 0;
}

