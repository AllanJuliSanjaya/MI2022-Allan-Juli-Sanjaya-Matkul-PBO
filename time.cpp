#include <iostream>
#include <iomanip>

class Waktu {
private:
    int jam;
    int menit;
    int detik;

public:
    Waktu(int jam, int menit, int detik) : jam(jam), menit(menit), detik(detik) {}

    int getJam() const {
        return jam;
    }

    void setJam(int jam) {
        this->jam = jam;
    }

    int getMenit() const {
        return menit;
    }

    void setMenit(int menit) {
        this->menit = menit;
    }

    int getDetik() const {
        return detik;
    }

    void setDetik(int detik) {
        this->detik = detik;
    }

    void tampilkanWaktu() const {
        std::cout << std::setw(2) << std::setfill('0') << jam << ":"
                  << std::setw(2) << std::setfill('0') << menit << ":"
                  << std::setw(2) << std::setfill('0') << detik << std::endl;
    }
};

int main() {
    Waktu waktu(13, 45, 30);
    std::cout << "Waktu saat ini: ";
    waktu.tampilkanWaktu();

    // Mengubah waktu
    waktu.setJam(14);
    waktu.setMenit(15);
    waktu.setDetik(40);

    std::cout << "Waktu setelah diubah: ";
    waktu.tampilkanWaktu();

    return 0;
}
