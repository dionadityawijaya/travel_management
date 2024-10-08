#include "Jamaah.h"


Jamaah::Jamaah(int id, const std::string& name, const std::string& passport, const std::string& status) :id(id), name(name), passport(passport), status(status) {}


int Jamaah::getId() const {
    return id;
}

std::string Jamaah::getName() const {
    return name;
}

std::string Jamaah::getPassport() const {
    return passport;
}

std::string Jamaah::getStatus() const {
    return status;
}


void Jamaah::setStatus(const std::string& newStatus) {
    status = newStatus;
}
