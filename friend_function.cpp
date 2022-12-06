#include<iostream>
using namespace std;
class demo
{
    private:
             int a,b;
    public:
           void getdata();
           friend int sum(demo);
};
void demo::getdata()
{
   cout<<"\n ENTER THE FIRST NUMBER:";
   cin>>a;
   cout<<"\n ENTER THE SECOND NUMBER:";
   cin>>b;
}
int sum(demo aa)
{
    return(aa.a+aa.b);
}
int main()
{
    demo aa;
    aa.getdata();
    cout<<"\n ADDITION:"<<sum(aa);
    return 0;
}

