//-----------------------------------------------------------------------------------//
// Nom du projet 		: demo
// Nom du fichier 		: OneCode.c
// Date de création 	: 19.09.2024
// Date de modification : xx.xx.xxxx
//
// Auteur 				: loulou
//
// Version				: 0.1
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
#include <math.h>
#include <corecrt_math_defines.h>




//--- librairie HeaderFile ---//


//prototype ARTHUNG ne pas faire

//déclaration variable globale ARTHUNG ne pas faire

float Largeur, Rayon, Longeur, Hauteur /*, Unite*/;
int Forme;
//int Largeur;
//int Rayon;
//int Longeur;
//int Hauteur;
float Surface;

//déclaration des constante ARTHUNG ne pas faire

//déclaration des fonctions



//fonction principale
//type de sortie - nom de la fonction - parametre1,parametre2....
void main(void)
{
    //choix de la forme
    //0:carré, 1:cercle, 2:rectangle, 3:triangle
    Forme = 0;

    //choix de l'unité
    //0:mm, 1:cm, 2:m, 3:km
    //Unite = 0;

    //Définitions des valeurs à calculers
    Largeur = 2;
    Rayon = 5;
    Longeur = 3;
    Hauteur = 8;
    
    //printf("%d", Hauteur);
    printf("            choix de la forme \n0:carre, 1:cercle, 2:rectangle, 3:triangle\n\n");
    //scanf_s("%d", Forme);
    switch (Forme)
    {
        //carré
        case 0:
            //calcule surface carré
            Surface = Largeur * Largeur;
            Surface = powf(Largeur, 2);
            break;
        //cercle
        case 1:
            //calcule surface cercle
            Surface = M_PI * Rayon * Rayon;
            break;
        //rectangle
        case 2:
            //calcule surface rectangle
            Surface = Largeur * Longeur;
            break;
        //triangle
        case 3:
            //calcule surface triangle
            Surface = (Largeur * Hauteur) / 2;
            break;
    }
    printf("%d", Surface);


}//Fin

/*
void SurfaceTriangle(void)
{
    Surface = (Largeur * Hauteur) / 2;
}//Fin

void SurfaceRectangle(void)
{
    Surface = Largeur * Longeur;
}//Fin
/*
//calcule surface carré
Surface = Largeur * Largeur;

//calcule surface cercle
Surface = M_PI * Rayon * Rayon;

//calcule surface rectangle
Surface = Largeur * Longeur;

//calcule surface triangle
Surface = (Largeur * Hauteur) / 2;
*/


