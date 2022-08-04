#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

#define MAX 40

using namespace std;


void cartaA_corazon()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♥    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝"<<endl;
}

void cartaA_diamante()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♦    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝";
}

void cartaA_trebol()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♣    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝";
}


void cartaA_negro()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║A        ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♠    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║       A ║"<<endl;
    cout<<"╚═════════╝";
}

/*Carta echas por:
Daniel Olarte
Alejandra Fernández
Adriana Guallichico*/
void carta2_corazon()
{
	cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♥             ║";
    cout<<endl<<"║       ♥       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♥       ║";
    cout<<endl<<"║            ♥  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
}

void carta2_trebol()
{    
    cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♣             ║";
    cout<<endl<<"║       ♣       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♣       ║";
    cout<<endl<<"║            ♣  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
}


void carta2_diamante()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♦             ║";
    cout<<endl<<"║       ♦       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♦       ║";
    cout<<endl<<"║            ♦  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
}


void carta2_negro()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl<<"║ 2             ║";
    cout<<endl<<"║ ♠             ║";
    cout<<endl<<"║       ♠       ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║               ║";
    cout<<endl<<"║       ♠       ║";
    cout<<endl<<"║            ♠  ║";
    cout<<endl<<"║            2  ║";
    cout<<endl<<"╚═══════════════╝";
     
}

/*
Grupo #3 ; Federico Robles / Jesús Bone
Crear 4 cartas de número 3:
Corazón Negro - Diamante - Corazón Rojo - Trebol
*/
void carta3_negro()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl;
    cout<<"      ║3	          ♠	 ║";
    cout<<endl;
    cout<<"      ║♠		         ║";
    cout<<endl;
    cout<<"      ║		         ║";
    cout<<endl;
    cout<<"      ║		          ║";
    cout<<endl;
    cout<<"║	♠	║";
    cout<<endl;
    cout<<"   ║		║";
    cout<<endl;
    cout<<"     ║		          ║ ";
    cout<<endl;
    cout<<"     ║	             ♠║";
    cout<<endl;
    cout<<     "║	♠           ↋║";
    cout<<endl;
    cout<<     "╚═══════════════╝";
}

void carta3_trebol()
{
    cout<<endl<<"╔═══════════════╗";
    cout<<endl;
    cout<<"║3	♣	║";
    cout<<endl;
    cout<<"║♣		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║	♣	║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║		║";
    cout<<endl;
    cout<<"║	       ♣║";
    cout<<endl;
    cout<<"║	♣      ↋║";
    cout<<endl;
    cout<<"╚═══════════════╝";
}

void carta3_corazon()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║3   ♥    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♥    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♥  3 ║"<<endl;
    cout<<"╚═════════╝"<<endl;
}

void carta3_diamante()
{
    cout<<endl;
    cout<<"╔═════════╗"<<endl;
    cout<<"║3   ♦    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♦    ║"<<endl;
    cout<<"║         ║"<<endl;
    cout<<"║    ♦  3 ║"<<endl;
    cout<<"╚═════════╝";
}



/*
LLerena Devin - Mora Angel - Gonzales Andrew 
*/
void carta4_corazon(){
    std::cout <<endl<< R"(
                     ╔═══════════════╗
                     ║ 4             ║
                     ║ ♥           ♥ ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║ ♥           ♥ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl;

}

void carta4_negro(){
    std::cout<<endl << R"(
                     ╔═══════════════╗ 
                     ║ 4             ║
                     ║ ♠             ║
                     ║   ♠       ♠   ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║   ♠       ♠   ║
                     ║             ♠ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl; 
}


void carta4_diamante(){
    std::cout<<endl << R"(      
                     ╔═══════════════╗ 
                     ║ 4             ║
                     ║ ◆             ║
                     ║   ◆       ◆   ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║   ◆       ◆   ║
                     ║             ◆ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl; 
}


void carta4_trebol(){
    std::cout <<endl << R"(
                     ╔═══════════════╗ 
                     ║ 4             ║
                     ║ ☘             ║
                     ║   ☘       ☘   ║
                     ║               ║
                     ║               ║
                     ║               ║
                     ║   ☘       ☘   ║
                     ║             ☘ ║
                     ║             4 ║
                     ╚═══════════════╝)" << endl;
}




/* Grupo 5-Integrantes: Abel Avila  - Daniel Trejo -Natanael Maffare
*/

void carta5_corazon()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♥       ♥ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♥     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♥       ♥ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}

void carta5_negro()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♠       ♠ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♠     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♠       ♠ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}

void carta5_trebol()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♣       ♣ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♣     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♣       ♣ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}

void carta5_diamante()
{
    cout<<endl<<"╔═══════════╗";
    cout<<endl<<"║5          ║";
    cout<<endl<<"║ ♦       ♦ ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║     ♦     ║";
    cout<<endl<<"║           ║";
    cout<<endl<<"║ ♦       ♦ ║";
    cout<<endl<<"║          5║";
    cout<<endl<<"╚═══════════╝";
}






/*
César Palma - Jhon Bustamante
*/
void carta6_corazon()
{
       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♥             ║";
       cout<<endl<<"║    ♥     ♥    ║";
       cout<<endl<<"║       ♥       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♥       ║";
       cout<<endl<<"║    ♥     ♥    ║";
       cout<<endl<<"║            ♥  ║ ";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
}

void carta6_trebol()
{

       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♣             ║";
       cout<<endl<<"║    ♣    ♣     ║";
       cout<<endl<<"║       ♣       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♣       ║";
       cout<<endl<<"║    ♣     ♣    ║";
       cout<<endl<<"║            ♣  ║";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
}

void carta6_diamante()
{
       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♦︎             ║";
       cout<<endl<<"║    ♦︎    ♦︎     ║";
       cout<<endl<<"║       ♦︎       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♦︎       ║";
       cout<<endl<<"║    ♦︎     ♦︎    ║";
       cout<<endl<<"║            ♦︎  ║";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
}


void carta6_negro()
{
       cout<<endl<<"╔═══════════════╗";
       cout<<endl<<"║ 6             ║";
       cout<<endl<<"║ ♠︎             ║";
       cout<<endl<<"║    ♠︎    ♠︎     ║";
       cout<<endl<<"║       ♠︎       ║";
       cout<<endl<<"║               ║";
       cout<<endl<<"║       ♠︎       ║";
       cout<<endl<<"║    ♠︎     ♠︎    ║";
       cout<<endl<<"║            ♠︎  ║";
       cout<<endl<<"║            6  ║";
       cout<<endl<<"╚═══════════════╝";
       
}
      

/*
Integrantes:
- Mell Vergara Palomino. Patrick Corozo Paez. Montaño Arboleda Nahomy.
*/

void carta7_diamante()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦  ║";
    cout<<endl<<"║  ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦ ♦  ║";
    cout<<endl<<"║  ♦ ♦         ♦ ♦ ♦  ║";
    cout<<endl<<"║             ♦ ♦ ♦   ║";
    cout<<endl<<"║            ♦ ♦ ♦    ║";
    cout<<endl<<"║           ♦ ♦ ♦     ║";
    cout<<endl<<"║          ♦ ♦ ♦      ║";
    cout<<endl<<"║         ♦ ♦ ♦       ║";
    cout<<endl<<"║        ♦ ♦ ♦        ║";
    cout<<endl<<"║       ♦ ♦ ♦         ║";
    cout<<endl<<"║      ♦ ♦ ♦          ║";
    cout<<endl<<"╚═════════════════════╝";
}

void carta7_negro()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠  ║";
    cout<<endl<<"║  ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠ ♠  ║";
    cout<<endl<<"║  ♠ ♠         ♠ ♠ ♠  ║";
    cout<<endl<<"║             ♠ ♠ ♠   ║";
    cout<<endl<<"║            ♠ ♠ ♠    ║";
    cout<<endl<<"║           ♠ ♠ ♠     ║";
    cout<<endl<<"║          ♠ ♠ ♠      ║";
    cout<<endl<<"║         ♠ ♠ ♠       ║";
    cout<<endl<<"║        ♠ ♠ ♠        ║";
    cout<<endl<<"║       ♠ ♠ ♠         ║";
    cout<<endl<<"║      ♠ ♠ ♠          ║";
    cout<<endl<<"╚═════════════════════╝";
}

void carta7_corazon()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥  ║";
    cout<<endl<<"║  ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥ ♥  ║";
    cout<<endl<<"║  ♥ ♥         ♥ ♥ ♥  ║";
    cout<<endl<<"║             ♥ ♥ ♥   ║";
    cout<<endl<<"║            ♥ ♥ ♥    ║";
    cout<<endl<<"║           ♥ ♥ ♥     ║";
    cout<<endl<<"║          ♥ ♥ ♥      ║";
    cout<<endl<<"║         ♥ ♥ ♥       ║";
    cout<<endl<<"║        ♥ ♥ ♥        ║";
    cout<<endl<<"║       ♥ ♥ ♥         ║";
    cout<<endl<<"║      ♥ ♥ ♥          ║";
    cout<<endl<<"╚═════════════════════╝"; 
}

void carta7_trebol()
{
    cout<<endl<<"╔═════════════════════╗";
    cout<<endl<<"║  ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣  ║";
    cout<<endl<<"║  ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣ ♣  ║";
    cout<<endl<<"║  ♣ ♣         ♣ ♣ ♣  ║";
    cout<<endl<<"║             ♣ ♣ ♣   ║";
    cout<<endl<<"║            ♣ ♣ ♣    ║";
    cout<<endl<<"║          ♣ ♣ ♣      ║";
    cout<<endl<<"║         ♣ ♣ ♣       ║";
    cout<<endl<<"║        ♣ ♣ ♣        ║",
    cout<<endl<<"║       ♣ ♣ ♣         ║";
    cout<<endl<<"║      ♣ ♣ ♣          ║";
    cout<<endl<<"║     ♣ ♣ ♣           ║";
    cout<<endl<<"╚═════════════════════╝";
    
}



/*Salazar Paul - Zambrano Miguel*/
void carta8_corazon()
{
    cout<<endl<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♥         ♥   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♥        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♥         ♥   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♥        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♥         ♥   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}

void carta8_diamante()
{
    cout<<endl<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♦         ♦   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♦        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♦         ♦   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♦        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♦         ♦   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}


void carta8_trebol()
{
    cout<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♣         ♣   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♣        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♣         ♣   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♣        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♣         ♣   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}

void carta8_negro()
{
    cout<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;     
    cout<<"║ 8               ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♠         ♠   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♠        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♠         ♠   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║        ♠        ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║   ♠         ♠   ║"<<endl;
    cout<<"║                 ║"<<endl;
    cout<<"║               8 ║"<<endl;
    cout<<"▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬"<<endl;
}



/*
    Nick López Reina - Dany Barrera - Ethan Bernal
*/
void carta9_corazon()
{
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"               ♥♥♥♥";
    cout<<endl<<"               ♥♥♥♥";
    cout<<endl<<"               ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥           ♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
    cout<<endl<<"♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥♥";
}

void carta9_trebol()
{
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"               ♣♣♣♣";
    cout<<endl<<"               ♣♣♣♣";
    cout<<endl<<"               ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣           ♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
    cout<<endl<<"♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣♣";
}

void carta9_diamante()
{
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"               ♦♦♦♦";
    cout<<endl<<"               ♦♦♦♦";
    cout<<endl<<"               ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦           ♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
    cout<<endl<<"♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦♦";
}

void carta9_negro()
{
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"               ♠♠♠♠";
    cout<<endl<<"               ♠♠♠♠";
    cout<<endl<<"               ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠           ♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
    cout<<endl<<"♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠♠";
}



/*Cartas hechas por:
Sosa Mejia Walter Santiago
Tamayo Obando Christian David
España Ponce Elvis Eduardo
*/
void carta10_corazon()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║       ♥       ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║       ♥       ║";
cout<<endl<<"║    ♥     ♥    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}

void carta10_trebol()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♣     ♣    ║";                      
cout<<endl<<"║       ♣       ║";
cout<<endl<<"║    ♣     ♣    ║";                      
cout<<endl<<"║               ║";
cout<<endl<<"║    ♣     ♣    ║";
cout<<endl<<"║       ♣       ║";
cout<<endl<<"║    ♣     ♣    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}

void carta10_diamante()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║       ♦       ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║       ♦       ║";
cout<<endl<<"║    ♦     ♦    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}

void carta10_negro()
{
cout<<endl<<"╔═══════════════╗";
cout<<endl<<"║ 10            ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║       ♠       ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║               ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║       ♠       ║";
cout<<endl<<"║    ♠     ♠    ║";
cout<<endl<<"║            10 ║";
cout<<endl<<"╚═══════════════╝";
}



int generaNumAleatorio()
{
    int num = 0+rand()%(MAX); //genera un número aleatorio entre 1 y 52
    return num;
}

void iniciarcartas(int cartas[])
{
  for(int k=0; k<MAX;k++)
  {
    cartas[k]=k;

  }
}
void encerar(int vector[])
{
    for(int k=0; k<MAX;k++)
    vector[k]=-1;
    
}
//copia carta
void copiavector(int origen[], int destino[])
{
 for(int j=0; j<MAX; j++)
 {
    destino[j]=origen[j];
 }
}
bool buscarcarta(int vector[], int num)
{
    for(int k=0; k<MAX; k++)
    {
        if(vector[k]==num)
        return true;
    }
    return false;
}
//funcion de baraja
void barajarcarta(int cartas[])
{
    int aux[MAX];
    encerar(aux);
    for(int j=0;j<MAX; j++)
    {
        for(int k=0;k<1000; k++){
        int num = generaNumAleatorio();
        if(buscarcarta(aux,num)==false)
        {
            aux[j]=num;
            break;
        }
        }  
    }
    //copia el vector aux en cartas 
    copiavector(aux,cartas);
}
void pedircarta(int num)
{
    int valor=-1;
    //carta a
    if(num==0)
    cartaA_corazon();
    else if(num==1)
    cartaA_diamante();
    else if(num==2)
    cartaA_negro();
    else if(num==3)
    cartaA_trebol();
   //carta 2
    if(num==4)
    carta2_corazon();
    else if(num==5)
    carta2_diamante();
    else if(num==6)
    carta2_negro();
    else if(num==7)
    carta2_trebol();
   
    //carta 3
    if(num==8)
    carta3_corazon();
    else if(num==9)
    carta3_diamante();
    else if(num==10)
    carta3_negro();
    else if(num==11)
    carta3_trebol();
    //carta 4
    if(num==12)
    carta4_corazon();
    else if(num==13)
    carta4_diamante();
    else if(num==14)
    carta4_negro();
    else if(num==15)
    carta4_trebol();
    //carta 5
    if(num==16)
    carta5_corazon();
    else if(num==17)
    carta5_diamante();
    else if(num==18)
    carta5_negro();
    else if(num==19)
    carta5_trebol();
    //carta 6
    if(num==20)
    carta6_corazon();
    else if(num==21)
    carta6_diamante();
    else if(num==22)
    carta6_negro();
    else if(num==23)
    carta6_trebol();
   //carte 7
    if(num==24)
    carta7_corazon();
    else if(num==25)
    carta7_diamante();
    else if(num==26)
    carta7_negro();
    else if(num==27)
    carta7_trebol();
    // carta 8
    if(num==28)
    carta8_corazon();
    else if(num==29)
    carta8_diamante();
    else if(num==30)
    carta8_negro();
    else if(num==31)
    carta8_trebol();
    // carta 9
    if(num==32)
     carta9_corazon();
    else if(num==33)
    carta9_diamante();
    else if(num==34)
    carta9_negro();
    else if(num==35)
    carta9_trebol();
    //Carta 10
    if(num==36)
    carta10_corazon();
    else if(num==37)
    carta10_diamante();
    else if(num==38)
    carta10_negro();
    else if(num==39)
    carta10_trebol();
    

}
void imprimircarta(int cartas[])
{
for(int k=0; k<MAX; k++){
 cout<<endl<<cartas[k];
 pedircarta(k);
}

}


int main()
{
    string respuesta; 
    srand(time(NULL)); //inicializa el generador de número aleatorios
    int cartas[MAX];
   iniciarcartas(cartas);
   barajarcarta(cartas);
   imprimircarta(cartas);
   int i=1;
   int cuentacarta=0;
   while(i<=2)
   {
    cout<<endl<<"Jugador numero 1";
    cout<<endl<<"pulsa enter para pedir la carta numero "<<i<<" ";
    getch();
    fflush(stdin);
    pedircarta(cartas[cuentacarta]);
    i++;
    cuentacarta++;
    cout<<endl<<"¿Desea una cuerta mas?"; 
    cin>>respuesta;
    if(respuesta=="si")
    {
        getch();
        fflush(stdin);
        pedircarta(cartas[cuentacarta]);

    }
   }
    
     
    
    return 0;
}
