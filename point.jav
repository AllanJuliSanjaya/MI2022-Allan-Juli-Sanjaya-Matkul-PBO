public class Titik {
    private double x;
    private double y;

    public Titik(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }

    @Override
    public String toString() {
        return "(" + x + ", " + y + ")";
    }

    public static void main(String[] args) {
        Titik titik = new Titik(3.5, 5.2);
        System.out.println("Koordinat titik: " + titik.toString());

        // Mengubah koordinat titik
        titik.setX(7.1);
        titik.setY(9.8);

        System.out.println("Koordinat titik setelah diubah: " + titik.toString());
    }
}
