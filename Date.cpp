#include <iostream>
#include <iomanip>

class Tanggal {
private:
    int hari;
    int bulan;
    int tahun;

public:
    Tanggal(int hari, int bulan, int tahun) : hari(hari), bulan(bulan), tahun(tahun) {}

    int getHari() const {
        return hari;
    }

    void setHari(int hari) {
        this->hari = hari;
    }

    int getBulan() const {
        return bulan;
    }

    void setBulan(int bulan) {
        this->bulan = bulan;
    }

    int getTahun() const {
        return tahun;
    }

    void setTahun(int tahun) {
        this->tahun = tahun;
    }

    void tampilkanTanggal() const {
        std::cout << std::setw(2) << std::setfill('0') << hari << "/"
                  << std::setw(2) << std::setfill('0') << bulan << "/"
                  << std::setw(4) << std::setfill('0') << tahun << std::endl;
    }
};

int main() {
    Tanggal tanggal(1, 10, 2023);
    std::cout << "Tanggal saat ini: ";
    tanggal.tampilkanTanggal();

    // Mengubah tanggal
    tanggal.setHari(15);
    tanggal.setBulan(10);
    tanggal.setTahun(2023);

    std::cout << "Tanggal setelah diubah: ";
    tanggal.tampilkanTanggal();

    return 0;
}
