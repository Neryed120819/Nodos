#include <iostream>
#include <conio.h>
using namespace std;

struct nodo{
	int valor;
	nodo *puntero;
};


int main(int argc, char** argv){
	struct nodo dato1, dato2, dato3, dato4, dato5;
	dato1.valor=3;
	dato1.puntero=NULL;
	dato2.valor=7;
	dato2.puntero=NULL;
	dato3.valor=9;
	dato3.puntero=NULL;
	dato4.valor=11;
	dato4.puntero=NULL;
	dato5.valor=13;
	dato5.puntero=NULL;	
		
	dato1.puntero=&dato2;
	dato2.puntero=&dato3;
	dato3.puntero=&dato4;
	dato4.puntero=&dato5;
	dato5.puntero=NULL;
	
	cout<<dato1.valor<<endl;
	cout<<dato1.puntero->valor<<endl;
	cout<<dato1.puntero->puntero->valor<<endl;
	cout<<dato1.puntero->puntero->puntero->valor<<endl;
	cout<<dato1.puntero->puntero->puntero->puntero->valor<<endl;
	
	getch();
	return 0;
}
