import java.util.Scanner;
public class Main {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        String s1 = scanner.next();
        char[] c1 = s1.toCharArray();
        int sum = 0;
        for(int i=0;i<c1.length;i++) {
            int n = c1[i] - 48;
            sum += n;
        }
        String s2 = String.valueOf(sum);
        char[] c2 = s2.toCharArray();
        for(int j=0;j<c2.length;j++) {
            if (c2[j] == '1') {
                System.out.print("yi");
            }
            else if (c2[j] == '2') {
                System.out.print("er");
            }
            else if (c2[j] == '3'){
                System.out.print("san");
            }
            else if (c2[j] == '4') {
                System.out.print("si");
            }
            else if (c2[j] == '5') {
                System.out.print("wu");
            }
            else if (c2[j] == '6'){
                System.out.print("liu");
            }
            else if (c2[j] == '7') {
                System.out.print("qi");
            }
            else if (c2[j] == '8') {
                System.out.print("ba");
            }
            else if(c2[j] == '9') {
                System.out.print("jiu");
            }
            else{
                System.out.print("ling");
            }
            if(j < c2.length - 1){
                System.out.print(' ');
            }
        }
    }
}
