#pragma once

#include "Abonent.hpp"
#include <iostream>
#include <string>
#include <vector>

namespace as {

    class Provider {
    public:
        Provider(std::string nameOfProvider);
        ~Provider();
        void getAllAbonentsInfo();
        void addAbonent(as::Abonent *newAbonent);
        void setTarifByName(std::string nameOfAbonent, int indexOfTarif);

    private:
        const std::string tarifs[5] = {"Tarif 1", "Tarif Krepostnoi", "Tarif 3", "Tarif 4", "Tarif 5"};
        std::vector<as::Abonent *> allAbonents;
        std::string name;

    };

} // as

