package luogu;

import java.util.Arrays;
import java.util.Scanner;

public class P4414 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] a = new int[3];
        for (int i = 0; i < 3; i++){
            a[i] = scanner.nextInt();
        }
        String c = scanner.nextLine();
        String b = scanner.nextLine();
        Arrays.sort(a);

        if (b.equals("ABC")){
            System.out.println(a[0] + " " + a[1] + " " + a[2]);
        }
        if (b.equals("ACB")){
            System.out.println(a[0] + " " + a[2] + " " + a[1]);
        }
        if (b.equals("BAC")){
            System.out.println(a[1] + " " + a[0] + " " + a[2]);
        }
        if (b.equals("BCA")){
            System.out.println(a[1] + " " + a[2] + " " + a[0]);
        }
        if (b.equals("CBA")){
            System.out.println(a[2] + " " + a[1] + " " + a[0]);
        }
        if (b.equals("CAB")){
            System.out.println(a[2] + " " + a[0] + " " + a[1]);
        }


    }
}
