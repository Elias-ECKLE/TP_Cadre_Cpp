#pragma once

#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>

using namespace std;


class CCadre {



	private :

		float m_flt_x;
		float m_flt_y;
		float m_flt_larg;
		float m_flt_long;
		char* m_p_motif;
		char* ptrCharNom_Cadre;



	public :


	//constructeurs :
		CCadre();
		CCadre(float,float,float,float,char*,char*);
		
	//constructeur de copie :
		CCadre(CCadre& c_cadre);


	//destructeurs :
		~CCadre();



	//asseceurs :
		float getX()const;
		float getY()const;
		float getLarg()const;
		float getLong()const;
		char* getMotif()const;
		char* getNom()const;

	//mutateurs :
		void setX(float);
		void setY(float);
		void setLarg(float);
		void setLong(float);
		void setMotif(char*);
		void setNom(char*);


	//methodes
		inline void afficheLog() {

			cout << "--------------Caracteristiques : " << ptrCharNom_Cadre <<" ---------------------" << endl;
			cout<<"Point d'ancrage X : "<<m_flt_x<<endl;
			cout << "Point d'ancrage Y : " << m_flt_y << endl;
			cout << "Largeur : " << m_flt_larg << endl;
			cout << "Longueur : " << m_flt_long << endl;
			cout << "Motif : " << m_p_motif<< endl;
		}

		float calculSurface();
		float calculPerimetre();
		bool isCarre();
		void rotation(float);




};


