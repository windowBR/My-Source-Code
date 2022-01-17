package luogu;

import java.util.Scanner;

public class P1421 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float a = scanner.nextFloat();
        float b = scanner.nextFloat();
        float c = a + b/10;
        int count = 0;
        for (;;){
            c -= 1.9;
            if (c <= 0){
                break;
            }
            count++;
        }
        System.out.println(count);
    }
}
