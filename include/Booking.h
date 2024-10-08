#ifndef BOOKING_H
#define BOOKING_H

#include "Jamaah.h"
#include "TravelPackage.h"
#include <string>
#include <vector>

class Booking {
private:
    int bookingId;                 // ID unik untuk setiap booking
    Jamaah jamaah;                 // Objek Jamaah yang melakukan booking
    TravelPackage travelPackage;   // Paket travel yang dipilih
    std::string bookingDate;       // Tanggal booking
    std::string status;            // Status booking: "Pending", "Confirmed", atau "Cancelled"

public:
    // Konstruktor
    Booking(int bookingId, const Jamaah& jamaah, const TravelPackage& travelPackage, const std::string& bookingDate);

    // Getter untuk Booking ID
    int getBookingId() const;

    // Getter untuk Jamaah
    Jamaah getJamaah() const;

    // Getter untuk Paket Travel
    TravelPackage getTravelPackage() const;

    // Getter untuk Tanggal Booking
    std::string getBookingDate() const;

    // Getter untuk Status Booking
    std::string getStatus() const;

    // Konfirmasi booking
    void confirmBooking();

    // Membatalkan booking
    void cancelBooking();
};

#endif
