package luogu;

import java.util.Arrays;
import java.util.Scanner;

public class P5715 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] a = new int[3];
        for(int i = 0;i < 3; i++){
            a[i] = scanner.nextInt();
        }
        Arrays.sort(a);
        for (int i = 0; i < 3;i++){
            System.out.print(a[i] + " ");
        }

    }
}
