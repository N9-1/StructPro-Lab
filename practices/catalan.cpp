#include <iostream>
using namespace std;
 
// A recursive function to find nth catalan number
unsigned long int catalan(unsigned int n)
{
    // Base case
    if (n <= 1)
        return 1;
 	
 	int j = n;
    // catalan(n) is sum of
    // catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i = 0; i < n; i++) {
        res += catalan(i) * catalan(n - i - 1);
        cout << j << ": " << i << ": " << res << "\n";
    }
        
 
    return res;
}
 
// Driver code
int main()
{
    cout << catalan(5) << " ";
    return 0;
}
