#include <iostream>
#include "grafo.cpp"  // Include il file con la definizione della classe Grafo

int main() {
    Grafo<std::string> grafo; // Crea un grafo di tipo stringa

    // Aggiungi i nodi
    grafo.aggiungiNodo("Torino");
    grafo.aggiungiNodo("Milano");
    grafo.aggiungiNodo("Genova");
    grafo.aggiungiNodo("Venezia");
    grafo.aggiungiNodo("Firenze");

    // Aggiungi gli archi con i rispettivi pesi (in km)
    grafo.aggiungiArco("Torino", "Milano", 140);
    grafo.aggiungiArco("Torino", "Genova", 170);
    grafo.aggiungiArco("Milano", "Genova", 270);
    grafo.aggiungiArco("Milano", "Venezia", 230);
    grafo.aggiungiArco("Venezia", "Firenze", 260);
    grafo.aggiungiArco("Venezia", "Torino", 250);

    // Stampa la matrice di adiacenza
    grafo.stampa();

    // Stampa i nodi adiacenti a Torino
    grafo.nodiAdiacenti("Torino");

    // Rimuove un arco e stampa di nuovo la matrice
    grafo.rimuoviArco("Venezia", "Torino");
    grafo.stampa();

    // Rimuove un nodo e stampa la matrice
    grafo.rimuoviNodo("Milano");
    grafo.stampa();

    return 0;
}
