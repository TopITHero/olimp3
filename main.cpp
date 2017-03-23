#include <iostream>
using namespace std;
# include <math.h>
 

int primeFactors(int n)
{
    int k = 0;
    while (n%2 == 0)
    {
        
        n = n/2;
        k++;
    }
 

    for (int i = 3; i <= sqrt(n); i = i+2)
    {

        while (n%i == 0)
        {
            k++;
            n = n/i;
        }
    }
 

    if (n > 2){
        k++;
    }
    return k;
}
int main(){
    int count = 0;
	int n1,n2;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {   
        if(primeFactors(i)==3){
        count++;
        }
    }
	cout << count << endl;
	return 0;
}