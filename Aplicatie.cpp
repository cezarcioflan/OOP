//
// Created by Cezar on 18.12.2021.
//

#include "Aplicatie.h"

Aplicatie::Aplicatie() {
    nr_artisti=0;
    std::cout<<std::endl<<"creat Aplicatie ";
}

Aplicatie::~Aplicatie() {
    std::cout<<std::endl<<"distrus Aplicatie ";
}

void Aplicatie::adauga_artist(const Artist &artist_nou) {
    artist.push_back(artist_nou.clona());
}


void Aplicatie::setNrArtisti(int nrArtisti) {
    nr_artisti = nrArtisti;
}

int Aplicatie::getNrArtisti() const {
    return nr_artisti;
}

std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie) {
    for(const auto &p: aplicatie.artist)
        os<<*p;
    return os;
}


















