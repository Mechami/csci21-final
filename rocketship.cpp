#ifndef ROCKETSHIP_CPP
#define ROCKETSHIP_CPP
#include "rocketship.h"

RocketShip::RocketShip() : name("RS NullPointer"), fuel(1000) {
  // Do nothing
}

RocketShip::RocketShip(string newName, unsigned int newFuel) 
          : name(newName), fuel(newFuel) {
  // Do nothing
}

void RocketShip::setName(string newName) {
    name = newName;
}

string RocketShip::getName() const {
    return name;
}

void RocketShip::setFuel(unsigned int amount) {
    fuel = amount;
}

unsigned int RocketShip::getFuel() const {
    return fuel;
}

void RocketShip::addFuelCell(unsigned int fuelAmount) {
    fuelCells.push_back(fuelAmount);
}

bool RocketShip::removeFuelCell(unsigned int cellNumber) {
    bool removed = false;

    if (cellNumber < fuelCells.size()) {
        fuelCells.erase(fuelCells.begin() + cellNumber);
        removed = true;
    }

    return removed;
}

bool RocketShip::addFuelToCell(unsigned int cellNumber, unsigned int fuelAmount) {
    bool refueled = false;

    if (cellNumber < fuelCells.size()) {
        fuelCells[cellNumber] = fuelAmount;
        refueled = true;
    }

    return refueled;
}

string RocketShip::burnFuel(unsigned int cellNumber) {
    stringstream ss("");

    for (size_t fuel = 0; (cellNumber < fuelCells.size()) && (fuel < fuelCells[cellNumber]); fuel++) {
        ss << '*';
    }

    return ss.str();
}

#endif
