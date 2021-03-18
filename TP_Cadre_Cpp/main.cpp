
/*

---------------------------------------------------QUESTIONS DE COURS ----------------------------------------------:

1.1 R�le d'un constructeur :
Le constructeur est le premier �l�ment � �tre appel� lors de la d�claration d'un objet. 
Il a pour r�le d'initialiser les donn�es membres de la classe.


1.2 R�le d'un destructeur :
Le destructeur quant � lui est le dernier �l�ment � �tre appel�. Il est utilis� lorsque l'objet est d�truit ou par d�faut � la fin du programme.
Son r�le est de nettoyer les instances cr�e par l'objet.

1.3
On rep�re un constructeur de classe par le nom de la classe. En effet un constructeur est d�clar� en �crivant l'intitul� de la classe suivi de paranth�ses.
Il peut en avoir plusieurs. Cela permet par exemple d'initialiser par d�faut les donn�es membres avec l'aide d'un premier constructeur, 
puis avec l'aide d'un deuxi�me constructeur de donner la possibilit� aux d�veloppeurs d'entrer des valeurs � initialiser.

1.4
Il s'agit de donner � plusieurs fonctions le m�me nom mais avec des param�tres diff�rents

1.5
Dans une classe il y a un syst�me d'encapsulation qui permet d'acc�der directement ou non aux donn�es membres correspondants. 
La notion public permet d'y acc�der depuis n'importe quel endroit dans le programme
Tandis que la notion private bloque l'acc�s � part si on travaille directement dans la classe. 
Des moyens d�tourn�s sont donc n�cessaires pour acc�der � ses �l�ments priv�s par l'intermd�diaire de m�thodes elles plac�es en public.

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
		
		//afficher les caract�ristiques de l'objet :
		c_cadre1.afficheLog();

		//calculer la surface du rectangle :
		cout << endl<< "La surface est de : ";
		afficheLog(c_cadre1.calculSurface());
		cout << "mCarre" << endl;

		//calculer le p�rim�tre :
		cout << "Le perimetre est de : ";
		afficheLog(c_cadre1.calculPerimetre());
		cout << "m" << endl;

		//v�rifier si l'objet est un carr� ou un rectangle
		cout << "L'objet est un ";
		afficheLog(c_cadre1.isCarre());


		//effectuer une rotation par rapport au point d'ancrage :
		c_cadre1.rotation(50);
		cout << endl << endl<< "__________________________________________Changements donnees cadre :____________________________________" << endl << endl;
		c_cadre1.afficheLog();
	



	//cadre 2
		//copier les caract�ristiques de c_cadre1 vers c_cadre2
		CCadre c_cadre2 = c_cadre1;

		strcpy_s(p_str_Nom, TAILLE, "cadre 2");
		c_cadre2.setNom(p_str_Nom);
		c_cadre2.afficheLog();
		

	

		



	//supprimer la m�moire allou�e avec les pointeurs :
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