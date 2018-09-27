#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void menu();
void inDatos(Nodo *&,int);
void mostrarDatos(Nodo *);
int main(){
	
	int dato,opcion;
	Nodo *lista = NULL;
	
	do{
		menu();
		cin>>opcion;
		switch(opcion){
	    	case 1:
		    	cout<<"Ingrear datos: "; cin>>dato;
			    inDatos(lista,dato);
	    		break;
		    case 2:
			    cout<<"\n\t---------------Mostrando datos------------\n"<<endl;
    			mostrarDatos(lista);
	    		break;
		    case 3:
    			cout<<"\nGracias por utilizar el programa."<<endl;
	    		break;
    	}
	}while(opcion !=3);
	
	
	
	getch();
	return 0;
}

//Muestra menu al usuario
void menu(){
	
	cout<<"\n\n\tMENU"<<endl;
	cout<<"1.Ingresar datos."<<endl;
	cout<<"2.Mostrar datos."<<endl;
	cout<<"3.Salir."<<endl;
	cout<<"Elige opcion: ";
}

//Funcion para ir ordenando los elementos
void inDatos(Nodo *&lista,int x){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = x;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 != NULL) && (aux1->dato < x)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista == aux1){
		lista = nuevo_nodo;
		
	}else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
}

//Muestra los datos al usuario
void mostrarDatos(Nodo *lista){
	int contador=0;
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		contador++;
		if(contador==4){
			cout<<"\n\n";
			contador=0;
		}
		cout<<"\t"<<actual->dato<<" ";
		actual = actual->siguiente;
	}
}

