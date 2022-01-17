package luogu;

import java.text.DecimalFormat;
import java.util.Scanner;

public class P5708 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);                   //默认空格为分隔符，可直接取
        double d1 = scanner.nextDouble();
        double d2 = scanner.nextDouble();
        double d3 = scanner.nextDouble();
        double p = (d1 + d2 + d3)/2;
        double s = Math.sqrt(p*(p-d1)*(p-d2)*(p-d3));
        DecimalFormat df = new DecimalFormat("0.0");        //保留一位小数
        System.out.println(df.format(s));
    }
}
