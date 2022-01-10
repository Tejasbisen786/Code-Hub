#include<iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter any Number"<<endl;
   cin>>num;
   int row=1;
   while(row<=num)
   {
       int col=1;
       while(col<=num)
       {
           cout<<"*";
           col=col+1;
           
       }
       cout<<endl;
       row=row+1;
   }

    
    
    
}