#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{   while(1) {
        int randomnumber,number;
        cout<<"Enter the number :";
        cin>>number;
        randomnumber=rand()%2+1;
        if (randomnumber==number)
            cout<<"\athe win"<<endl;
        else
            cout<<"the loss"<<endl;
        cout<<"the random number:"<<randomnumber<<endl<<endl;
    }
}
