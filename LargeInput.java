import java.util.StringTokenizer;
import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
class LargeInput{
  public static void main(String args[]){
       int a,b,count=0;
       BufferedReader buffer=new BufferedReader(new InputStreamReader(System.in));
      try{ 
      
      String str=buffer.readLine();
      String []split_=str.split(" ");
      a=Integer.parseInt(split_[0]);
      b=Integer.parseInt(split_[1]);
    // StringTokenizer st=new StringTokenizer(buffer,"\n");
     while( (str=buffer.readLine())!=null){
         
           if(Integer.parseInt(str)%b==0)
           count++;
     }
        //System.out.println(st.nextElement());
        
           System.out.println("\n"+count);
           }catch (IOException e){
           e.printStackTrace();}
           finally {
              try{
                 if(buffer!=null)buffer.close();
                 
              }catch (IOException ex){
                ex.printStackTrace();
              }
           }
      System.exit(0);
   }
}
