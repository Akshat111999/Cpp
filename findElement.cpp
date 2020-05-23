#include<iostream>

using namespace std;


int main()
{
    int f,found =0,pos;
    int all[5]={12,23,23,15,45};
    int length =sizeof(all)/sizeof(all[0]);

    cout<<"enter element you want to find: ";
    cin>>f;
    for(int i=0; i<length; i++)
    {
        if (f==all[i])
        {
            found++;
            pos = i+1;
        }      

    }
        if(found==0)
        {
            cout<<f<<" not found";
            
        }
        else
        {
            cout<<f<<" is present "<<"in array \n";
            
        }
          
}
   