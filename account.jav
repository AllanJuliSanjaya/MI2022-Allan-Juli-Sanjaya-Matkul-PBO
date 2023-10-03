public class Akun {
    private String namaPemilik;
    private double saldo;

    public Akun(String namaPemilik, double saldoAwal) {
        this.namaPemilik = namaPemilik;
        this.saldo = saldoAwal;
    }

    public String getNamaPemilik() {
        return namaPemilik;
    }

    public void setNamaPemilik(String namaPemilik) {
        this.namaPemilik = namaPemilik;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public void deposit(double jumlah) {
        saldo += jumlah;
    }

    public void withdraw(double jumlah) {
        if (saldo >= jumlah) {
            saldo -= jumlah;
        } else {
            System.out.println("Saldo tidak mencukupi.");
        }
    }

    @Override
    public String toString() {
        return "Akun pemilik: " + namaPemilik + ", Saldo: " + saldo;
    }

    public static void main(String[] args) {
        Akun akun = new Akun("John Doe", 1000.0);
        System.out.println("Informasi akun: " + akun.toString());

        // Melakukan deposit
        akun.deposit(500.0);
        System.out.println("Setelah deposit: " + akun.toString());

        // Melakukan penarikan
        akun.withdraw(300.0);
        System.out.println("Setelah penarikan: " + akun.toString());
    }
}
