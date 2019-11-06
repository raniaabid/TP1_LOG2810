#include "Fonctions.h"
using namespace std;

const int nbDeNoeuds=21;
const int nbDeRelations = 26;


vector<Noeuds> Fonctions::creerGraphe()
{
    vector<Noeuds> graphe(nbDeNoeuds);
    
    ifstream fin;
    fin.open("/Users/raniaabid/Desktop/tp1_log2810_maversion/tp1log2810/entrepot.txt");
    if(fin.fail())
        cout << "File failed to open." << endl;
    
    
    if (fin) //Tout est prêt pour la lecture.
    {
        Voisins voisin1=Voisins();
        Voisins voisin2=Voisins();
        char skip; // utilisation de skip pour ignorer la virgule dans la lecture de fichier
        for (int i = 0; i <nbDeNoeuds ; i++)
        { //Lecture des 21e premières lignes du fichier texte qui représente les 21 noeuds
            
            int n, a, b, c;
            fin >> n >> skip >> a >> skip >> b >> skip >> c;
            graphe[i].setNumSommet(n);
            graphe[i].setNbOBjet(a, b, c);
        }
        
        for (int i = 0; i < nbDeRelations; i++)
        {
            int sommet1, sommet2, distance;
            fin >> sommet1 >> skip >> sommet2 >> skip >> distance; // lecture du fichier
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
    cout<<"NOEUDS         SES VOISINS ET LEURS DISTANCES AU NOEUD"<<endl;
    for (int i = 0; i <nbDeNoeuds ; i++) // Affichage des infos de chaque Noeud du graphe
    {
        vector<Voisins> grapheVoisin = graphe[i].getNoeudsVoisins();
        cout << "(" << graphe[i].getNumSommet() << ","
        << graphe[i].getNbObjetA() << ","
        << graphe[i].getNbObjetB() << ","
        << graphe[i].getNbObjetC() << ")";
        for (int j = 0; j < graphe[i].getNbDeVoisin(); j++) // Affichage des infos des voisins de chaque noeud
        {
            
            cout << "     (" << grapheVoisin[j].getNumSommet() << ","
            << grapheVoisin[j].getDistance() << ")";
        }
        cout << endl;
    }
}

void Fonctions::plusCourtChemin(Commande commande) // Dijkstra
{
    vector<Struct> vectorEtat;
    for (int i=0; i<nbDeNoeuds;i++)
    {
        for (int j=0;j<graphe[i].getNbDeVoisin();j++) {
           
            
            
            if (i==0){
            vectorEtat[j].setDistance(0);
                vectorEtat[j].setAncienNoeud(Noeuds()); //il ny a pas de noeuds avant le premier
                
                vectorEtat[j].setNoeudCourant(graphe[i]);
                vectorEtat[j].setVisité(true);
            }
        
                else
            vectorEtat[j].setDistance(graphe[i].getNoeudsVoisins()[j].getDistance());
            vectorEtat[j].setNoeudCourant(graphe[i]);
            vectorEtat[j].setVisité(false);//quand je vais comparer les distance jvais set a true
            vectorEtat[j].setAncienNoeud(graphe[i-1]);
            
            //m[i]=
        }
  
        }
        

        
    }
    


void Fonctions::quitter(){
    system("clear");
}


