//
// Created by Cezar on 18.12.2021.
//

#ifndef MAIN_PROJECT_APLICATIE_H
#define MAIN_PROJECT_APLICATIE_H
#include<iostream>
#include<vector>
#include<string>
#include"Artist.h"
#include"Cantareti.h"
#include<memory>

class Aplicatie {
        std::vector<std::shared_ptr<Artist>> artisti;
        //std::vector<std::string> nume;
        // functia mea de sortare are o problema cu numele din vectorul artisti, asa ca le-am stocat separat pana ma gandesc la o rezolvare


    public:
        Aplicatie();

        ~Aplicatie();

        void adauga_artist(const Artist &artist_nou);

    const std::vector<std::shared_ptr<Artist>> &getArtist() const;

    void sorteaza_artisti_alfabetic();

    void afiseaza_artisti();

    friend std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie);

    void sorteaza_artisti_dupa_pret();



};





#endif //MAIN_PROJECT_APLICATIE_H
