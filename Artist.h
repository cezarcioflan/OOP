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
#ifndef MAIN_PROJECT_ARTIST_H
#define MAIN_PROJECT_ARTIST_H
class Artist
{
    std::string nume;
    Act act=Act("null",0,"null",0);
    Date_Contact date=Date_Contact("000000000","adresa@email.ro");


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






    //std::vector<std::shared_ptr<Date_Contact>> &getDate_Contact();
    //std::vector<std::shared_ptr<Act>> &getAct();


};
#endif //MAIN_PROJECT_ARTIST_H