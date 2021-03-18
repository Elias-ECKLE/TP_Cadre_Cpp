
/*

---------------------------------------------------QUESTIONS DE COURS ----------------------------------------------:

1.1 Rôle d'un constructeur :
Le constructeur est le premier élément à être appelé lors de la déclaration d'un objet. 
Il a pour rôle d'initialiser les données membres de la classe.


1.2 Rôle d'un destructeur :
Le destructeur quant à lui est le dernier élément à être appelé. Il est utilisé lorsque l'objet est détruit ou par défaut à la fin du programme.
Son rôle est de nettoyer les instances crée par l'objet.

1.3
On repère un constructeur de classe par le nom de la classe. En effet un constructeur est déclaré en écrivant l'intitulé de la classe suivi de paranthèses.
Il peut en avoir plusieurs. Cela permet par exemple d'initialiser par défaut les données membres avec l'aide d'un premier constructeur, 
puis avec l'aide d'un deuxième constructeur de donner la possibilité aux développeurs d'entrer des valeurs à initialiser.

1.4
Il s'agit de donner à plusieurs fonctions le même nom mais avec des paramètres différents

1.5
Dans une classe il y a un système d'encapsulation qui permet d'accéder directement ou non aux données membres correspondants. 
La notion public permet d'y accéder depuis n'importe quel endroit dans le programme
Tandis que la notion private bloque l'accès à part si on travaille directement dans la classe. 
Des moyens détournés sont donc nécessaires pour accéder à ses éléments privés par l'intermdédiaire de méthodes elles placées en public.

*/

#include "CCadre.h"
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define TAILLE 50

using namespace std;


void afficheLog(float reel);
void afficheLog(bool resultat);


int main() {


	//declaration:
	cout << "_____________________________________________Debut du programme:____________________________________" << endl << endl;

	char* p_str_Motif = new char[TAILLE];
	char* p_str_Nom = new char[TAILLE];

	strcpy_s(p_str_Motif, TAILLE, "test 1");
	strcpy_s(p_str_Nom, TAILLE, "cadre 1");
	CCadre c_cadre1(2, 4, 5, 5, p_str_Motif,p_str_Nom);



	//cadre 1:
		
		//afficher les caractéristiques de l'objet :
		c_cadre1.afficheLog();

		//calculer la surface du rectangle :
		cout << endl<< "La surface est de : ";
		afficheLog(c_cadre1.calculSurface());
		cout << "mCarre" << endl;

		//calculer le périmètre :
		cout << "Le perimetre est de : ";
		afficheLog(c_cadre1.calculPerimetre());
		cout << "m" << endl;

		//vérifier si l'objet est un carré ou un rectangle
		cout << "L'objet est un ";
		afficheLog(c_cadre1.isCarre());


		//effectuer une rotation par rapport au point d'ancrage :
		c_cadre1.rotation(50);
		cout << endl << endl<< "__________________________________________Changements donnees cadre :____________________________________" << endl << endl;
		c_cadre1.afficheLog();
	



	//cadre 2
		//copier les caractéristiques de c_cadre1 vers c_cadre2
		CCadre c_cadre2 = c_cadre1;

		strcpy_s(p_str_Nom, TAILLE, "cadre 2");
		c_cadre2.setNom(p_str_Nom);
		c_cadre2.afficheLog();
		

	

		



	//supprimer la mémoire allouée avec les pointeurs :
	cout << endl << endl << "_____________________________________________Fin du programme:____________________________________" << endl << endl;


	return 0;
}


void afficheLog(float reel) {

	cout << reel;
}

void afficheLog(bool resultat) {

	if (resultat == true) {
		cout << "carre" << endl;
	}
	else {
		cout << "rectangle" << endl;
	}
	
}