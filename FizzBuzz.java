package fizzbuzz;

public class FizzBuzz
{
    public static void main(String[] args)
    {
        for (byte b = 1; b < 101; ++b)
        {
            if (b % 15 == 0) System.out.println("FizzBuzz");
            else if (b % 3 == 0) System.out.println("Fizz");
            else if (b % 5 == 0) System.out.println("Buzz");
            else System.out.println(b);
        }
    }
}
