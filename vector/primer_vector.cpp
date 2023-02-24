/*ejemplo de un array sencillo
me piden que realice un programa que me permita declarar un vector*/

//incluimos libreria necesario

#include <iostream>
#include <conio.h>

//incluimos el espacio de nombres
using namespace std;

//declarar la funcion principal 
int main(){
/*vamos a declarar un vector de tipo entero, le colocamos un nombre 
y la cantidad de elementos que va a almacenar*/	
	
int h[]={1,4,6,2,3};

/*declaramos una variable de tipo entero para poder almacenar el valor de cada elemento al realizar la suma de cada elemento del vector*/	
	
int mfs = 0;	

/*tenemos que recorrer el arreglo y lo haremos 	haciendo uso de un ciclo for*/

for(int i=0; i<5; i++){

//realizamos la operacion de la suma
mfs += h[i];	
	
//mensaje para el usuario 
cout<<"el resultado de la suma es: "<<mfs<<endl;

	
}
return 0;
	
}