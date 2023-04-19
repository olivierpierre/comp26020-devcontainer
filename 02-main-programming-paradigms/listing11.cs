// To compile and run on the Linux command line
// (on debian-based systems such as mint):
// sudo apt install mono-devel
// mcs listing11.cs
// mono listing11.exe

using System;

abstract class Shape {
    public Shape(int id) {
        _id = id;
    }

    public abstract void printMe();

    protected int _id;
};

class Square : Shape {
    public Square(int id, int side) : base(id) {
        _side = side;
    }

    public override void printMe() {
        Console.WriteLine ("Square id: {0}, side: {1}", _id, _side);

    }

    private int _side;
}

class Circle : Shape {
    public Circle(int id, int radius) : base(id) {
        _radius = radius;
    }

    public override void printMe() {
        Console.WriteLine ("Circle id: {0}, radius: {1}", _id, _radius);

    }

    private int _radius;
}

public class MainClass {
    public static void Main(string[] args) {
            Square mySquare = new Square(42, 10);
            Circle myCircle = new Circle(242, 12);

            mySquare.printMe();
            myCircle.printMe();
    }
}

