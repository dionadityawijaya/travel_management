#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Payment {
    public:
        Payment(int paymentId, double amount, const std::string& paymentDate, const std::string& paymentMethod);

        int getPaymentId() const;
        double getAmount() const;
        std::string getPaymentDate() const;
        std::string getPaymentMethod() const;

        void confirmPayment();

    private:
        int paymentId;
        double amount;
        std::string paymentDate;
        std::string paymentMethod;
        bool confirmed;
};

#endif