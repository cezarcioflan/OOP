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
    artist.push_back(artist_nou.clona());
    nume.push_back(artist_nou.getNume());
}




std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie) {
    for(const auto &p: aplicatie.artist)
        os<<*p;
    return os;
}

const std::vector<std::shared_ptr<Artist>> &Aplicatie::getArtist() const {
    return artist;
}

int cmp(const std::string &a, const std::string &b) {
    return a<b;
}

void Aplicatie::sorteaza_artisti() {

    std::sort(nume.begin(),nume.end(),cmp);

}

void Aplicatie::afiseaza_artisti() {

    for(int i=0;i<nume.size();i++)
        std::cout<<"\n"<<nume[i];

}



























