package luogu;

import java.util.Scanner;

public class P5713 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int local = n*5;
        int luogu = 11 + n*3;
        if (local < luogu){
            System.out.println("Local");
        }else {
            System.out.println("Luogu");
        }
    }
}
