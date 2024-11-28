//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: xx.xx.2016
// Date de modification : 28.09.2021
//
// Auteur 				: CHR (Christian Huber)
//                        Philou (Ph. Bovey)
//
// Version 				: 0.3
//
// Description          : Voir donnee exercice 4 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  
//----------------------------------------------------------------------------------//

//-- déclaration des librairies --// 
#include <stdio.h>	// pour usage printf
#include <stdint.h>


int main(void)
{
	// Déclaration cas A
	short A1 = 400;
	short A2 = 500;

	short ResA1 = A1 * A2;
	int32_t ResA2 = A1 * A2;

	// Déclaration cas B
	unsigned short ValB = 0x1234;
	char  HighValB = ValB >> 8;
	char  lowValB = (char)ValB;
		
		
	// Déclaration cas C
	short C1 = 0x5555;
	short C2 = 0x0F0F;

	short ResC = C1 | C2;
	int16_t ResC2 = C1 & C2;
	// Déclaration cas D
	short D1 = 1325;
	short D2 = 7;

	short ResD1A = D1 / D2;
	float ResD1B = (float)D1 / (float)D2;
	short ResD2 = D1 % D2;
	
	// Traitement cas A
	printf ("Traitement cas A \n");

	printf ("ResA1 = A1 * A2 soit  %d * %d = %d \n",A1,A2, ResA1);
	printf ("ResA2 = A1 * A2 soit  %d * %d = %d \n",A1,A2, ResA2 );
	
	// Traitement cas B
	printf ("Traitement cas B \n");

	printf ("ValB  %x HighValB = %2x LowValB = %2x\n", ValB, HighValB, lowValB);
	
	// Traitement cas C
	printf ("Traitement cas C \n");

	printf ("ResC = %d  OU %d =  %d \n",C1,C2, ResC);
	printf ("ResC = %d  ET %d =  %0d \n",C1,C2,ResC2);

	// Traitement cas D

	printf ("Traitement cas D \n");
	
	printf("Division de %4d par %4d = %4d\n", D1, D2, ResD1A); 
	printf("Division de %4d par %4d = %4f\n", D1, D2, ResD1B);



	printf ("Division de %4d par %4d = %4d Reste = %4d \n",D1,D2,ResD1A, ResD2);


  return(0);
}
