import java.io.*;
class noteligibleforvoting extends Exception
{
noteligibleforvoting()
{
System.out.println("age less than 18 not eligible for voting");
}
}
class votingsystem
{
public static void main (String []a)
{
int age=Integer.parseInt(a[0]);
try { if(age>=18)
{System.out.println("eligible for voting");
}
else
{throw new noteligibleforvoting();
}
}
catch (Exception e)
{ System.out.println (e);}
}
}
