package luogu;

import java.util.Scanner;

public class P5709 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int t = scanner.nextInt();
        int s = scanner.nextInt();
        a:for (;;){
            if (t == 0 || m == 0 || s == 0){
                System.out.println(0);
                break;
            }
            for (int i = s;i > 0;i -= t){
                m--;
                if (m == 0){
                    System.out.println(0);
                    break a;
                }
            }
            System.out.println(m);
            break;
        }
    }
}
