#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'.', 'a', 'b', 'c', 'd', 'e'};
    int count = 1;
    for (int i = 1; i <= 5; i++)
    {
        if (i % 2 == 0 && i != 0)
        {
            // cout << "if block\n";

            for (int m = 0; m < 4; m++)
            {

                for (int l = 0; l <= 2; l++)
                {
                    if (count % 19 == 0 && count != 0)
                    {
                        cout << arr[0];
                        // cout << count;
                        count++;
                        cout << endl;
                    }
                    else
                    {

                        for (int k = 0; k <= 2; k++)
                        {

                            cout << arr[0];
                            count++;
                        }
                        for (int j = 0; j <= 2; j++)
                        {

                            cout << arr[i];
                            count++;
                        }
                    }
                }
            }
        }
        else
        {
            // cout << "else block\n";
            for (int m = 0; m < 4; m++) // row
            {
                for (int l = 0; l < 3; l++) // line
                {
                    if (count % 19 == 0 && count != 0)
                    {
                        cout << arr[i];
                        // cout << count;
                        count++;
                        cout << endl;
                    }
                    else
                    {

                        for (int j = 0; j <= 2; j++)
                        {

                            cout << arr[i];
                            count++;
                        }
                        for (int k = 0; k <= 2; k++)
                        {

                            cout << arr[0];
                            count++;
                        }
                    }
                }
            }
        }
    }
    // cout << count;
}
