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
    Multiplicar= b*b*b;
    cout<<Multiplicar;
}
void tabla(int c){
for(int i=1;i<=10;i++)
cout<<endl<< c<<"x"<<i<<"="<<(c*i);
}
int main() {

figura(15);
cout<<"el cubo del numero es ";
cubo(7);
tabla(3);
}