#include <iostream>


int main() {

	int optionChoisie;

	std::cout << "Veuillez choisir l'une des options suivantes : \n" << std::endl;

	std::cout << "\t[1] Creer le graphe  \n\t[2] Afficher le graphe  \n\t[3] Prendre une commande  \n\t[4] Afficher la commande  \n\t[5] Trouver le plus court chemin  \n\t[0] Quitter " << std::endl;

	std::cin >> optionChoisie;


	///test du cin
	std::cout << "test du cin" << optionChoisie << std::endl;



	return 0;



}