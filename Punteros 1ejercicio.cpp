#include <iostream>
#include <conio.h>

using namespace std;

int numero=12;
char a='a';
float f=1.23;
int numero2=14;
int *puntero;

int main()
{
	puntero=&numero;
	
	cout<<"Numero "<<puntero<<endl;
	cout<<"Memoria char "<<&a<<endl;
	cout<<"Memoria float "<<&f<<endl;
	cout<<"Memoria entero "<<&numero2<<endl;
	
	
	getch();
	return 0; 
}

