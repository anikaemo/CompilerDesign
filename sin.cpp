#include<iostream>
#include<cstring>
using namespace std;

int main()
{

    char a[100], b[100];
    int j = 0; len, k;
    cin.getline(a, 100, '~');
    len = stren(a);

    for(k = 0; k <= len - 1; k++)
    {
        if(a[k] == '/' && a[k+1] == '/')
        {
            k += 2;
            while (k <= len -1)
            {
                if(a[k] == '/n')
                    break;
                b[j++] = a[k++];
            }
        }
    }
    b[j] = '\0';
    cout << "/nComment: " << b << endl;
    return 0;
}
