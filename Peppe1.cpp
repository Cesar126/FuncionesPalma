#include <iostream>
using namespace std;
 void figura (int fila){
    string x="o";
   
     for (int i=1; i <= fila; ++i){
    for (int c=1; c <= i; ++c){
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
}

}

void tabla2(int num1){
	for(int j=1;j<=15;j++){
cout<<endl<< num1<<"x"<<j<<"="<<(num1*j);
}
	
}
	

int main() {

figura(20);
cubo(23);
tabla(3);
cout<<endl;
tiempo(7300);
cout<<"Esta funcion da la tabla del 1 a 15"<<endl;
tabla2(4);
}
