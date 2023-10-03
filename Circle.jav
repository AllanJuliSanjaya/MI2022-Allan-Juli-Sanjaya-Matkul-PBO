public class Lingkaran {
    private double jarijari;

    public Lingkaran(double jariJari) {
        this.jariJari = jariJari;
    }

    public double hitungLuas() {
        return Math.PI * Math.pow(jariJari, 2);
    }

    public double hitungKeliling() {
        return 2 * Math.PI * jariJari;
    }

    public double getJariJari() {
        return jariJari;
    }

    public void setJariJari(double jariJari) {
        this.jariJari = jariJari;
    }

    public static void main(String[] args) {
        Lingkaran lingkaran = new Lingkaran(7.0);
        System.out.println("Jari-jari lingkaran: " + lingkaran.getJariJari());
        System.out.println("Luas lingkaran: " + lingkaran.hitungLuas());
        System.out.println("Keliling lingkaran: " + lingkaran.hitungKeliling());
    }
}
