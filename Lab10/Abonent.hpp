#pragma once

#include<string>

namespace as {

    class Abonent {
    public:
        Abonent(std::string nameOfAbonent, std::string ipOfNewAbonent);
        ~Abonent();
        std::string getIp();
        std::string getTarif();
        std::string getName();
        void setTarif(std::string newTarif);


    private:
        std::string ip;
        std::string tarif;
        std::string name;

    };

} // as


