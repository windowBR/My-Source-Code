package luogu;

import java.util.Arrays;
import java.util.Scanner;

public class P1909 {
    public static void main(String[] args) {
        //输入数据
        Scanner scanner = new Scanner(System.in);
        int penceil = scanner.nextInt();
        int[] pack01 = new  int[2];
        int[] pack02 = new  int[2];
        int[] pack03 = new  int[2];
        for(int i=0;i<pack01.length;i++){
            pack01[i]=scanner.nextInt();
        }
        for(int i=0;i<pack02.length;i++){
            pack02[i]=scanner.nextInt();
        }
        for(int i=0;i<pack03.length;i++){
            pack03[i]=scanner.nextInt();
        }

        //计算购买数量
        int num01 = penceil % pack01[0] == 0 ? penceil / pack01[0] : penceil / pack01[0] +1;
        int num02 = penceil % pack02[0] == 0 ? penceil / pack02[0] : penceil / pack02[0] +1;
        int num03 = penceil % pack03[0] == 0 ? penceil / pack03[0] : penceil / pack03[0] +1;
//        System.out.println("数量");
//        System.out.println(num01);
//        System.out.println(num02);
//        System.out.println(num03);

        //计算各方案价格
        int[] money = new int[3];
        money[0] = num01 * pack01[1];
        money[1] = num02 * pack02[1];
        money[2] = num03 * pack03[1];
//        System.out.println(pack01);


        //价格排序，输出
        Arrays.sort(money);
        System.out.println(money[0]);

    }
}
