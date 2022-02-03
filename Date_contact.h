//
// Created by Cezar on 18.12.2021.
//
#include<iostream>
#include<string>
#ifndef MAIN_PROJECT_DATE_CONTACT_H
#define MAIN_PROJECT_DATE_CONTACT_H

class Date_Contact
{
    std::string numar_telefon;
    std::string adresa_email;

public:
  //  Date_Contact()=default;

    Date_Contact(const std::string &numarTelefon, const std::string &adresaEmail);

    friend std::ostream &operator<<(std::ostream &os, const Date_Contact &contact);


};
#endif //MAIN_PROJECT_DATE_CONTACT_H
