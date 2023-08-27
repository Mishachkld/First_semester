//
// Created by Mishach on 19.11.2022.
//

#include "Provider.hpp"

namespace as {


    Provider::Provider(std::string nameOfProvider) {
        name = nameOfProvider;
    }

    void Provider::getAllAbonentsInfo() {
        std::cout << "Info about all abonetns:" << std::endl;
        for(int i = 0; i < allAbonents.size(); i++)
            std::cout << allAbonents[i]->getName() << " " << allAbonents[i]->getTarif() << " " << allAbonents[i]->getIp()
                                                                                                        << std::endl;
    }

    void Provider::setTarifByName(std::string nameOfAbonent, int indexOfTarif) {
        std::string ip;
        for(int i = 0; i < allAbonents.size(); i++)
            if(allAbonents[i]->getName() == nameOfAbonent){
                allAbonents[i]->setTarif(tarifs[indexOfTarif]);
            }
    }

    Provider::~Provider() {
    }

    void Provider::addAbonent(as::Abonent* newAbonent) {
        allAbonents.push_back(newAbonent);
    }
} // as