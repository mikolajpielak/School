using System;
using System.Collections.Generic;

namespace hornersmethod
{
    class Program
    {
        static void Main(string[] args)
        {
            int c, d;
            List<int> a = new List<int>();
            List<int> b = new List<int>();
            Console.WriteLine("(bx^n+cx^(n-1)+...+ex^1+f)/(x+a)");
            Console.WriteLine("Insert n:");
            c = Convert.ToInt32(Console.ReadLine());
            for(int i=0; i<=c; i++)
            {
                Console.Write("Insert coefficient of x^");
                Console.Write(c - i);
                Console.WriteLine();
                a.Add(Convert.ToInt32(Console.ReadLine()));
            }
            Console.WriteLine("Insert a:");
            d = Convert.ToInt32(Console.ReadLine());
            b.Add(a[0]);
            for(int i=1; i<=c; i++)
            {
                b.Add((b[i - 1]*-d)+a[i]);
            }
            Console.WriteLine("Quotient is:");
            for (int i=0; i<c; i++)
            {
                Console.Write("+(");
                Console.Write(b[i]);
                Console.Write(")x^");
                Console.Write(c - 1 - i);
            }
            Console.WriteLine();
            Console.WriteLine("Reminder is:");
            Console.WriteLine(b[c]);
        }
    }
}
