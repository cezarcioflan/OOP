//
// Created by Cezar on 06.01.2022.
//

#ifndef MAIN_PROJECT_ANIMATORI_H
#define MAIN_PROJECT_ANIMATORI_H
#include<iostream>
#include<string>
#include<vector>
#include"Artist.h"

class Animatori : public Artist {

    std::vector<std::string> aptitudini;
    std::string meserie; //actor, magician, clown etc.

public:
    Animatori(const std::string &nume, const std::vector<std::string> &aptitudini,
              const std::string &meserie);

    void mesajul_de_rezervare() override;

    std::shared_ptr<Artist> clona() const override;

    void adauga_aptitudine(const std::string &a);

    void prezentare() override;

    friend std::ostream &operator<<(std::ostream &os, const Animatori &animatori);


};


#endif //MAIN_PROJECT_ANIMATORI_H
