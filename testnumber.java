import java.io.*;
class outrange extends Exception
{
outrange ()
{
System.out.println("the number is   lessthan 10 and not greater than 50");
}
}

class testnumber
{
public static void main (String []a)
{
int number=Integer.parseInt(a[0]);
try { if(number>=10 && number<=50)
{System.out.println("the sq.of number is :"+number*number);
}
else
{throw new outrange();
}
}
catch (Exception e)
{ System.out.println (e);}
}
}
