#include <iostream>
#include <string>
#include "Jamaah.h"
#include "Booking.h"
#include "TravelPackage.h"
#include "crow.h"  // Tambahkan Crow

void getUserInput(std::string& name, std::string& passport) {
    std::cout << "Masukkan nama Anda: ";
    std::getline(std::cin, name);
    std::cout << "Masukkan nomor paspor Anda: ";
    std::getline(std::cin, passport);
}

int main() {
    std::string userName, userPassport;

    // Meminta input pengguna
    getUserInput(userName, userPassport);

    // Membuat objek Jamaah dan TravelPackage
    Jamaah jamaah1(1, userName, userPassport, "Pending");
    TravelPackage package1(101, "Paket Umrah Ekonomi", 1500.00);

    // Membuat Booking
    Booking booking1(1001, jamaah1, package1, "2024-10-07");

    // Menampilkan informasi booking
    std::cout << "\nInformasi Booking:\n";
    std::cout << "Booking ID: " << booking1.getBookingId() << std::endl;
    std::cout << "Nama Jamaah: " << booking1.getJamaah().getName() << std::endl;
    std::cout << "Paket: " << booking1.getTravelPackage().getName() << std::endl;

    // Konfirmasi booking
    booking1.confirmBooking();
    std::cout << "Booking dikonfirmasi." << std::endl;

    // Setup Crow API
    crow::SimpleApp app;

    // Route untuk mendapatkan informasi booking
    CROW_ROUTE(app, "/api/booking")
    ([&booking1](){
        crow::json::wvalue result;
        result["booking_id"] = booking1.getBookingId();
        result["jamaah_name"] = booking1.getJamaah().getName();
        result["jamaah_passport"] = booking1.getJamaah().getPassport();
        result["travel_package"] = booking1.getTravelPackage().getName();
        result["price"] = booking1.getTravelPackage().getPrice();
        result["status"] = booking1.getJamaah().getStatus();
        return result;
    });

    // Route untuk mengkonfirmasi booking
    CROW_ROUTE(app, "/api/confirm")
    ([&booking1](){
        booking1.confirmBooking();
        return crow::json::wvalue{{"message", "Booking dikonfirmasi"}};
    });

    // Jalankan server Crow di port 8080
    app.port(8080).multithreaded().run();

    return 0;
}
