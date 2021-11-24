/**/
#include <time.h>
unsigned int start_time = clock();
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const short n = 6;


    short matr[n][n];
    int minproizv = 100000;
    int max = 0;


    for (short i = 0; i < n; i++)
    {
        for (short j = 0; j < n; j++)
        {
            matr[i][j] = rand() % n + 1;            //Изменение случ. чисел с (от 0 до 6) в (от 1 до 6)

            if (matr[i][j] > max)
            {
                max = matr[i][j];
            }
            
            cout << setw(3) << matr[i][j];
        }

        int proizv = 1;

        for (int j = 0; j < n; j++)
        {
            proizv *= matr[i][j];
        }
        if (proizv < minproizv)
        {
            minproizv = proizv;
        }
        cout << endl;
    }

    cout << endl << "max = " << max << endl << endl;
    cout << endl << "minproizv = " << minproizv << endl;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        bool a = false;
        for (int j = 0; j < n; j++)
        {
            if (matr[i][j] == 6)
            {
                a = true;
            }
            if (a == true)
            {
                sum += matr[i][j];
            }
        }
        cout << "summa = " << sum << endl;
    }
    unsigned int end_time = clock();
    unsigned int seartch_time = end_time - start_time;
    return seartch_time;
}
/**/