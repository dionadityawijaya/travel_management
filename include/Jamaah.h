#ifndef JAMAAH_H
#define JAMAAH_H

#include <string>

class Jamaah {
    public:
        Jamaah(int id, const std::string& name, const std::string& passport, const std::string& status);

        int getId() const;
        std::string getName() const;
        std::string getPassport() const;
        std::string getStatus() const;

        void setStatus(const std::string& newStatus);

    private:
        int id;
        std::string name;
        std::string passport;
        std::string status;

};


#endif