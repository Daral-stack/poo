#include <iostream>

//Autor: Casaviejas

//Correo: miguel.felipe.casanova@correounivalle.edu.co

//Fecha creación: 2023-09-06

//Fecha última modificación: 2023-09-06

using namespace std;

float comprobarValor(float nota){ //Función para comprobar si la nota es válida o no 
  while (nota<0 or nota>5){ //Se usa un while para comprobar si el valor digitado es válido o no
    cout<<"Digite una nota valida:";cin>>nota;cout<<endl; //Si no lo es, se vuelve a pedir hasta que sea válido.
  }
  return nota;
}

int main() {
  int i=0
  cout<<"Digite el numero de estudiantes que quiere guardar sus notas: ";cin>>i<<endl;
  while (i==0,i--)
  {
  nPractica, nTeorica, nParticipacion; //Se crean las variables a usar
  float NEStudiantes[];
  
  cout<<"Digite la nota de practica:";cin>>nPractica;cout<<endl; //Se pide la nota correspondiente
  nPractica=comprobarValor(nPractica); //Se comprueba mediante la función si la nota es válida
  cout<<"Digite la nota teorica:";cin>>nTeorica;cout<<endl;
  nTeorica=comprobarValor(nTeorica);
  cout<<"Digite la nota de participacion:";cin>>nParticipacion;cout<<endl;
  nParticipacion=comprobarValor(nParticipacion);
  float NEStudiantes[i] = (nPractica*0.3)+(nTeorica*0.6)+(nParticipacion*0.1); //Calculamos el promedio y lo metemos en una nueva variable
  }
  cout<<"La nota final de los estudiantes  es: "<<NEStudiantes[]; //Imprimimos la variable
}
