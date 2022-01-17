package luogu;

import java.util.Arrays;
import java.util.Scanner;

public class P5717 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] arr = new int[3];
        for (int i = 0; i < 3; i++){
            arr[i] = scanner.nextInt();
        }

        Arrays.sort(arr);

        if (arr[0] + arr[1] <= arr[2]){
            //不成三角形
            System.out.println("Not triangle");
        }else {
            if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]){
                //直角三角形
                System.out.println("Right triangle");
            }else if (arr[0] * arr[0] + arr[1] * arr[1] > arr[2] * arr[2]){
                //锐角三角形
                System.out.println("Acute triangle");
            }else if (arr[0] * arr[0] + arr[1] * arr[1] < arr[2] * arr[2]){
                //钝角三角形
                System.out.println("Obtuse triangle");
            }

            if (arr[0] == arr[1]){
                //等腰三角形
                System.out.println("Isosceles triangle");
                if (arr[1] == arr[2]){
                    //等边三角形
                    System.out.println("Equilateral triangle");
                }
            }


        }

    }
}
