public class solve2 {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;
        int c = 0;
        int arr[] = new int[a];
        try {
            arr[b] = 50;
            int result = a / c;
        } catch (Exception e) {
            System.out.println("Error: " + e);
        }
        finally {
            System.out.println("Finally block");
        }
    }
}
