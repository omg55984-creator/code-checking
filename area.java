import java.util.Scanner;

class circle {
    int radius;
    double area;
    circle(int radius){
        this.radius=radius;
    }
    void Carea(){
        area= Math.PI *radius*radius;
        System.out.println("the area of circle:" + area);
    }
}    
class rectangle{
    int length ,breath,area;
    rectangle(int length,int breath){
        this.length=length;
        this.breath=breath;
    }
    void Rarea(){
        area=length*breath;
        System.out.println("the area of rectangle: "+area);
    }
}
public class area{
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        System.out.println("enter the radius of circle");
        int radius=sc.nextInt();
         System.out.println("enter the length  of rectangle");
        int length=sc.nextInt();
        System.out.println("enter the breath  of rectangle");
        int breath=sc.nextInt();
        circle c=new circle(radius);
        rectangle r=new rectangle(length ,breath);
        c.Carea();
        r.Rarea();
    }
}