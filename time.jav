public class Waktu {
    private int jam;
    private int menit;
    private int detik;

    public Waktu(int jam, int menit, int detik) {
        this.jam = jam;
        this.menit = menit;
        this.detik = detik;
    }

    public int getJam() {
        return jam;
    }

    public void setJam(int jam) {
        this.jam = jam;
    }

    public int getMenit() {
        return menit;
    }

    public void setMenit(int menit) {
        this.menit = menit;
    }

    public int getDetik() {
        return detik;
    }

    public void setDetik(int detik) {
        this.detik = detik;
    }

    @Override
    public String toString() {
        return String.format("%02d:%02d:%02d", jam, menit, detik);
    }

    public static void main(String[] args) {
        Waktu waktu = new Waktu(13, 45, 30);
        System.out.println("Waktu saat ini: " + waktu.toString());

        // Mengubah waktu
        waktu.setJam(14);
        waktu.setMenit(15);
        waktu.setDetik(40);

        System.out.println("Waktu setelah diubah: " + waktu.toString());
    }
}
