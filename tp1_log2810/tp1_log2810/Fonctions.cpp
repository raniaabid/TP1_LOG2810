#include "Fonctions.h"

const int nbDeNoeuds=21;
const int nbDeRelations = 26;


vector<Noeuds> Fonctions::creerGraphe() 
{
	vector<Noeuds> graphe(nbDeNoeuds);
	ifstream fichier("X:\Bureau/entrepot.txt");  //Ouverture du fichier en lecture

	if (fichier) //Tout est prêt pour la lecture.
	{
		Voisin voisin1, voisin2;
		char skip; // utilisation de skip pour ignorer la virgule dans la lecture de fichier
		for (int i = 0; i <nbDeNoeuds ; i++) 
		{ //Lecture des 21e premières lignes du fichier texte qui représente les 21 noeuds

			int n, a, b, c;
			fichier >> n >> skip >> a >> skip >> b >> skip >> c;
			graphe[i].setNumSommet(n);
			graphe[i].setNbOBjet(a, b, c);
		}
		
		for (int i = 0; i < nbDeRelations; i++)
		{
			int sommet1, sommet2, distance;
			fichier >> sommet1 >> skip >> sommet2 >> skip >> distance; // lecture du fichier 
			voisin2.setVoisin(sommet2, sommet1, distance);
			graphe[sommet1].setRelations(voisin2);
			voisin1.setVoisin(sommet1, sommet2, distance);
			graphe[sommet2].setRelations(voisin1);
		}
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
	}
	return graphe;
}

void Fonctions::afficherGraphe(vector<Noeuds> graphe) 
{
	for (int i = 0; i <nbDeNoeuds ; i++) // Affichage des infos de chaque Noeud du graphe
	{
		vector<Voisin> grapheVoisin = graphe[i].getVoisin(); 
		cout << "(" << graphe[i].getNumSommet() << "," 
					<< graphe[i].getNbObjetA() << "," 
					<< graphe[i].getNbObjetB() << ","
					<< graphe[i].getNbObjetC() << ",(";
		for (int j = 0; j < graphe[i].getNbDeVoisins(); j++) // Affichage des infos des voisins de chaque noeud
		{
			
			cout << "(" << grapheVoisin[j].getNumSommet() << ","
				<< grapheVoisin[j].getDistance() << ")";
		}
		cout << "))" << endl;
	}
}



void Fonctions::plusCourtChemin() // Dijkstra
{
	
}