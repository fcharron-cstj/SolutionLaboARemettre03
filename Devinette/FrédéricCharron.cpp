//But : faire deviner un nombre entre 1 et 100 (5 essais)
//Auteur : Fr�d�ric Charron
//Date : 2020-10-05

#include <iostream>
#include <Windows.h>		
#include <time.h>		//biblioth�que random

using namespace std;	//�viter std

int main()
{
	setlocale(LC_ALL, "");				//Accents
	int random;
	int nb;						//Variables
	int essai = 1;	
	srand(time(0));	//Activer l'al�atoire

	while (essai < 5)	//tant que le nombre d'essai est plus bas que 5 le programme recommence
	{

		essai++;		//ajoute 1 � la valeur des essai
	}


}