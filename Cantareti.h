//
// Created by Cezar on 20.12.2021.
//

#ifndef MAIN_PROJECT_CANTARETI_H
#define MAIN_PROJECT_CANTARETI_H
#include<iostream>
#include"Artist.h"
#include<string>
#include<vector>

class Cantareti : public Artist{
    std::string nume_show;
    std::vector<std::string> playlist;
    int durata ;//in minute
    int tip; // cantaret, cantareata sau formatie,o folosesc pentru mesajul de rezervare
    bool restrictie_varsta;  //1 pentru 16+, 0 pentru toate varstele

public:

    Cantareti(const std::string &nume, const std::string &numeShow, const std::vector<std::string> &playlist,
              int durata, int tip, bool restrictieVarsta);

    void adauga_melodie(const std::string &cantec);

    void arata_playlist();

    std::shared_ptr <Artist> clona() const override;

    friend std::ostream &operator<<(std::ostream &os, const Cantareti &cantareti);

    Cantareti& operator=(const Cantareti &copie);

    void prezentare() override;

    void mesajul_de_rezervare() override;



};



#endif //MAIN_PROJECT_CANTARETI_H
