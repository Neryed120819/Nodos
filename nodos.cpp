#include <iostream>
#include <conio.h>
using namespace std;


struct nodo {
	int valor;
	nodo *puntero;
	
};

int main (int argc, char** argv){
	
	
	struct nodo *inicio;
	struct nodo *aux;
	inicio=NULL;
	//Mostrar el valor de un nodo
	//aux=new nodo ();
	//aux->valor=25;
	//aux->puntero=NULL;
	//cout<<aux->valor<<endl;
	
	//Mostrar los nodos con datos
	struct nodo dato1, dato2, dato3, dato4, dato5;
	dato1.valor=3;
	dato1.puntero=NULL;
	dato2.valor=7;
	dato2.puntero=NULL;
	dato3.valor=9;
	dato3.puntero=NULL;
	dato4.valor=10;
	dato4.puntero=NULL;
	dato5.valor=11;
	dato5.puntero=NULL;
	
	
	dato1.puntero=&dato2;
	dato2.puntero=&dato3;
	dato3.puntero=&dato4;
	dato4.puntero=&dato5;
	dato5.puntero=NULL;
	
	cout<<"\t"<<"Valor de nodos"<<"\t"<<endl;
	cout<<dato1.valor<<endl;
	cout<<dato1.puntero->valor<<endl;
	cout<<dato1.puntero->puntero->valor<<endl;
	cout<<dato1.puntero->puntero->puntero->valor<<endl;
	cout<<dato1.puntero->puntero->puntero->puntero->valor<<endl;
	
	
	//Mostrar nodos con el auxiliar
	aux=new nodo();
	aux->valor=12;
	aux->puntero=NULL;
	inicio=aux;
	
	aux=new nodo();
	aux->valor=13;
	aux->puntero=NULL;
	inicio->puntero=aux;
	
	aux=new nodo();
	aux->valor=14;
	aux->puntero=NULL;
	inicio->puntero->puntero=aux;
	
	aux=new nodo();
	aux->valor=15;
	aux->puntero=NULL;
	inicio->puntero->puntero->puntero=aux;
	
	aux=new nodo();
	aux->valor=16;
	aux->puntero=NULL;
	inicio->puntero->puntero->puntero->puntero=aux;
	
	cout<<"\t"<<"Valor de nodos"<<"\t"<<endl;
	cout<<inicio->valor<<endl;
	cout<<inicio->puntero->valor<<endl;
	cout<<inicio->puntero->puntero->valor<<endl;
	cout<<inicio->puntero->puntero->puntero->valor<<endl;
	cout<<inicio->puntero->puntero->puntero->puntero->valor<<endl;


	
	getch();
	return 0;
	
}

