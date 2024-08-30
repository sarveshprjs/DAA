#include<iostream>
#include<map>
using namespace std;
class knpsck{
    public:
    float val,wt,ratio,n,x,profit,capacity,wtsum,y,diff,fraction;
    int values[10];
    map<int,int>mps;
     map<int,int>mps2;

    void letsgo()
    {
        cout<<"enter the number of elements";
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cout<<"enter the value";
            cin>>val;
            cout<<"Enter the weight";
            cin>>wt;
            ratio=wt/val;
            values[i]=ratio;
            mps[ratio]=wt;
            mps2[ratio]=val;
        }
    }
    void show()
    {profit=0;
    wtsum=0;
    cout<<"enter the capacity";
    cin>>capacity;
        for(int i=n;i>=1;i--)
        {
            x=values[i];
            // cout<<mps[i];
            wtsum=wtsum+mps[i];
            if(wtsum<capacity)
            {
                profit=profit+mps2[i];
            }
            else if(wtsum>capacity)
            { 
              diff=wtsum-capacity;
              fraction;
              fraction=diff/mps[i];
              cout<<fraction;
            //   y=fraction*mps2[i];
            //   profit=profit+y;
}
        }
    
        // cout<<profit;
    }

};
int main(){
    knpsck obj;
    obj.letsgo();
    obj.show();
    return 0;
}
