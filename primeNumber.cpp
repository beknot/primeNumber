#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
int low, high, i,j, flag, count=0;
cout<<" __________________________________\n";
cout<<"| Prime numbers within given range |\n";
cout<<"|__________________________________|\n\n";
cout<<"Enter two numbers(intervals):\n";
cin>>low>>high;
        if(high<2 && low<2)
            cout<<"There exist no prime number.";
        else if(high==2 && low<=2)
            cout<<"Prime number between "<<low<<" and "<<high<<" is 2.";
        else
        {
            cout<<"Prime numbers between "<<low<<" and "<<high<<" are:\n";
            if(low%2==0)
                low++;
            for(i=low;i<=high;i=i+2)
            {
                flag=0;
                for(j=2;j<=i/2;j++)
                {
                    if((i%j)==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    cout<<""<<i<<"\t";
                    count++;
                }
            }
        cout<<"\n\nNumber of prime numbers between "<<low<<" and "<<high<<": "<<count;
        }
getch();
return 0;
}
