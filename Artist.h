//
// Created by Cezar on 18.12.2021.
//
#include<vector>
#include<iostream>
#include"Act.h"
#include"Date_contact.h"
#include<memory>
//#include<bits/stdc++.h>
#include<algorithm>
#include"Festival.h"
#include"Exceptii.h"
#ifndef MAIN_PROJECT_ARTIST_H
#define MAIN_PROJECT_ARTIST_H

enum class tip{
    cantaret=1, cantareata, formatie
};

enum class meserie{
    magician,clown,actor
};

class Artist
{
    std::string nume;
    Act act = Act("null",0,"null",0);
    Date_Contact date = Date_Contact("000000000","adresa@email.ro");
    std::vector<Festival<float>> festivaluri; //o sa intre in constructor, dar momentan testez sa vad daca merge factory-ul



public:

    virtual ~Artist()
    {
        std::cout<<std::endl<<"distrus Artist";
    }

    explicit Artist(const std::string &nume);

    void adauga_act(const Act &act);

    void adauga_date(const Date_Contact &datele_noi);

    friend std::ostream &operator<<(std::ostream &os, const Artist &artist);

    void setNume(const std::string &nume);

    virtual std::shared_ptr <Artist> clona() const = 0;

    const std::string &getNume() const;

    virtual void mesajul_de_rezervare() = 0;

    int arata_pret() const;

    virtual void prezentare() = 0;

    void adauga_festival(const Festival<float> &festival);









};
#endif //MAIN_PROJECT_ARTIST_H
