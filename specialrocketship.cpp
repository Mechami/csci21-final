#ifndef SPECIALROCKETSHIP_CPP
#define SPECIALROCKETSHIP_CPP
#include "specialrocketship.h"

SpecialRocketShip::SpecialRocketShip()
                 : RocketShip("RS Cloaky", 1000), cloaked(false) {
    // Do nothing
}

void SpecialRocketShip::setCloaked(bool isCloaked) {
  cloaked = isCloaked;
}

bool SpecialRocketShip::getCloaked() const {
  return cloaked;
}

#endif