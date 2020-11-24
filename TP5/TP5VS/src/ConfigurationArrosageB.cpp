/****************************************************************************
**
** Classe ConfigurationArrosageB
** Author: Fabrice Charbonneau
** Date: oct-2020
**
****************************************************************************/


#include "ConfigurationArrosageB.h"
#include "../Arrosage/ArrosoirFixe.h"
#include "../Arrosage/ArrosoirOscillant.h"

ConfigurationArrosageB::ConfigurationArrosageB() {

}

std::list<AbsArrosoir*> ConfigurationArrosageB::creerArrosoirs() const {
    // À COMPLÉTER
    // On veut que cette configuration contienne:
    // - un arrosoir fixe
    // - un arrosoir oscillant avec les paramètres distance = 3 et vitesse = 5
    std::list<AbsArrosoir*> arrosoirs;

    ArrosoirFixe* fixe = new ArrosoirFixe;
    ArrosoirOscillant* oscillant = new ArrosoirOscillant(3, 5);
    arrosoirs.push_back(fixe);
    arrosoirs.push_back(oscillant);

    return arrosoirs;
}
