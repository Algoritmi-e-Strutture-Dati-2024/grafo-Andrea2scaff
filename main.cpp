#include <iostream>
#include "Grafo.cpp"  // FILE DI RIFERIMENTO

int main() {
    Grafo<std::string> grafo; // GRAFO DI TIPO STRINGA

    // NODI
    grafo.aggiungiNodo("Torino");
    grafo.aggiungiNodo("Milano");
    grafo.aggiungiNodo("Genova");
    grafo.aggiungiNodo("Venezia");
    grafo.aggiungiNodo("Firenze");

    // ARCHI E PESO
    grafo.aggiungiArco("Torino", "Milano", 140);
    grafo.aggiungiArco("Torino", "Genova", 170);
    grafo.aggiungiArco("Milano", "Genova", 270);
    grafo.aggiungiArco("Milano", "Venezia", 230);
    grafo.aggiungiArco("Venezia", "Firenze", 260);
    grafo.aggiungiArco("Venezia", "Torino", 250);

    // MATRICE DI ADIACENZA
    grafo.stampa();

    // NODI ADIACENTI A TORINO
    grafo.nodiAdiacenti("Torino");

    // RIMUOVO UN ARCO E RISTAMPO
    grafo.rimuoviArco("Venezia", "Torino");
    grafo.stampa();

    // RIMUOVO UN NOD E RISTAMPO
    grafo.rimuoviNodo("Milano");
    grafo.stampa();

    return 0;
}
