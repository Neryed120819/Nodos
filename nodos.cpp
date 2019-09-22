#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo {
	int valor;
	struct nodo *puntero;
};


//Se definen las funciones
void menu();
void agregar(nodo*&, int);
void imprimir(nodo*);

int num, valor;
nodo*lista=NULL;

//INICIO 
int main ()
{
	menu();
	return 0;
}
	
//Funcion del menu
void menu(){
	
	do
	{
		cout<<"\t_|Menu|_"<<endl;
		cout<<"1. Agregar nodo"<<endl;
		cout<<"2. Imprimir nodo"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Selecciona una opcion: ";
		cin>>num;
		
		switch(num)
		{
			case 1:
				cout<<"Ingresa un valor: ";
				cin>>valor;
				agregar(lista, valor);
				cout<<"Valor guardado correctamente"<<endl;
				system("pause");
			break;
			case 2:
				cout<<"El valor guarado es: "<<endl;
				imprimir(lista);
				cout<<endl;
				system("pause");
			break;
		}
			
		//system("cls");
	}while (num!=3);
}


//Funcion agregar nodos
void agregar(nodo*&lista, int dat)
{
	nodo*nuevoNod=new nodo();
	nuevoNod->valor=dat;
	nodo*aux1=lista;
	nodo*aux2;
	while ( (aux1!= NULL) && (aux1->valor<dat) )
	{
		aux2=aux1;
		aux1=aux1->puntero;
	}
		if (lista==aux1)
		{
			lista=nuevoNod;
		}
		else{
			aux2->puntero=nuevoNod;
		}
	nuevoNod->puntero=aux1;
}



//Funcion imprimir nodos
void imprimir(nodo*lista)
{
	nodo*ac=new nodo();
	ac=lista;
	while (ac!= NULL)
	{
		cout<<"->"<<ac->valor;
		ac=ac->puntero;
	}
}
