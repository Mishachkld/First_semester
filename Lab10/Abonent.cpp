
#include <string>
#include "Abonent.hpp"

namespace as {
    Abonent::Abonent(std::string nameOfAbonent, std::string ipOfNewAbonent){
        name = nameOfAbonent;
        ip = ipOfNewAbonent;
    }
    Abonent::~Abonent(){ }

    std::string Abonent::getIp() {
        std::string userIp = ip;
        return userIp;
    }
    std::string Abonent::getTarif() {
        return tarif;
    }

    std::string Abonent::getName() {
        return name;
    }

    void Abonent::setTarif(std::string newTarif) {
        tarif = newTarif;
    }
} // as