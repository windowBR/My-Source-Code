package luogu;

import java.text.DecimalFormat;
import java.util.Scanner;

public class P5719 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int suma, sumb, counta, countb;
        suma = 0;
        counta = 0;
        sumb = 0;
        countb = 0;
        for (int i = 1; i <= n; i++){
            if (i % k == 0){
                suma += i;
                counta++;
            }else {
                sumb += i;
                countb++;
            }
        }
        double a = (double) suma / (double) counta;
        double b = (double) sumb / (double) countb;


        DecimalFormat df = new DecimalFormat("0.0");
        System.out.println(df.format(a) + " " + df.format(b));

    }
}
