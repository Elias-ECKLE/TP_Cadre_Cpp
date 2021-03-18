#include "CCadre.h"

#define TAILLE 50
#define PI 3.14



//constructeurs :

CCadre::CCadre()
{
	this->m_flt_x = 10;
	this->m_flt_y = 5;
	this->m_flt_larg = 5;
	this->m_flt_long = 2*this->m_flt_larg;

	this->m_p_motif = new char[TAILLE];
	strcpy_s(this->m_p_motif, TAILLE, "*");

	this->ptrCharNom_Cadre =new char[TAILLE];
	strcpy_s(this->ptrCharNom_Cadre, TAILLE, "cadre");
}



CCadre::CCadre(float flt_x, float flt_y, float flt_larg, float flt_long, char* p_motif,char* p_Nom)
{
	this->m_flt_x=flt_x;
	this->m_flt_y = flt_y;
	this->m_flt_larg = flt_larg;
	this->m_flt_long = flt_long;

	this->m_p_motif = new char[TAILLE];
	strcpy_s(this->m_p_motif, TAILLE, p_motif);

	this->ptrCharNom_Cadre = new char[TAILLE];
	strcpy_s(this->ptrCharNom_Cadre, TAILLE, p_Nom);
}

//constructeur de copie
CCadre::CCadre(CCadre& c_cadre)
{
	this->m_flt_x = c_cadre.m_flt_x;
	this->m_flt_y = c_cadre.m_flt_y;
	this->m_flt_larg = c_cadre.m_flt_larg;
	this->m_flt_long = c_cadre.m_flt_long;

	this->m_p_motif = new char[TAILLE];
	strcpy_s(this->m_p_motif, TAILLE, c_cadre.m_p_motif );

	this->ptrCharNom_Cadre = new char[TAILLE];
	strcpy_s(this->ptrCharNom_Cadre, TAILLE, c_cadre.ptrCharNom_Cadre);
}






//destructeurs :

CCadre::~CCadre()
{
	

	delete[] m_p_motif;
	delete[] ptrCharNom_Cadre;

	std::cout << endl<< "Destructeur OK" << std::endl;

}



//asseceurs :

float CCadre::getX() const
{
	return this->m_flt_x;
}

float CCadre::getY() const
{
	return this->m_flt_y;
}

float CCadre::getLarg() const
{
	return this->m_flt_larg;
}

float CCadre::getLong() const
{
	return this->m_flt_long;
}

char* CCadre::getMotif() const
{
	return this->m_p_motif;
}

char* CCadre::getNom() const
{
	return this->ptrCharNom_Cadre;
}




//mutateurs :

void CCadre::setX(float flt_x)
{
	this->m_flt_x = flt_x;
}

void CCadre::setY(float flt_y)
{
	this->m_flt_y = flt_y;
}

void CCadre::setLarg(float flt_larg)
{
	this->m_flt_larg;
}

void CCadre::setLong(float flt_long)
{
	this->m_flt_long = flt_long;
}

void CCadre::setMotif(char* p_motif)
{
	this->m_p_motif = p_motif;
}

void CCadre::setNom(char* p_str_nom)
{
	this->ptrCharNom_Cadre = p_str_nom;
}





//methodes :

float CCadre::calculSurface()
{
	//largeur*longueur
	float flt_surface = this->m_flt_larg * this->m_flt_long;

	return flt_surface;
}

float CCadre::calculPerimetre()
{
	//(largeur+longueur)*2
	float flt_perimetre = (this->m_flt_larg+this->m_flt_long)*2;

	return flt_perimetre;
}

bool CCadre::isCarre()
{
	//si la largeur est égale à la longueur alors les quatre côtés sont égaux et il s'agit d'un carré
	if (this->m_flt_larg==this->m_flt_long) {

		return true;
	}
	else{

		return false;
	}
	
}

void CCadre::rotation(float flt_tetha)
{

	float flt_degres= 180;
	this->m_flt_x = m_flt_x * cos(flt_tetha * (PI / flt_degres)) - m_flt_y * sin(flt_tetha * (PI / flt_degres));
	this->m_flt_y = m_flt_x * sin(flt_tetha * (PI / flt_degres)) - m_flt_y * cos(flt_tetha * (PI / flt_degres));

}
