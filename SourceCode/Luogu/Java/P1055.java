package luogu;

import java.util.Scanner;

public class P1055 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        char[] chars = str.toCharArray();
        int[] arr = new int[10];
        int a = 0;

        //转字符组、转数组
        for (int i = 0; i < 13; i++){
            str = chars[i]+"";
            if (i == 1 || i == 5 || i == 11){
                continue;
            }
            if (str.equals("X")){
                arr[a] = 10;
            }else {
                //字符串转整形
                arr[a] = Integer.parseInt(str);
            }

            a++;
        }


        //判断
        int num = 0;
        for (int i = 0; i < 9; i++){
            num += arr[i] * (i+1);
        }
        if (arr[9] == num%11){
            System.out.println("Right");
        }else {
            for (int i = 0; i < 12; i++){
                System.out.print(chars[i]);
            }
            if (num % 11 == 10){
                System.out.println("X");
            }else {
                System.out.println(num % 11);
            }
        }
    }
}
