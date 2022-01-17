package luogu;

import java.util.Arrays;
import java.util.Scanner;

public class P1046 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] a = new int[10];

        for (int i = 0; i < 10; i++){
            a[i] = scanner.nextInt();
        }

        int b = scanner.nextInt();

        Arrays.sort(a);

        for (int i = a.length - 1; i >= 0; i--){
            if (b + 30 >= a[i]){
                System.out.println(i+1);
                break;
            }
            if (i == 0){
                System.out.println(0);
                break;
            }
        }

    }
}
