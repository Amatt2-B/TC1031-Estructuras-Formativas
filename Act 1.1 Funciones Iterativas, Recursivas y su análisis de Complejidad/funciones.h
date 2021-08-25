#ifndef FUNCIONES
#define FUNCIONES

#include <iostream>

class Funcion{
  public:
  Funcion();
  int sumIterativa(int);
  int sumRecursiva(int);
  int sumDirecta(int);
};

Funcion::Funcion(){

}

int Funcion::sumIterativa(int n){
   int acum=0;
  for (int i=0;i<=n;i++){
    acum=acum+i;
  }
	return acum;
}

int Funcion::sumRecursiva(int n){
   if (n==0){
     return 0;
   }
	return n+sumRecursiva(n-1);
}

int Funcion::sumDirecta(int n){
   
	return (n*(n+1))/2;
}
#endif 
