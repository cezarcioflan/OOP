//
// Created by Cezar on 05.01.2022.
//

#ifndef MAIN_PROJECT_COMEDIANTI_H
#define MAIN_PROJECT_COMEDIANTI_H
#include<iostream>
#include"Artist.h"
#include<vector>
#include<string>

class Comedianti : public Artist{

    std::vector<std::string>disponibilitate={"orice eveniment"}; //la ce fel de evenimente este comediantul dispus sa participe Ex: nunti,zile de nastere etc.
    std::vector<std::string>conditii={"echipament propriu"};// echipamentul de care are nevoie pentru sustinerea unui show (microfon, lumini etc.)
    bool material=false;// 1 daca poate face glume special pentru evenimentul la care este chemat,0 daca prezinta doar show-ul standard
    std::string gluma_seaca;
    std::string observatie;

public:
    Comedianti(const std::string &nume, const std::vector<std::string> &disponibilitate,
               const std::vector<std::string> &conditii, bool material);

    std::shared_ptr <Artist> clona() const override;

    void glume_prezentare(const std::string &a,const std::string &b);

    void mesajul_de_rezervare() override;

    Comedianti& operator=(const Comedianti &copie) = default;

    void adauga_disponibilitate(const std::string &a);

    void adauga_conditie(const std::string &a);

    friend std::ostream &operator<<(std::ostream &os, const Comedianti &comedianti);

    void prezentare() override;



};


#endif //MAIN_PROJECT_COMEDIANTI_H
