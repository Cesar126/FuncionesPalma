#include <iostream>
#include<stdlib.h>
#include<time.h>
 
using namespace std;
 
int generaNumAleatorio(int limite)
{
    int num = 1+rand()%(limite); //genera un número aleatorio entre 1 y limite
    return num;
}
 
//llena el vector con números aleatorios
void llenarVector(int vector[], int TOTAL)
{
    for(int k=0; k < TOTAL; k++)
    {
        vector[k]=generaNumAleatorio(50);
    }
}
 
void imprimirVector(int vector[], int TOTAL)
{
    cout<<endl<<"Elementos del vector: " <<endl;
    for(int k=0; k < TOTAL; k++)
    {
        cout<<vector[k] << "  ";
    }
}


void ordenarvector(int vector[], int TOTAL)
{
    
    for(int j=0; j<TOTAL;j++)
    {
        for(int k=j+1; k<TOTAL; k++)
        {
            if(vector[j]>vector[k])
            {
            int aux=vector[j];
            vector[j]=vector[k];
            vector[k]=aux;

            }

        }  
    }  


}
int main()
{
    const int TOTAL = 10;
    srand(time(NULL)); //inicializa el generador de número aleatorios  
    
    int vector[TOTAL];
    llenarVector(vector, TOTAL);
    cout<<endl<<"el vector origanl ";
    imprimirVector(vector, TOTAL);
    cout<<endl<<"el vector ordenado es";
    ordenarvector(vector,TOTAL);
    imprimirVector(vector, TOTAL);
    

   return 0;
}