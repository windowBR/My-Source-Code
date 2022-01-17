package luogu;

import java.util.Scanner;

public class P5710 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        boolean x = a%2 == 0;
        boolean y = a>4 && a<=12;

        if (x && y){
            System.out.print(1+" ");
        }else {
            System.out.print(0+" ");
        }

        if (x || y){
            System.out.print(1+" ");
        }else {
            System.out.print(0+" ");
        }

        if (x ^ y){
            System.out.print(1+" ");
        }else {
            System.out.print(0+" ");
        }

        if (!(x || y)){
            System.out.print(1);
        }else {
            System.out.print(0);
        }
    }
}
