#include "Booking.h"

// Konstruktor
Booking::Booking(int bookingId, const Jamaah& jamaah, const TravelPackage& travelPackage, const std::string& bookingDate)
    : bookingId(bookingId), jamaah(jamaah), travelPackage(travelPackage), bookingDate(bookingDate), status("Pending") {}

// Getter untuk Booking ID
int Booking::getBookingId() const {
    return bookingId;
}

// Getter untuk Jamaah
Jamaah Booking::getJamaah() const {
    return jamaah;
}

// Getter untuk Paket Travel
TravelPackage Booking::getTravelPackage() const {
    return travelPackage;
}

// Getter untuk Tanggal Booking
std::string Booking::getBookingDate() const {
    return bookingDate;
}

// Getter untuk Status Booking
std::string Booking::getStatus() const {
    return status;
}

// Mengkonfirmasi Booking
void Booking::confirmBooking() {
    status = "Confirmed";
}

// Membatalkan Booking
void Booking::cancelBooking() {
    status = "Cancelled";
}
