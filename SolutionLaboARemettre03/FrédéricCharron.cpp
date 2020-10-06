//But: Cr�er un programme qui calcule le salaire d'un employ� selon ses ventes brutes par semaine.
//Auteur: Fr�d�ric Charron
//Date:2020-10-05

#include<iostream>
#include<Windows.h>
using namespace std;		//�viter std

int main()
{
	setlocale(LC_ALL, "");		//accents

	const int SALAIRE = 250;		//salaire constant hebdomadaire

	float montant =0;		//montant des ventes
	
	while (montant > -1)		//tant que montant est plus grand que -1, le programme continue la boucle-
	{
		cout <<"Veuillez entrer le montant des ventes (-1 pour quitter) :" << endl;

		cin >> montant;			//l'utilisateur entre le montant des ventes

		cout << "Salaire hebdomadaire :" << (SALAIRE + (montant * 0.075)) << endl;		//Dire le salaire de l'employ�

		Sleep(1000);		//attendre une seconde
	
	}


}


/*
plan de test 

montant		salaire		r�ponse du prog.
5000$		625$			625$

montant		salaire		r�ponse du prog.
3000$		475$			475$
salaire		salaire		r�ponse du prog.
-1			quitter			quitter



*/