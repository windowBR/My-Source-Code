package luogu;

import java.util.Scanner;

public class P3954 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double A = scanner.nextFloat();
        double B = scanner.nextFloat();
        double C = scanner.nextFloat();
        double sum = A*0.2 + B*0.3 + C*0.5;
        int sum2 = (int)sum;

        System.out.println(sum2);
    }
}
