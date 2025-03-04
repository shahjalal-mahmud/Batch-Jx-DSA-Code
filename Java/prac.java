public class prac {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;
        try {
            int result = a / b;
        } catch (Exception e) {
            System.out.println("Error: " + e);
            // System.err.println("Cannot Divided by zero");
        }
        // System.out.println("Result: "+result);
    }
}
