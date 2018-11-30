using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MultiInterfaces
{
    public interface IShape
    {
        double Area();
        int Sides { get; }
    }

    public interface IShapeDisplay
    {
        void Display();
    }

    public class Square : IShape, IShapeDisplay
    {
        private int InSides;
        public int SideLength;

        public int Sides
        {
            get { return InSides; }
        }

        public double Area()
        {
            return ((double)(SideLength * SideLength));
        }
        public double Circumference()
        {
            return ((double)(Sides * SideLength));
        }
        public Square()
        {
            InSides = 4;
        }

        public void Display()
        {
            Console.WriteLine("\nDisplaying Square information: \n");
            Console.WriteLine("Side Lenght: {0} \n", this.SideLength);
            Console.WriteLine("Sides: {0}\n", this.Sides);
            Console.WriteLine("Area: {0}\n", this.Area());
            Console.WriteLine("Circumference: {0}\n", this.Circumference());
        }

    }
    public class Multi
    {
        static void Main(string[] args)
        {
            Square mySquare = new MultiInterfaces.Square();
            mySquare.SideLength = 7;

            mySquare.Display();
            Console.ReadKey();
        }
    }
}
