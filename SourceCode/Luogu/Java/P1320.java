package luogu;

import java.util.Scanner;

public class P1320 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String firstString = scanner.nextLine();
        int n = firstString.length();
        String a = firstString;
        for (int i = 0; i < n-1; i++){
            a = a + scanner.nextLine();
        }
        System.out.print(n + " ");
        char[] charArr = new char[n*n];
        for (int i = 0; i < n*n; i++){
            charArr[i] = a.charAt(i);
        }

        if (charArr[0] == '1'){
            System.out.print( 0 + " ");
        }
        int count = 1;
        for (int i = 1; i < charArr.length; i++){
            if (charArr[i-1] == charArr[i]){
                 count++;
            }else {
                System.out.print(count + " ");
                count = 1;
            }
        }
        System.out.println(count + " ");

    }
}
