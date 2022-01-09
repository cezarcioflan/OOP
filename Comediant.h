//
// Created by Cezar on 05.01.2022.
//

#ifndef MAIN_PROJECT_COMEDIANT_H
#define MAIN_PROJECT_COMEDIANT_H
#include<iostream>
#include"Artist.h"
#include<vector>
#include<string>

class Comediant : public Artist{

    std::vector<std::string>disponibilitate={"orice eveniment"}; //la ce fel de evenimente este comediantul dispus sa participe Ex: nunti,zile de nastere etc.
    std::vector<std::string>conditii={"echipament propriu"};// echipamentul de care are nevoie pentru sustinerea unui show (microfon, lumini etc.)
    bool material=false;// 1 daca poate face glume special pentru evenimentul la care este chemat,0 daca prezinta doar show-ul standard
    std::vector<std::string> gluma_seaca;
    std::vector<std::string> observatie;

public:
    Comediant(const std::string &nume, const std::vector<std::string> &disponibilitate,
               const std::vector<std::string> &conditii, bool material,const std::vector<std::string> &gluma_seaca, const std::vector<std::string> &observatie);

    std::shared_ptr <Artist> clona() const override;

    void glume_prezentare(const std::string &a,const std::string &b);

    void mesajul_de_rezervare() override;

    Comediant& operator=(const Comediant &copie);

    void adauga_disponibilitate(const std::string &a);

    void adauga_conditie(const std::string &a);

    friend std::ostream &operator<<(std::ostream &os, const Comediant &comedianti);

    void prezentare() override;

    Comediant(const std::string &nume, const Comediant &copie);



};


#endif //MAIN_PROJECT_COMEDIANT_H
