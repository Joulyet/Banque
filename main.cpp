#include "compte.h"

int main()
{
    CCompte * compte1;
    compte1->setTitulaire("toto");
    compte1->setSolde(100);
    compte1->Afficher();
    compte1->Deposer(100);
    compte1->Afficher();
    compte1->Retirer(200);
    compte1->Afficher();
    if (compte1->Decouvert()) {
        std::cout << "Le compte est à découvert.\n";
    }
    else {
        std::cout << "Le compte n'est pas à découvert.\n";
    }

    return EXIT_SUCCESS;
}