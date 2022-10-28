#include "compte.h"

CCompte::CCompte()
{
    m_titulaire = (std::string)"toto";
    m_solde = (float) 0;
}

CCompte::CCompte(std::string p_titulaire, float p_solde)
{
    m_titulaire = p_titulaire;
    m_solde = p_solde;
}

CCompte::~CCompte()
{

}

void CCompte::Afficher()
{
    std::cout << m_titulaire << " possède " << m_solde << "€.\n";
}

void CCompte::Deposer(float montant) {
    m_solde += montant;
}

void CCompte::Retirer(float montant) {
    m_solde -= montant;
}

bool CCompte::Decouvert() 
{
    if (m_solde < 0) {
        return true;
    }
    return false;
}

void CCompte::Virement(float montant, CCompte * compte) {
    Retirer(montant);
    compte->Deposer(montant);
}

void CCompte::setSolde(float p_solde)
{
    m_solde = p_solde;
}

void CCompte::setTitulaire(std::string p_titulaire)
{
    m_titulaire = p_titulaire;
}