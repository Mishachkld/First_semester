#include "Provider.hpp"

int main() {
    as::Provider provider = as::Provider("Rostelekom");
    provider.addAbonent(new as::Abonent("Mishach1", "192.168.1.1"));
    provider.addAbonent(new as::Abonent("Mishach2", "192.169.1.0"));
    provider.addAbonent(new as::Abonent("Mishach3", "192.255.1.0"));
    provider.setTarifByName("Mishach1", 2);
    provider.setTarifByName("Mishach2", 4);
    provider.setTarifByName("Mishach3", 1);

    provider.getAllAbonentsInfo();

    return 0;
}
