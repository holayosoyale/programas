#include <iostream>
#include <conio.h>
// Valor y direccion de memoria
	using namespace std;

//Se mostraran los valores y direccion en memoria de los elementos del arreglo 
	int arreglo[]={9,8,7,6,5,4,3,2,11,20};

//Variable tomara el valor de los elementos del arreglo 
	int *n;

	int main()
{
	//Ciclo for para recorrer los elementos del arreglo e imprimir valor y dereccion de memoria
	for(int i=0; i<10; i++)
	{
		n=&arreglo[i];
		cout<<"\n";
		//Imprimir direccion 
		cout<<"Arreglo direccion: "<<&n<<endl;
		//Imprimir valor
		cout<<"Arreglo valor: "<<*n<<"\n";
	}
	
	getch();
	return 0;
}

