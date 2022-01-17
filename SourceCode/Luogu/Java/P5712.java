package luogu;

import java.util.Scanner;

public class P5712 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int apple = scanner.nextInt();
        if (apple > 1){
            System.out.println("Today, I ate "+apple+" apples.");
        }else {
            System.out.println("Today, I ate "+apple+" apple.");
        }

    }
}
