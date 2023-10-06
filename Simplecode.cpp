#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,mul,die;
    int ope;
    cout<<"enter the value of A:";
    cin>>a;
    cout<<"enter the value of B:";
    cin>>b;
    cout<<"the operations are:"<<endl;
    cout<<"1.add"<<endl<<"2.sub"<<endl<<"3.mul"<<endl<<"4.div"<<endl;
    cout<<"enter the operation number:";
    cin>>ope;
    
    
    switch(ope)
    {
        case 1:
                sum=a+b;
                cout<<"sum="<<sum;
                break;
        case 2:
                sub=a-b;
                cout<<"sub="<<sub;
                break;
        case 3:
                mul=a*b;
                cout<<"mul="<<mul;
                break;
        case 4:
                die=a/b;
                cout<<"die="<<die;
                break;
                
        default:
                cout<<"enter the valid operator";
                
    }
    
}
