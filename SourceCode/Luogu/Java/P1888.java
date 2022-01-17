package luogu;

import java.util.Arrays;
import java.util.Scanner;

public class P1888 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] a = new int[3];
        a[0] = scanner.nextInt();
        a[1] = scanner.nextInt();
        a[2] = scanner.nextInt();

        Arrays.sort(a);

        for (int i = a[0]; i >= 0; i--){
            if (a[0]%i == 0 && a[2]%i == 0){
                a[0] /= i;
                a[2] /= i;
                break;
            }
        }

        System.out.println(a[0] + "/" + a[2]);
    }
}