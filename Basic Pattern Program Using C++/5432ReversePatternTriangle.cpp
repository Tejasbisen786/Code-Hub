#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter any Number"<<endl;
   cin>>num;
   int row=1;
    int count=1;
   while(row<=num)
   {
       int col=1;
      
       while(col<=row)
       {
           cout<<num-col+1<<" ";
        //   count=count+1;
          col=col+1;
           
       }
       cout<<endl;
       row=row+1;
   }

    
    
    
}