#include "Payment.h"

Payment::Payment(int paymentId, double amount, const std::string& paymentDate, const std::string& paymentMethod) : paymentId(paymentId), amount(amount), paymentDate(paymentDate), paymentMethod(paymentMethod), confirmed(false) {}


int Payment::getPaymentId() const {
       return paymentId;
}

double Payment::getAmount() const {
       return amount;
}

std::string Payment::getPaymentDate() const {
       return paymentDate;
}

std::string Payment::getPaymentMethod() const {
       return paymentMethod;
}


void Payment::confirmPayment() {
       confirmed = true;
}
