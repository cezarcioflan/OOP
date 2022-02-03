//
// Created by Cezar on 08.01.2022.
//

#ifndef MAIN_PROJECT_REZERVARE_H
#define MAIN_PROJECT_REZERVARE_H
#include<iostream>
#include"Artist.h"
#include<string>



class Rezervare {

    std::string numele;
    std::string locatia;
    int ziua;
    std::string luna;
    int anul;
    int ora_inceperii;
    int ora_terminarii;



public:

    Rezervare();

    Rezervare(const std::string &locatia, int ziua, const std::string &luna, int anul,
              int oraInceperii, int oraTerminarii, Artist &A);

    //void confirma_rezervare(const Rezervare &R);

    //int verifica_rezervari(const Rezervare &R);

    //void arata_rezervare(const Artist &A);

    Rezervare& operator=(const Rezervare &copie) = default;

    const std::string &getNumele() const;

    int getOraInceperii() const;

    int getOraTerminarii() const;

    const std::string &getLocatia() const;

    int getZiua() const;

    const std::string &getLuna() const;

    int getAnul() const;

    //void arata_rezervari();

    int bilet_simplu(const Artist &a);

    int bilet_premium(const Artist &a);

    void arata_bilete(const Artist &a);

    friend class rezervare_builder;

    friend std::ostream &operator<<(std::ostream &os, const Rezervare &rezervare);


};

 class rezervare_builder{
     Rezervare R;
 public:
     rezervare_builder() = default;

     rezervare_builder& nume(std::string nume);

     rezervare_builder& locatia(std::string locatia);

     rezervare_builder& ziua(int zi);

     rezervare_builder& luna(std::string luna);

     rezervare_builder& anul(int an);

     rezervare_builder& ora_i(int ora);

     rezervare_builder& ora_s(int ora);

     Rezervare build();



 };



#endif //MAIN_PROJECT_REZERVARE_H
