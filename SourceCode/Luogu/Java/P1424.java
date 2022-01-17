package luogu;

import java.util.Scanner;

public class P1424 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int day = scanner.nextInt();
        int numDay = scanner.nextInt();


        int swinDay = (numDay / 7) * 5;

        for (int i = 0;i < numDay % 7;i++){

            if (day == 6 || day == 7){
                day++;
                continue;
            }
            day ++;
            swinDay++;

            if (day > 7){
                day -= 7;
            }

        }
        System.out.println(swinDay * 250);

    }
}
