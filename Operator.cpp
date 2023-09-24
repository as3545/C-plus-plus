//Code

#include<iostream>
using namespace std;
int op(int a , int b, int c)
{
if(c==1)
{
return a + b;
}
else if(c==2)
{
return a - b;
}
else if(c==3)
{
return a * b;
}
else if(c==4)
{
return a / b;
}
}
int main()
{
int x, y, z;
cin>>x>>y>>z;
cout<<op(x,y,z);
    return 0;
}

/*

15 20 2
-5
*/
