//
// Created by Cezar on 06.01.2022.
//

#ifndef MAIN_PROJECT_ANIMATOR_H
#define MAIN_PROJECT_ANIMATOR_H
#include<iostream>
#include<string>
#include<vector>
#include"Artist.h"

class Animator : public Artist {

    std::vector<std::string> aptitudini;
    meserie tip; //actor, magician, clown etc.

public:
    Animator(const std::string &nume, const std::vector<std::string> &aptitudini,
              const meserie &tip);

    void mesajul_de_rezervare() override;

    std::shared_ptr<Artist> clona() const override;

    void adauga_aptitudine(const std::string &a);

    void prezentare() override;

    friend std::ostream &operator<<(std::ostream &os, const Animator &animatori);


};


#endif //MAIN_PROJECT_ANIMATOR_H
