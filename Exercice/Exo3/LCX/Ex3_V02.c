//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
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


// Déclaration globales des constantes
// -----------------------------------
const short VMAX = 1000;
const short VMIN = -1000;
const double PI = 3.14159;
int main(void)
{
	// Déclarations locales des variables
	// ----------------------------------
	double rayon, surface;
	char lettre;

	// déclaration/Affectations
	// ------------------------
	short tension = VMAX;
	int bigVal = 0XBC614E;

	// déclaration enumeration
	// ------------------------
	enum e_Typefigure { cercle, ellipse, carre, rectangle, triangle, };

	//déclarer des affectations pour obtenir ce résultat
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

