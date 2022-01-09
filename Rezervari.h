//
// Created by Cezar on 08.01.2022.
//

#ifndef MAIN_PROJECT_REZERVARI_H
#define MAIN_PROJECT_REZERVARI_H
#include<iostream>
#include"Artist.h"
#include"Comedianti.h"
#include<string>


class Rezervari {

    std::string numele;
    std::string locatia;
    int ziua;
    std::string luna;
    int anul;
    int ora_inceperii;
    int ora_terminarii;
    std::vector<Rezervari> rez;

public:

    Rezervari();

    Rezervari(const std::string &locatia, int ziua, const std::string &luna, int anul,
              int oraInceperii, int oraTerminarii, Artist &A);

    void confirma_rezervare(const Rezervari &R);

    int verifica_rezervari(const Rezervari &R);

    void arata_rezervare(const Artist &A);

    Rezervari& operator=(const Rezervari &copie) = default;

    const std::string &getNumele() const;

    int getOraInceperii() const;

    int getOraTerminarii() const;

    const std::string &getLocatia() const;

    int getZiua() const;

    const std::string &getLuna() const;

    int getAnul() const;

    void arata_rezervari();

    int bilet_simplu(const Artist &a);

    int bilet_premium(const Artist &a);

    void arata_bilete(const Artist &a);


};


#endif //MAIN_PROJECT_REZERVARI_H
