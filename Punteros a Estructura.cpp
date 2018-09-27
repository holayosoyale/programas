#include <iostream>
#include <conio.h>

using namespace std;

struct Estudiante{
	char nombre[25];
	float calif;
}estudiante, *ptr_estudiante=&estudiante;

void pedirDatos();
void mostrarDatos(Estudiante *);

int main()
{
	pedirDatos();
	mostrarDatos(ptr_estudiante);
	
	getch();
	return 0;
}


void pedirDatos(){
	cout<<"Digite nombre: "; cin.getline(ptr_estudiante->nombre,25,'\n');
	cout<<"\nDigite calificacion: "; cin>>ptr_estudiante->calif;
	
}

void mostrarDatos(Estudiante *ptr_estudiante){
	cout<<"\nNombre: "<<ptr_estudiante->nombre<<endl;
	cout<<"\nCalificacion: "<<ptr_estudiante->calif<<endl;
}

