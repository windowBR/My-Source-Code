package luogu;

import java.util.Scanner;

public class P5705 {
    public static void main(String[] args) {

        Scanner a = new Scanner(System.in);
        String b = a.nextLine();
        char[] chars = b.toCharArray();
        String c = "";
//        System.out.println(chars.length);
//        System.out.println(chars[1]);
        for(int i = chars.length - 1;i >= 0;i-- ){
            c += chars[i];
        }
        System.out.println(c);

    }
}
