//
// Created by Cezar on 18.12.2021.
//

#include "Aplicatie.h"

Aplicatie::Aplicatie() {

    std::cout<<std::endl<<"creat Aplicatie ";
}

Aplicatie::~Aplicatie() {
    std::cout<<std::endl<<"distrus Aplicatie ";
}

void Aplicatie::adauga_artist(const Artist &artist_nou) {
    artisti.push_back(artist_nou.clona());
    //nume.push_back(artist_nou.getNume());
}




std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie) {
    for(const auto &p: aplicatie.artisti)
        os<<*p;
    return os;
}

const std::vector<std::shared_ptr<Artist>> &Aplicatie::getArtist() const {
    return artisti;
}



void Aplicatie::sorteaza_artisti_alfabetic() {

    std::sort(artisti.begin(), artisti.end(), [](const auto& a, const auto& b) {
        return a->getNume() < b->getNume();
    });
}

void Aplicatie::afiseaza_artisti() {

    for(int i=0; i < artisti.size(); i++)
        std::cout << "\n" << artisti[i]->getNume();

}

void Aplicatie::sorteaza_artisti_dupa_pret() {

    std::sort(artisti.begin(), artisti.end(), [](const auto& a, const auto& b) {
        return a->arata_pret() < b->arata_pret();
    });
}































