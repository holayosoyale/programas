#include <iostream>
#include <conio.h>
#include <stdlib.h>

//new reserva el numero de bytes solicitado por la direccion
//delete libera un bloque de bytes reservado con anterioridad
using namespace std;

void pedirNotas();
void mostrarNotas();
int numCalif, *calif;

int main()
{
	pedirNotas();
	mostrarNotas();
	delete[] calif;//liberando el espacion en bytes utilizadon en el arreglo dinamico
	
	getch();
	return 0;
}

void pedirNotas()
{
	cout<<"Digite el numero de calificaciones: "; cin>>numCalif;
	calif=new int[numCalif];//crear el arreglo de tipo dinamico
	
	for(int i=0; i<numCalif; i++){
		cout<<"Ingrese calificacion: "; cin>>calif[i];
	}
}
void mostrarNotas()
{
	cout<<"\nMostarndo calificaciones al usuario."<<endl;
	for(int i=0 ; i<numCalif; i++)
	{
		cout<<calif[i]<<endl;
	}
}
