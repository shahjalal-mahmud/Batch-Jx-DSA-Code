class Student{
    private String name;
    private int id;
    private String homeTwon;
    private double cgpa;

    public Student(){
        name = "";
        id = 0;
        homeTwon = " ";
        cgpa = 0.0;
    }
    public Student(String name, int id, String homeTwon, double cgpa){
        this.name = name;
        this.id = id;
        this.homeTwon = homeTwon;
        this.cgpa = cgpa;

    }

    public String getName(){
        return name;
    }
    public void setName(String name){
        this.name = name;
    }
    public int getId(){
        return id;
    }
    public void setId(int id){
        this.id = id;
    }
    public String getHomeTown(){
        return homeTwon;
    }
    public void setHomeTown(String homeTwon){
        this.homeTwon = homeTwon;
    }
    public double getCgpa(){
        return cgpa;
    }
    public void setCgpa(double cgpa){
        this.cgpa = cgpa;
    }
    public String toString(){
        return "Name: "+name+" ID: "+id+" HomeTown: "+homeTwon+" CGPA: "+cgpa;
    }
}
public class StudentTester{
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();
        Student s4 = new Student("Shahriar", 1412, "Khulna", 4.00);
        
        s1.setName("Jhon");
        s2.setName("Mike");
        s3.setName("Carol");

        s1.setId(1539);
        s1.setCgpa(3.00);
        s1.setHomeTown("Khulna");

        System.out.println(s1);
        System.out.println(s2);
        System.out.println(s3);

        System.out.println(s4);

        // System.out.println("\nName: " + s1.getName() + "ID: " + s1.getId() + "CGPA: " + s1.getCgpa() + "HomeTown: " + s1.getHomeTown());
    }
}