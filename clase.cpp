#include <iostream>

using namespace std;
/*
Kevin Ramírez
kevin.amaya@correounivalle.edu.co
Fecha creación: 2023-09-06
Fecha última modificación: 2022-09-06
*/

float NOTAS(float n1PR,float n2TEO,float n3PAR)
{
    float   notaDefinitiva;
    notaDefinitiva=(n1PR*0.3)+(n2TEO*0.6)+(n3PAR*0.1);
    return notaDefinitiva;
}

int main()
{
    float n1PR,n2TEO,n3PAR,notaDefinitiva,nota;//N1PR= Nota 1-practica, N2TEO= Nota 2-Teorica, N3PAR= Nota 3-Participación, Nota=llamadade función
    do 
    {   
        cout<<"Digite la nota de practica: (EL valor tiene que estar en el intervalo de 0.0 a 5.0)";cin>>n1PR;
    }while((n1PR<0)||(n1PR>5.0));//Con esto logramos que si no asigna un valor entre el rango dado, lo vuelve a preguntar
    do 
    {   
        cout<<"Digite la nota teorica: (EL valor tiene que estar en el intervalo de 0.0 a 5.0)";cin>>n2TEO;
    }while((n2TEO<0)||(n2TEO>5.0));
    do 
    {   
        cout<<"DIgite la nota de participación: (EL valor tiene que estar en el intervalo de 0.0 a 5.0)";cin>>n3PAR;
    }while((n3PAR<0)||(n3PAR>5.0));
    nota=NOTAS(n1PR,n2TEO,n3PAR);
    cout<<"La nota final es: "<<nota<<endl;
    
    return 0;
}