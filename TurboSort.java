import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;

class TurboSort{
   public static void main(String []args){
     final int MAX=1000001;
       BufferedReader buffer=new BufferedReader(new InputStreamReader(System.in));
       try {
          String []str= buffer.readLine().split("\n");
          //String str2;
          int a,b=Integer.parseInt(str[0]);
          int []arr=new int[MAX];
          Arrays.fill(arr,0);
          while(b-- >0){
               a=Integer.parseInt(buffer.readLine());
               arr[a]++;
          }
          System.out.println();
          for(b=0;b<MAX;b++){
             a=arr[b];
             while(a-- >0)
                 System.out.println(b);
          
          }
          
       }catch (IOException e){
          e.printStackTrace();
       }
   }
}
