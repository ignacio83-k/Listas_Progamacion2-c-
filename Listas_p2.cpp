#include <iostream>
#include <cstdlib>
using namespace std;
const int v = 7;
const int N = 20;

struct nodo
{
 int nro;
 struct nodo *sgte;
};
typedef struct nodo *List;
// PROTOTIPOS DE FUNCION
void cargar_valores(List lista[], int v ,int dato);
void impListas(List lista[],int n);


// CONSTRUCTOR ARRAY DE LISTAS (NULL)
 List lista[N] = {NULL};


// CONSTRUCTOR carga listas de arrays
void cargar_valores(List lista[], int v,int dato){
List p;	
p = new nodo ();
p->nro= dato;	
p->sgte = lista [v];	
lista[v]=p;		
	
}

// IMPRIME LAS LISTAS DE ARREGLO
void impListas(List lista[],int v)
{
 List p;
 for(int i=0;i<v ;i++)
 {
  cout<<"--- [Lista #"<<i<<"] --- "<<endl;
  int k=0;
  p = lista[i];
  while(p)
  {
   
     cout<< "  ->[ "<<   p->nro<<   "]  " <<endl;           
   p = p->sgte;
   k++;
  }
  cout<<"\n";
  cout<<"Total elementos: "<<k<<endl;
  cout<<"-----------------"; 
  cout<<"\n";
 }
} 

// Funcion main 
int main()
{
int dato;	
// Carga valores de las listas de arreglo 	
cargar_valores ( lista ,0,1);
cargar_valores ( lista ,1,2);
cargar_valores ( lista ,1,3);
cargar_valores ( lista ,3,4);
cargar_valores ( lista ,4,5); 
cargar_valores ( lista ,5,6);
cargar_valores ( lista ,5,2);
 
 impListas(lista,v);
 return 0;
}
