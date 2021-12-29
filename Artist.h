//
// Created by Cezar on 18.12.2021.
//
#include<vector>
#include<iostream>
#include"Act.h"
#include"Date_contact.h"
#include<memory>
#ifndef MAIN_PROJECT_ARTIST_H
#define MAIN_PROJECT_ARTIST_H
class Artist
{
    std::string nume;
    std::vector<Act> act;
    std::vector<Date_Contact> date;
    static int nr_artisti;
public:

    virtual ~Artist()
    {
        std::cout<<std::endl<<"distrus Artist";
    }

    explicit Artist(const std::string &nume);

    virtual void adauga_act(const Act &act);

    virtual void adauga_date(const Date_Contact &datele_noi);

    friend std::ostream &operator<<(std::ostream &os, const Artist &artist);

    void setNume(const std::string &nume);

    virtual std::shared_ptr <Artist> clona() const = 0;


    //std::vector<std::shared_ptr<Date_Contact>> &getDate_Contact();
    //std::vector<std::shared_ptr<Act>> &getAct();

};
#endif //MAIN_PROJECT_ARTIST_H
