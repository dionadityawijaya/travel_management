#ifndef TRAVELPACKAGE_H
#define TRAVELPACKAGE_H

#include <string>

class TravelPackage {
    public:
        TravelPackage(int packageId, const std::string& name, double price);

        int getPackageId() const;
        std::string getName() const;
        double getPrice() const;

    private:
        int packageId;
        std::string name;
        double price;

};

#endif