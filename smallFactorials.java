import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.BufferedInputStream;
import java.io.IOException;
class smallFactorials{
     public static void main(String []args){
         int a,b,rem,c;
         final  int LIMIT=1000;
         long temp,carry;
         String[]split_;
         String str2="";
         BufferedReader buffer=new BufferedReader(new InputStreamReader(System.in));
         try{
         String str=buffer.readLine();
         a=Integer.parseInt(str);
         while(a>0){
             str=buffer.readLine();
             b=Integer.parseInt(str);
             carry=0;
             str="";
             str+=b;
             
             while(--b>1){
             str2="";
                split_=str.split(" ");
                c=split_.length;
               // System.out.print(c+"  ");
                for(int i=--c;i>=0;i--){
                   
                    temp=carry+Integer.parseInt(split_[i])*b;
                   
                    str2=temp%LIMIT+" "+str2;
                     
                    carry=temp/LIMIT;
                   // System.out.print(carry+"  "+str2+"  "+b+"  "+ Long.parseLong(split_[i])+"\n");
                }while(carry>0){
                      str2=carry%LIMIT+" "+str2;
                      carry/=LIMIT;
                }
               // System.out.println(str2);
                str=str2;
             }
             str2=str.replace(' ','\0');
             System.out.println(str2);
         }
        }catch(IOException e){
            e.printStackTrace();
        }finally {
           try{
              if(buffer!=null)buffer.close();
           }catch(IOException ex){
               ex.printStackTrace();
           }
        }
     }
}
