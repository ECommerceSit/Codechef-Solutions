import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Ambiguous{
   public static void main(String []args){
   
        BufferedReader buf=new BufferedReader(new InputStreamReader(System.in));
        int a,flag,b;
        try{
        String []str=buf.readLine().split(" ");
       // String []str2;
        a=Integer.parseInt(str[0]);
        System.out.println();
        while(a>0){
             str=buf.readLine().split(" ");
             
             flag=0;
             for(int i=0;i<a;i++){
             b=Integer.parseInt(str[i]);
                 if(Integer.parseInt(str[b-1])==i+1)
                 flag++;
                 else break;
             }if(flag==a) System.out.println("ambiguous");
             else System.out.println("not ambiguous");
             str=buf.readLine().split(" ");
             a=Integer.parseInt(str[0]);
        }
        System.exit(0);
        }catch (IOException e){
        
              e.printStackTrace();
        }
        
   }
}
