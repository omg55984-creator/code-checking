import java .util.*;
class tt
{public static void main()
   
   {

   Scanner sc=new Scanner(System.in);
   int ch; 
   double r,h;
   System.out.println("enter 1 for volume of sphere\n enter 2 for volume of cylinder \n enter 3 for volume of cone");
ch=sc.nextInt();
switch(ch)
{
   case 1:
      System.out.println("enteer a radius of sphere");
      r=sc.nextDouble();
      System.out.println("volume of shere="+4/3*3.14*Math.pow(r,3));
      break;
      case 2:
     System.out.println("enter a radius and height");
r=sc.nextDouble();
h=sc.nextDouble();
 System.out.println("volume of cylinder="+3.14*Math.pow(r,2)*h);
 break;
case 3:
   System.out.println("enter a radius and a height of cone");
   r=sc.nextDouble();
h=sc.nextDouble();
System.out.println("volume of cone="+3.14*Math.pow(r,2)*h/3);
}

}
}

