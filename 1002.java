import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        String string = new String();
        string  = scanner.nextLine();
        String[] conversion = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
        long sum = 0;
        for (int i = 0; i < string.length(); ++ i) {
            sum += string.charAt(i)-'0';
        }
        String temp = ""+sum;
        for (int i = 0; i < temp.length()-1; ++ i) {
            System.out.printf("%s ", conversion[temp.charAt(i)-'0']);
        }
        System.out.print(conversion[temp.charAt(temp.length()-1)-'0']);
        scanner.close();
    }
}
