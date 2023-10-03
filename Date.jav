public class Tanggal {
    private int hari;
    private int bulan;
    private int tahun;

    public Tanggal(int hari, int bulan, int tahun) {
        this.hari = hari;
        this.bulan = bulan;
        this.tahun = tahun;
    }

    public int getHari() {
        return hari;
    }

    public void setHari(int hari) {
        this.hari = hari;
    }

    public int getBulan() {
        return bulan;
    }

    public void setBulan(int bulan) {
        this.bulan = bulan;
    }

    public int getTahun() {
        return tahun;
    }

    public void setTahun(int tahun) {
        this.tahun = tahun;
    }

    @Override
    public String toString() {
        return String.format("%02d/%02d/%04d", hari, bulan, tahun);
    }

    public static void main(String[] args) {
        Tanggal tanggal = new Tanggal(1, 10, 2023);
        System.out.println("Tanggal saat ini: " + tanggal.toString());

        // Mengubah tanggal
        tanggal.setHari(15);
        tanggal.setBulan(10);
        tanggal.setTahun(2023);

        System.out.println("Tanggal setelah diubah: " + tanggal.toString());
    }
}
