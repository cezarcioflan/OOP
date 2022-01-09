//
// Created by Cezar on 20.12.2021.
//

#ifndef MAIN_PROJECT_CANTARET_H
#define MAIN_PROJECT_CANTARET_H
#include<iostream>
#include"Artist.h"
#include<string>
#include<vector>


class Cantaret : public Artist{






   // enum class tip{
  //      cantaret=1, cantareata, formatie
   // };
    std::string nume_show;
    std::vector<std::string> playlist;
    int durata ;//in minute
   // int tip; // cantaret, cantareata sau formatie,o folosesc pentru mesajul de rezervare
    bool restrictie_varsta;  //1 pentru 16+, 0 pentru toate varstele
    tip gen;


public:

    Cantaret(const std::string &nume, const std::string &numeShow, const std::vector<std::string> &playlist,
              int durata, const tip gen, bool restrictieVarsta);

    void adauga_melodie(const std::string &cantec);

    void arata_playlist();

    std::shared_ptr <Artist> clona() const override;

    friend std::ostream &operator<<(std::ostream &os, const Cantaret &cantareti);

    Cantaret& operator=(const Cantaret &copie);

    void prezentare() override;

    void mesajul_de_rezervare() override;

    Cantaret(const std::string &nume, const Cantaret &copie);



};



#endif //MAIN_PROJECT_CANTARET_H
