#include "TravelPackage.h"

TravelPackage::TravelPackage(int packageId, const std::string& name, double price) : packageId(packageId), name(name), price(price) {}

int TravelPackage::getPackageId() const {
    return packageId;
}
std::string TravelPackage::getName() const {
    return name;
}
double TravelPackage::getPrice() const {
    return price;
}