//-----------------------------------------------------------------------------------//
// Nom du projet 		: demo
// Nom du fichier 		: OneCode.c
// Date de cr�ation 	: 19.09.2024
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
//                        avoir des erreurs d'interpr�tation
// 						  -> http://fr.openclassrooms.com/informatique/cours/utiliser-les-bonnes-fonctions-d-entree
// 						  lien vers diff�rents
// 						  -> http://fr.wikipedia.org/wiki/String.h
//----------------------------------------------------------------------------------//

//--- librairie standart ---//
#include <stdio.h>	// pour usage printf et scanf_s
                    // Nouveaut� du VC++ 2005, 2008, 2010 et 2015 : le scanf_s remplace scanf
#include <math.h>
#include <corecrt_math_defines.h>




//--- librairie HeaderFile ---//


//prototype ARTHUNG ne pas faire

//d�claration variable globale ARTHUNG ne pas faire

float Largeur, Rayon, Longeur, Hauteur /*, Unite*/;
int Forme;
//int Largeur;
//int Rayon;
//int Longeur;
//int Hauteur;
float Surface;

//d�claration des constante ARTHUNG ne pas faire

//d�claration des fonctions



//fonction principale
//type de sortie - nom de la fonction - parametre1,parametre2....
void main(void)
{
    //choix de la forme
    //0:carr�, 1:cercle, 2:rectangle, 3:triangle
    Forme = 0;

    //choix de l'unit�
    //0:mm, 1:cm, 2:m, 3:km
    //Unite = 0;

    //D�finitions des valeurs � calculers
    Largeur = 2;
    Rayon = 5;
    Longeur = 3;
    Hauteur = 8;
    
    //printf("%d", Hauteur);
    printf("            choix de la forme \n0:carre, 1:cercle, 2:rectangle, 3:triangle\n\n");
    //scanf_s("%d", Forme);
    switch (Forme)
    {
        //carr�
        case 0:
            //calcule surface carr�
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
//calcule surface carr�
Surface = Largeur * Largeur;

//calcule surface cercle
Surface = M_PI * Rayon * Rayon;

//calcule surface rectangle
Surface = Largeur * Longeur;

//calcule surface triangle
Surface = (Largeur * Hauteur) / 2;
*/


