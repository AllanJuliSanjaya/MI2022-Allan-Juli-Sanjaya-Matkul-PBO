#include <iostream>

class Titik {
private:
    double x;
    double y;

public:
    Titik(double x, double y) : x(x), y(y) {}

    double getX() const {
        return x;
    }

    void setX(double x) {
        this->x = x;
    }

    double getY() const {
        return y;
    }

    void setY(double y) {
        this->y = y;
    }

    void tampilkanKoordinat() const {
        std::cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Titik titik(3.5, 5.2);
    std::cout << "Koordinat titik: ";
    titik.tampilkanKoordinat();
    std::cout << std::endl;

    // Mengubah koordinat titik
    titik.setX(7.1);
    titik.setY(9.8);

    std::cout << "Koordinat titik setelah diubah: ";
    titik.tampilkanKoordinat();
    std::cout << std::endl;

    return 0;
}
