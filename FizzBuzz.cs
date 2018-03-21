using System;

namespace FizzBuzz_CS
{
    class Program
    {
        static void Main(string[] args)
        {
            for (byte b = 1; b < 101; ++b)
            {
                if (b % 15 == 0) Console.WriteLine("FizzBuzz");
                else if (b % 3 == 0) Console.WriteLine("Fizz");
                else if (b % 5 == 0) Console.WriteLine("Buzz");
                else Console.WriteLine(b);
            }
        }
    }
}
