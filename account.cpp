#include <iostream>
#include <string>

class Akun {
private:
    std::string namaPemilik;
    double saldo;

public:
    Akun(const std::string& namaPemilik, double saldoAwal) : namaPemilik(namaPemilik), saldo(saldoAwal) {}

    std::string getNamaPemilik() const {
        return namaPemilik;
    }

    void setNamaPemilik(const std::string& namaPemilik) {
        this->namaPemilik = namaPemilik;
    }

    double getSaldo() const {
        return saldo;
    }

    void setSaldo(double saldo) {
        this->saldo = saldo;
    }

    void deposit(double jumlah) {
        saldo += jumlah;
    }

    void withdraw(double jumlah) {
        if (saldo >= jumlah) {
            saldo -= jumlah;
        } else {
            std::cout << "Saldo tidak mencukupi." << std::endl;
        }
    }

    void tampilkanInfo() const {
        std::cout << "Akun pemilik: " << namaPemilik << ", Saldo: " << saldo << std::endl;
    }
};

int main() {
    Akun akun("John Doe", 1000.0);
    std::cout << "Informasi akun: ";
    akun.tampilkanInfo();

    // Melakukan deposit
    akun.deposit(500.0);
    std::cout << "Setelah deposit: ";
    akun.tampilkanInfo();

    // Melakukan penarikan
    akun.withdraw(300.0);
    std::cout << "Setelah penarikan: ";
    akun.tampilkanInfo();

    return 0;
}
