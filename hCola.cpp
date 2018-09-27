#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};
//Insertar elementos a l cola 
void inCola(Nodo *&,Nodo *&,int);
void eliminarElementC(Nodo *&,Nodo*&,int&);
bool c_vacia(Nodo *);

int main(){
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	
	int dato;
	cout<<"\nIngrese -1 para salir.\n";
	
	do{
		cout<<"\nDigite un numero: "; cin>>dato;
		inCola(frente,fin,dato);
	}while(dato !=-1);
	
	
	//Eliminando elementos de la cola imprime los elementos y vacia la pila
	cout<<"\nElementos ingresados: ";
	while(frente !=NULL){
		eliminarElementC(frente,fin,dato);
		if(frente !=NULL){
			cout<<dato<<" ";
		}
	}
	
	getch();
	return 0;
}

//Insertando elementos a ala cola
void inCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *n_nodo=new Nodo();//declarando un nuevo nodo 
	
	n_nodo->dato=n;//asignando al nuevo nodo el dato a insertar en la cola
	//siguiente apunta directamente hacia null
	n_nodo->siguiente=NULL;
	
	if(c_vacia(frente)){
		frente = n_nodo;//si la cola esta vacia frente = nuevo nodo
	}
	else{
		fin->siguiente=n_nodo;//si la cola no esta vacia 
	}
	
	fin=n_nodo;
}
//determina si la cola esta vacia 
bool c_vacia(Nodo *frente){
	//si frente igual a null cola vacia retornar true
	return (frente==NULL)? true : false;
}

//Eliminando elementos de la cola
void eliminarElementC(Nodo *&frente, Nodo *&fin, int &n){
	
	n = frente->dato;//Elemento a eliminar
	Nodo *aux =  frente; //asignar frente para eliminar el primer nodo de la cola
	
	if(frente == fin){//si frente = fin solo hay un elemento en la cola
		frente=NULL;
		fin==NULL;
	}
	else{//si hay mas de un nodo
		frente = frente->siguiente;//senala la siguiente posicion de la cola
	}
	
	delete aux;
}

