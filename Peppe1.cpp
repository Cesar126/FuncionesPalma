#include <iostream>
#include<cmath>
using namespace std;
 void figura (int fila){
    string x="o";
   cout<<"Esta funcion imprime el crencimiento y decrecimiento de una figura"<<endl;
    for (int i=1; i <= fila; ++i){
     for (int c=1; c <= i; ++c){
         cout<<x;
 }
cout<<endl;
}
	for(int b=fila; b>1;--b){

	for (int w=b; w>1; --w){
  
      cout<<x;
	  }
	  cout<<endl;
	  }
	  
	  }
void cubo(int b){
    int Multiplicar;
    cout<<"el cubo del "<<b<<" es ";
    Multiplicar= b*b*b;
    cout<<Multiplicar;
}

void tiempo(int edad){
	float anos;
	int dias;
	float meses;
	cout << "Esta funcion da la edad en dias, meses , años" << endl;
	anos = edad/365;
	cout << "Tienes " << anos << " Años de vida" << endl;
	meses = edad/12;
	cout << "Tienes " << meses << " Meses de vida" << endl;
	dias = edad;
	cout << "Tienes " << dias << " Dias de vida" << endl;
	
}



void tabla(int serie){


	cout<<endl<<"la tablas son  ";

for(int i=1;i<=serie;++i){


	for(int c=1; c<=10;++c)

cout<<endl<< i <<"x"<<c<<"="<<( i *c);
	cout<<endl;
}

}

void tabla2(int num1){
	for(int j=1;j<=15;j++){
cout<<endl<< num1<<"x"<<j<<"="<<(num1*j);
}
	
}
bool numeros(int n1,  int n2,  int n3)
{

if (n1==n2+n3) {
    return true;
}
else if(n2==n1+n3){
    return true;
}
else if (n3==n1+n2){
    return true;
    }
else 
    return false;
}
void sumafactorial(int seriefa){
	cout<<"Este algoritmo resuelve la suma y resta de factoriales"<<endl;
	int factorial=1;
	for(int r=1;r<=seriefa;r++){
		
	}
}


void sumatoria(int n){
	int resultado;
	int factorial;
	for(int f=2; f<=n; f++){
		factorial=factorial*f;
	if(factorial%2==0){
		resultado= resultado-factorial;
		

	}
	else {
		resultado=  resultado + factorial ;
	}
}
cout<<"El resultado de la serie es: "<<resultado;
}
int parimpar(int Numero)
{
    cout<<"Digite un numero: "<< endl;
    cin>>Numero;
    if (Numero % 2 == 0)
    cout<<"El numero: " << Numero << " es par"<< endl;
    else
    cout<<"El numero: " << Numero << " es impar"<< endl;
    return Numero;
}

int main() {

figura(15);
cubo(23);
tabla(3);
cout<<endl;
tiempo(7300);
cout<<"Esta funcion da la tabla del 1 a 15"<<endl;
tabla2(4);
cout<<endl;
cout<<endl<<"Probando la funcion de 3 enteros";
    bool x = numeros(9,2,14);
    if (x==true)
    cout<<endl<<"Coincide el numero de la suma";
    else 
    cout<<endl<<"La suma no coincide"<<endl;
    int Numero;
    parimpar(Numero);
    sumatoria(3);
}
