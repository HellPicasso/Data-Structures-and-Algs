public class numformat {
    public static void main(String args[]) {
        try {
            int a = Integer.parseInt("1a");
            System.out.println(a);
        } catch (NumberFormatException nfe) {
            System.out.println("NumberFormat Exception: invalid input string");
        }
    }
}
