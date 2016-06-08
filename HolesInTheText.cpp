#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//using namespace std;
int main()
{
    int n;
     cin >> n;
    string *str=new string[n];
    int i,j,k;
    //int ar[26];
    short sum=0;
    cin.get();
    for(i=0;i<n;i++)
    
        getline(cin,str[i]);
        for(i=0;i<n;i++){
        sum=0;
        k=str[i].length();
        for(j=0;j<k;j++){
            switch(str[i][j]){
                 case 'A':
                    case 'D':
                    case 'O':
                    case 'P':
                    case 'Q':
                    case 'R':
                      sum+=1;break;
                    case 'B':
                      sum+=2; break;
                      default: break;
                    
            }
             
        }
         cout <<sum <<endl;   
    }
        
    return 0;
}
