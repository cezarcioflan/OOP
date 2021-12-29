//
// Created by Cezar on 18.12.2021.
//

#ifndef MAIN_PROJECT_APLICATIE_H
#define MAIN_PROJECT_APLICATIE_H
#include<iostream>
#include<vector>
#include<string>
#include"Artist.h"
#include<memory>

class Aplicatie {
        std::vector<std::shared_ptr<Artist>> artist;
        int nr_artisti;

    public:
        Aplicatie();

        ~Aplicatie();

        void adauga_artist(const Artist &artist_nou);



    int getNrArtisti() const;

    void setNrArtisti(int nrArtisti);

    friend std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie);


};





#endif //MAIN_PROJECT_APLICATIE_H
