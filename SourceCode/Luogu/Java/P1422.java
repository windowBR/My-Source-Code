package luogu;

import java.text.DecimalFormat;
import java.util.Scanner;

public class P1422 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double elec = scanner.nextDouble();
        double money;
        if (elec >= 401){
            money = 150*0.4463 + 250*0.4663 + (elec-400)*0.5663;
        }else if (elec >= 151){
            money = 150*0.4463 + (elec-150)*0.4663;
        }else {
            money = elec * 0.4463;
        }
        DecimalFormat df = new DecimalFormat("0.0");
        System.out.println(df.format(money));

    }
}
