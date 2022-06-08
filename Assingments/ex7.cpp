#include <iostream>
using namespace std;
int lolipop (int);

int main()
{
 int x,y;
    cout<< " Plese enter the number you want to find its factorial\n ";
    cin>>x;
 y= lolipop (x);
 cout<<y;
 	
}

int lolipop (int v)
{
 if (v==1)
 {
 return 1;
 }
 else
 {
 	return v* lolipop (v-1);
 }
}
