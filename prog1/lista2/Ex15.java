package prog1.lista2;

public class Ex15 {
    public static void main(String[] args) {
        int maxNumber = 100;
        int currentNumber = 1;
        int previousNumber = 1;
        while(currentNumber <= maxNumber) {
            previousNumber = currentNumber;
            currentNumber += previousNumber;
            System.out.println(currentNumber);
        }
    }
}
