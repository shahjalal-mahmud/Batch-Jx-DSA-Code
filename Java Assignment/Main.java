
public class Main {

    public static void main(String[] args) {
        Quadrilateral shape1 = new Quadrilateral();
        Object shape2 = new Kite();
        Quadrilateral shape3 = new Trapezium();
        Object shape4 = new Parallelogram();
        Parallelogram shape5 = new Rhombus();
        Quadrilateral shape6 = new Rectangle();
        Parallelogram shape7 = new Square();
        Rectangle shape8 = new Square();

        // System.out.println(shape1.name);
        // System.out.println(shape2.name); // CT
        // System.out.println(shape3.name);
        // System.out.println(shape4.name); // CT
        // System.out.println(shape5.name);

        // shape1.method1();
        // shape1.method2();
        // shape1.method3();

        // ((Quadrilateral) shape4).method1();
        // ((Square) shape7).method3();
        // ((Square) shape4).method2(); //RE
    }
}
