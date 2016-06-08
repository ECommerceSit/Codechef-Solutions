import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class TheLeadGame{
   public  static void main(String [] args){
        BufferedReader buffer=new BufferedReader(new InputStreamReader(System.in));
        int a,b,c,diff=0,winner=1,x;
        try{
        String [] split_=buffer.readLine().split(" ");
        a=Integer.parseInt(split_[0]);
        while(a>0){
            split_=buffer.readLine().split(" ");
            b=Integer.parseInt(split_[0]);
            c=Integer.parseInt(split_[1]);
            if((x=b-c)>0){
                if(diff < x){
                    diff=x;
                    winner=1;
                    
                }else{
                    if(diff< -1*x){
                       diff=-1*x;
                       winner=2;
                    }
                }
            }
           
        }
         System.out.println(winner+" "+diff);
         }catch(IOException e){
             e.printStackTrace();
          }
   }
}
