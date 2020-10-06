//But : faire deviner un nombre entre 1 et 100 (5 essais)
//Auteur : Frédéric Charron
//Date : 2020-10-05

#include <iostream>
#include <Windows.h>		
#include <time.h>		//bibliothèque random

using namespace std;	//éviter std

int main()
{
	setlocale(LC_ALL, "");				//Accents
	int random;
	int nb;						//Variables
	int essai = 1;	
	srand(time(0));	//Activer l'aléatoire

	while (essai < 5)	//tant que le nombre d'essai est plus bas que 5 le programme recommence
	{

		essai++;		//ajoute 1 à la valeur des essai
	}


}