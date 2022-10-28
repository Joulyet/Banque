#ifndef _compte_h_
#define _compte_h_

#include <iostream>
#include <string>

class CCompte
{
protected:
    std::string m_titulaire;
    float m_solde;

    CCompte();

public:
    CCompte(std::string p_titulaire, float p_solde);
    virtual ~CCompte();

    void Afficher();
    void Deposer(float montant);
    void Retirer(float montant);
    void Virement(float montant, CCompte * compte);
    void setTitulaire(std::string p_titulaire);
    void setSolde(float p_solde);
    bool Decouvert();
};

#endif