using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OverLoading
{
    class GFG
    {
        public int add(int a, int b)
        {
            int sum = a + b;
            return sum;
        }
        public int add(int a, int b, int c)
        {
            int sum = a + b + c;
            return sum;
        }
        static void Main(string[] args)
        {
            GFG ob = new GFG();

            int sum1 = ob.add(1, 2);
            int sum2 = ob.add(1, 2, 3);

            Console.WriteLine("The sum of the two " + "Integer value " + sum1);
            Console.WriteLine(sum2);

            Console.ReadKey();
        }
    }
}
