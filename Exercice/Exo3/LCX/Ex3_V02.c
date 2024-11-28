//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de cr�ation 	: xx.xx.2016
// Date de modification : 08.11.2024
//
// Auteur 				: Liechtenstein Cryptoassets Exchange (L. Cardinaux)
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
#include <math.h>


// D�claration globales des constantes
// -----------------------------------
const short VMAX = 1000;
const short VMIN = -1000;
const double PI = 3.14159;
int main(void)
{
	// D�clarations locales des variables
	// ----------------------------------
	double rayon, surface;
	char lettre;

	// d�claration/Affectations
	// ------------------------
	short tension = VMAX;
	int bigVal = 0XBC614E;

	// d�claration enumeration
	// ------------------------
	enum e_Typefigure { cercle, ellipse, carre, rectangle, triangle, };

	//d�clarer des affectations pour obtenir ce r�sultat
	//--------------------------------------------------
	tension = 9500;
	lettre = 'B';
	rayon = 8.5;
	surface = 226.98;

	// Affichages pour controle
	// ------------------------
	printf("Tension = %d \n", tension);
	printf("BigVal = %d \n", bigVal);
	printf("Lettre  = %c \n", lettre);
	printf("Figure = %d \n", carre);
	printf("Rayon = %8.3f Surface = %8.3f \n", rayon, surface);

	return(0);
}

