//
// Created by Cezar on 20.12.2021.
//

#ifndef MAIN_PROJECT_CANTARETI_H
#define MAIN_PROJECT_CANTARETI_H
#include<iostream>
#include<string>
#include"Artist.h"

class Cantareti : public Artist{
    std::string nume_show;
    std::vector<std::string> playlist;
    int durata ;//in minute
    bool restrictie_varsta;  //1 pentru 16+, 0 pentru toate varstele

public:
    //void setShow(const std::string &numeShow, int durata, bool restrictieVarsta);

    Cantareti(const std::string &nume, const std::string &numeShow,
              int durata, bool restrictieVarsta);

    void adauga_melodie(const std::string &cantec);

    void arata_playlist();

    std::shared_ptr <Artist> clona() const override;

    friend std::ostream &operator<<(std::ostream &os, const Cantareti &cantareti);

    Cantareti& operator=(const Cantareti &copie);

};



#endif //MAIN_PROJECT_CANTARETI_H
