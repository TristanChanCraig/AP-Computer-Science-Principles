import java.util.Scanner;

public class MSOE_2015_7 {
    public static int[] helper(int start, int[] arr, int target) {
        if (start >= 3) return arr;
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            cnt += arr[i];
        }
        if (cnt == target) return arr;
        for (int i = 0; i*(i+1)/(double)2 <= target; i++) {
            if ((int)(i*(i+1)/(double)2) % 1 == 0) {
                int[] temp = arr;
                temp[start] = i*(i+1)/2;
                return helper(start+1, temp, target);
            }
        }
        return arr;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number to be partitioned: ");
        int num = input.nextInt();
        input.close();

        System.out.print("The array is: ");
        int[] arr = new int[3];
        boolean found = false;
        int i = num;
        int f = 1;
        while (found) {
            for (int j = 0; j < 3; j++) {
                while (i >= 0) {
                    double t = i*(i+1)/(double)2;
                    if (t % 1 == 0 && t < num) {
                        arr[j] = (int) t;
                        break;
                    }
                    i--;
                }
            }
            int c = 0;
            for (int n : arr) c += n;
            if (c != num) {
                arr = new int[3];
                i = num - f;
                f++;
            } else found = true;
        }
        for (int n : arr) System.out.print(n + " ");
    }
}