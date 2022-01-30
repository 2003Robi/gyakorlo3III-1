#include <iostream>

using namespace std;
int suma(int n)
{
    int s,k,d,i;
    s=1;
    for(i=2 ; i<=n ; i++)
    if(n%i==0){
        k=0;
        for(d=2 ; d<=i/2 ; d++)
            if(i%d==0)
            k++;
        if(k!=0)
            s=s+i;
    }
    return s;
}
int main()
{
    cout << suma(12) << endl;
    return 0;
}
