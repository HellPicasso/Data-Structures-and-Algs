public class nullpointer {
	public static void main(String[] args) {
		String s = "abcd";

		foo(null);
	}


	static void foo(String x){
		try {
			System.out.println("First character: " + x.charAt(0));
		}
		catch(NullPointerException e) {
			System.out.println("NullPointerException thrown!");
		}
	}

}
