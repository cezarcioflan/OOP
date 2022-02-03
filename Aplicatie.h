//
// Created by Cezar on 18.12.2021.
//

#ifndef MAIN_PROJECT_APLICATIE_H
#define MAIN_PROJECT_APLICATIE_H
#include<iostream>
#include<vector>
#include<string>
#include"Artist.h"
#include"Cantaret.h"
#include<memory>
#include"Rezervare.h"

class Aplicatie {
        std::vector<std::shared_ptr<Artist>> artisti;
        std::vector<Rezervare> rez;



    public:
        Aplicatie();

        ~Aplicatie();

        void adauga_artist(const Artist &artist_nou);

    const std::vector<std::shared_ptr<Artist>> &getArtist() const;

    void sorteaza_artisti_alfabetic();

    void afiseaza_artisti();

    friend std::ostream &operator<<(std::ostream &os, const Aplicatie &aplicatie);

    void confirma_rezervare(const Rezervare &R);

    int verifica_rezervari(const Rezervare &R);

    Aplicatie(const Aplicatie &copie);

    void arata_rezervari();

    void sorteaza_artisti_dupa_pret();

    Aplicatie &operator=(Aplicatie &copie);

    friend void swap(Aplicatie &a, Aplicatie &b);



};





#endif //MAIN_PROJECT_APLICATIE_H
