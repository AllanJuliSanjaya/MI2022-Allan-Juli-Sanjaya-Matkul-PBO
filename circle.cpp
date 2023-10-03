#include <iostream>
#include <cmath>

class Lingkaran {
private:
    double jariJari;

public:
    Lingkaran(double jariJari) : jariJari(jariJari) {}

    double hitungLuas() {
        return M_PI * pow(jariJari, 2);
    }

    double hitungKeliling() {
        return 2 * M_PI * jariJari;
    }

    double getJariJari() {
        return jariJari;
    }

    void setJariJari(double jariJari) {
        this->jariJari = jariJari;
    }
};

int main() {
    Lingkaran lingkaran(7.0);
    std::cout << "Jari-jari lingkaran: " << lingkaran.getJariJari() << std::endl;
    std::cout << "Luas lingkaran: " << lingkaran.hitungLuas() << std::endl;
    std::cout << "Keliling lingkaran: " << lingkaran.hitungKeliling() << std::endl;

    return 0;
}
