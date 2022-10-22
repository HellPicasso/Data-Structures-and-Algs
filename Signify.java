class Signify
{
public static void main(String args[])
{
try
{
int []a=new int [5];
a[5]=12;
System.out.println("a[5]"+a[5]);
System.out.println("End of try block");
}
catch(ArrayIndexOutOfBoundsException e)
{
System.out.println("Trying to access value beyond given range!!");
}
finally
{
System.out.println("Practicing Exception handling problems");
}
System.out.println("Out of try-catch and finally block");
}
}
