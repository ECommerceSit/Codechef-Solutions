import java.lang.*;

class check{
   public static void main(String [] args){
   
        String str=new String("i was there for some time");
       String str2=str;
       str2=str2.replace(str2.charAt(4),'p');
       System.out.println(str);
       System.out.println(str2);
       System.exit(0);
   }
}
