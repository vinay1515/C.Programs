import java.util.Scanner;

public class FahrenheitToCelsius {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the temperature in Fahrenheit: ");
        float fahrenheit = scanner.nextFloat();
        
        float celsius = (fahrenheit - 32) * (5.0f / 9.0f);
        
        System.out.println("Temperature in Celsius: " + celsius);
        
        scanner.close();
    }
}
