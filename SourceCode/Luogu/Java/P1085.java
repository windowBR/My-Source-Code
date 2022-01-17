package luogu;

import java.util.Scanner;

public class P1085 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] a = new int[2][7];
        for(int i = 0;i < 7;i++) {
            for(int j = 0;j < 2;j++) {
                a[j][i] = scanner.nextInt();
            }
        }
        int max = 0;
        int maxDay = 0;
        for (int i = 0;i <7;i++){
            if (a[0][i] + a[1][i] > max){
                max = a[0][i] + a[1][i];
                maxDay = i+1;
            }
        }
        if (max > 8){
            System.out.println(maxDay);
        }else {
            System.out.println(0);
        }
    }
}
