//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 14.09.2017
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

#include <stdio.h>	// pour usage printf
#include <stdint.h> // uniformation du type entier 

// Déclaration globales des constantes
const short vmax = 10000; // constant donc varaible global donc TOUT EN HAUT type short 16 bit
const short vmin = -10000;
const double PI = 3.14159;// constant donc varaible global donc TOUT EN HAUT type double 64 bit
enum e_TypeFigure {cercl, ellipse, carre, rectangle, triangle};// enumaration 


// -- vmax 10000 constante 16 bits 

int main(void)
{
	// Déclarations locales des variables
	int Tension = 9500; // faire attention au type entier 32 bits

	
	double Surface_ou_Rayon; // atention au type réel 64 bit
	char Lettre = 'B'; // attention attention caractère donc char comme type et le B entre guillemais 'B'
	int Figure = 2;
	float Rayon = 8.500; // type float utilisé pour 16  bit
	float Surface = 226.980;

	// Affectations
	
	Tension = vmax; // affilie une variable à une autre pas besoin du type
	unsigned int BigVal = 0x12345678; // attention entier non signé donc unsigned int et la valeur en hexadecima donc 0x pour hex 0x12345678

    
	// Affichages pour controle
	printf ("Tension = %d \n",Tension); // attention pour le print les bon type (par exemple int dans le printf %d) , toujour correspondre avec le nom du type
 	printf ("BigVal = %lx \n",BigVal);
	printf ("Lettre  = %c \n",Lettre);
	printf ("Figure = %d \n",Figure);
	printf ("Rayon = %8.3f Surface = %8.3f \n",Rayon,Surface);

  return(0);
}
