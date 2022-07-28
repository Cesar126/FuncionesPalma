#include <iostream>
#include <cmath>
using namespace std;

int main(){
int suma=0;

int notas[10];
for(int h=0;h<10;h++){
cout<<endl<<"Ingrese la nota del estudiante "<< h+1<<" : ";
cin>>notas[h];
}
cout<<endl<<"Notas de los estudiantes";
for(int h=0;h<10;h++){
cout<<endl<<" la nota del estudiante "<< h+1<<" es : ";
cout<<notas[h];
suma=suma+notas[h];

}
cout<<endl<<"La sumatoria es"<<suma<<endl;
cout<<"El promedio es: "<<(double(suma)/10);
}