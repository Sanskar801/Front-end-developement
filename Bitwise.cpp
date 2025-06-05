#include <iostream>
#include <cmath>
using namespace std;

int integerToBinary(int n)
{
    unsigned int num = static_cast<unsigned int>(n);
    int ans = 0, i = 0;

    if (n < 0)
    {
        num = abs(n);
        num = ~num;
        num += 1;
        i = sizeof(int) * 8 - 1;
    }

    while (num != 0)
    {
        int bit = num & 1;
        ans = (bit << i) | ans;
        num = num >> 1;
        i++;
    }

    cout << "Binary Representation: " << ans << endl;
    return ans;
}


int main() {
    int n = -8;
    int bits = sizeof(int) * 8;

    for (int i = bits - 1; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }
    cout << endl;

    return 0;
}


