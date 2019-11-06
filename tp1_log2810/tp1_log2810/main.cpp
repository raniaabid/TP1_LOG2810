//
//  main.cpp
//  tp1log2810
//
//  Created by Rania Abid on 2019-10-11.
//  Copyright © 2019 Rania Abid. All rights reserved.
//

#include <iostream>
#include <string>
#include <fstream>
#include "Fonctions.h"

int main() {

	//TODO : interface
	int optionChoisie;
	Fonctions f1;
	vector<Noeuds> graphe;
	Commande commande1;

	std::cout << "Veuillez choisir l'une des options suivantes : \n" << std::endl;

	do
	{
		std::cout << "\t[1] Creer le graphe  \n\t[2] Afficher le graphe  \n\t[3] Prendre une commande  \n\t[4] Afficher la commande  \n\t[5] Trouver le plus court chemin  \n\t[0] Quitter " << std::endl;

		std::cin >> optionChoisie;

		switch (optionChoisie)
		{
		case 1:
			graphe = f1.creerGraphe();
			break;

		case 2:
			f1.afficherGraphe(graphe);
			cout << endl;
			break;

		case 3:
			commande1.prendreCommande();
			break;

		case 4:
			cout << "Votre commande est :" << endl;
			commande1.afficherCommande();
			break;

		case 5:
			f1.plusCourtChemin(commande1); //MANQUE DE TEMPS POUR COMPLETER LA METHODE :(
			cout << "Votre chemin le plus court pour récolter recolter votre commande sera... avec le robot et avec un temps" << endl; //MANQUE DE TEMPS POUR COMPLETER LA METHODE :(
			break;

		case 0:
			f1.quitter();
			break;
		}

		string reponse;
		cout << "Voulez vous quitter ?" << endl;
		getline(cin, reponse);

		if (reponse == "oui")
		{
			optionChoisie = 0;
		}

	} while (optionChoisie != 0);


	return 0;
}
