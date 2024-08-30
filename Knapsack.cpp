#include<iostream>
#include<map>
using namespace std;
class knpsck{
    public:
    int val,wt,ratio,n,x;
    int values[10];
    map<int,int>mps;
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
        }
    }
    void show()
    {
        for(int i=0;i<n;i++)
        {
            x=values[i];
            cout<<mps[ratio];
        }
    }

};
int main(){
    knpsck obj;
    obj.letsgo();
    obj.show();
    return 0;
}