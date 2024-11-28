//-----------------------------------------------------------------------------------//
// Nom du projet 		: 
// Nom du fichier 		: 
// Date de création 	: 30.09.2015
// Date de modification : 07.01.2016
//
// Auteur 				: Philou (Ph. Bovey)
//
// Version				: x.x
//
// Description          : 
//
//
// Remarques :            lien pour la table ASCII :
// 						  -> http://www.asciitable.com/
// 						  lien pour la saisie de clavier avec getc & getchar pour ne pas
//                        avoir des erreurs d'interprétation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers différents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveauté du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf

#include "MesFonctions.h" // include the header file

int main(void)
{
    

    char ValA = 0;
    char ValB = 0;
    int i = 0;
    
    //display données
    printf("Exercice 6 : Zitouni Bilal \n");

    printf("Entrez un nombre entre 1 et 9 : "); // message user
    scanf_s(" %d", (int *) &ValA); // input the value
    if (ValA > 9) {
        ValA = 9;
        printf("testA ValA limité à 9 \n");
        DispayStar((int)ValA); // call the fonction i re-used multiple time
    }
    else if (ValA <= 0) {
        ValA = 1;
        printf("testA ValA forcé à 1 ");
        DispayStar((int)ValA);
    }
    else {
        printf("vous avez entré la valeur %d \n", ValA);
        DispayStar((int)ValA);
    }



  return(0);
}
