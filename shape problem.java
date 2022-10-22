abstract class Shape
{
 abstract void CircleArea(int r);
 abstract void RectangleArea(int l, int w);
 abstract void SquareArea(int s);
}
class Area extends Shape
{
 void CircleArea(int r)
 {
  double cirarea= 3.14*r*r;
  System.out.println("Area of the circle is="+cirarea);
 }
 void RectangleArea(int l, int w)
 {
  double recarea= l*w;
  System.out.println("Area of the Rectangle is="+recarea);
 }
 void SquareArea(int s)
 {
  double sqarea= s*s;
  System.out.println("Area of the Square is="+sqarea);
 }
}
class Lab6_2
{
 public static void main(String args[])
 {
  Area a= new Area();
  a.CircleArea(3);
  a.RectangleArea(4,5);
  a.SquareArea(4);
 }
}

