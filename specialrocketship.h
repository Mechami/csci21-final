#ifndef SPECIALROCKETSHIP_H
#define SPECIALROCKETSHIP_H
#include "rocketship.h"

class SpecialRocketShip : public RocketShip {
  public:
    SpecialRocketShip();

    void setCloaked(bool isCloaked);
    bool getCloaked() const;
  private:
    bool cloaked;
};

#include "specialrocketship.cpp"
#endif
