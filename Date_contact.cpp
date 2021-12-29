//
// Created by Cezar on 18.12.2021.
//
#include "Date_contact.h"
Date_Contact::Date_Contact(const std::string &numarTelefon,const std::string &adresaEmail) : numar_telefon(
        numarTelefon), adresa_email(adresaEmail)
{
    //this->numar_telefon = numar_telefon;
    //this->adresa_email = adresa_email;

}

std::ostream &operator<<(std::ostream &os, const Date_Contact &contact) {
    os << "numar_telefon: " << contact.numar_telefon << " adresa_email: " << contact.adresa_email;
    return os;
}
