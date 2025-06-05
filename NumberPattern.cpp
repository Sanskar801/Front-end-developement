// 1. Write a program to print the rectangle Number pattern.

// 11111
// 22222
// 33333
// 44444
// 55555

// #include <iostream>
// using namespace std;

// int main(){

//     cout << "Enter the number of rows" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             cout << row;
//         }
//         cout << endl;
//     }

// return 0;
// }

// 2. Write a program to print the rectangle Number pattern.

// 12345
// 12345
// 12345
// 12345
// 12345

// #include <iostream>
// using namespace std;

// int main(){

//     cout << "Enter the number of rows" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             cout << col;
//         }
//         cout << endl;
//     }

// return 0;
// }

// 3. Write a program to print the rectangle Number pattern.

// 55555
// 44444
// 33333
// 22222
// 11111

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         count = (n - row) + 1;
//         for (int col = 1; col <= n; col++)
//         {
//             cout << count;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4. Write a program to print the rectangle Number pattern.

// 54321
// 54321
// 54321
// 54321
// 54321

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {

//         for (int col = 1; col <= n; col++)
//         {
//             count = (n - col) + 1;
//             cout << count;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 5. Write a Program to print the Half Pyramid Number Pattern.

// 1
// 22
// 333
// 4444
// 55555

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << row;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 6. Write a Program to print the Half Pyramid Number Pattern.

// 1
// 12
// 123
// 1234
// 12345

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << col;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 7. Write a Program to print the Half Pyramid Number Pattern.

// 11111
// 2222
// 333
// 44
// 5

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << row;
//         }
//         cout << endl;
//     }

//     return 0;
//}

// 8. Write a Program to print the Inverted Half Pyramid Number Pattern.

// 12345
//  1234
//   123
//    12
//     1

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << col;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 9. Write a Program to print the Full Pyramid Number Pattern.

//     1
//    222
//   33333
//  4444444
// 555555555

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << row;
//         }
//         for (int col = 2; col <= row; col++)
//         {
//             cout << row;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 10. Write a Program to print the Full Pyramid Number Pattern.

//     1
//    333
//   55555
//  7777777
// 999999999

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count = 1;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << count;
//         }
//         for (int col = 2; col <= row; col++)
//         {
//             cout << count;
//         }
//         count += 2;
//         cout << endl;
//     }

//     return 0;
// }

// 11. Write a Program to print the Full Pyramid Number Pattern.

//     1
//    123
//   12345
//  1234567
// 123456789

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         int count = 1;
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << count;
//             count++;
//         }
//         for (int col = 2; col <= row; col++)
//         {
//             cout << count;
//             count++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 12. Write a Program to print the Full Pyramid Number Pattern.

//     1
//    321
//   54321
//  7654321
// 987654321

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         int count = (row * 2) - 1;
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << count;
//             count--;
//         }
//         for (int col = 2; col <= row; col++)
//         {
//             cout << count;
//             count--;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 13. Write a Program to print the Full Pyramid Number Pattern.

//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 14. Write a Program to print the Full Inverted Pyramid Number Pattern.

// 5 5 5 5 5
//  4 4 4 4
//   3 3 3
//    2 2
//     1

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         count = (n - row) + 1;
//         for (int col = 1; col <= row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << count << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 15. Write a Program to print the Solid Diamond Number Pattern.

//     1
//    2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5
//  4 4 4 4
//   3 3 3
//    2 2
//     1

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << row << " ";
//         }
//         cout << endl;
//     }

//     for (int row = 2; row <= n; row++)
//     {
//         count = (n - row) + 1;
//         for (int col = 1; col <= row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << count << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 16. Write a Program to Print the Inverted V Number Pattern.

//     1
//    2 2
//   3   3
//  4     4
// 5       5

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         cout << row;
//         for (int col = 1; col <= 2 * row - 3; col++)
//         {
//             cout << " ";
//         }
//         if (row > 1)
//         {
//             cout << row;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 17. Write a Program to Print the V Shape Number Pattern.

// 5       5
//  4     4
//   3   3
//    2 2
//     1

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         count = (n - row) + 1;
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }
//         cout << count;
//         for (int col = 1; col <= 2 * (n - row) - 1; col++)
//         {
//             cout << " ";
//         }
//         if (row < n)
//         {
//             cout << count;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 18. Write a Program to print the Solid Half Diamond Number Pattern.

// 5
// 54
// 543
// 5432
// 54321
// 543210
// 54321
// 5432
// 543
// 54
// 5

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         count = n;
//         for (int col = 1; col <= row; col++)
//         {
//             cout << count;
//             count--;
//         }

//         cout << endl;
//     }

//     for (int row = 1; row <= n; row++)
//     {
//         count = n;
//         for (int col = 0; col <= (n - row) + 1; col++)
//         {
//             cout << count;
//             count--;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 19. Write a Program to print the Solid Inverted Half Diamond Number Pattern.

//      5
//     45
//    345
//   2345
//  12345
// 012345
//  12345
//   2345
//    345
//     45
//      5

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         count = n;
//         for (int col = 1; col <= row; col++)
//         {
//             cout << count;
//             count--;
//         }

//         cout << endl;
//     }

//     for (int row = 1; row <= n; row++)
//     {
//         count = n;
//         for (int col = 0; col <= (n - row) + 1; col++)
//         {
//             cout << count;
//             count--;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 20. Write a Program to Print the Hollow Diamond Number Pattern.

//     1
//    2 2
//   3   3
//  4     4
// 5       5
//  4     4
//   3   3
//    2 2
//     1

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         count = row;
//         for (int col = 1; col < (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         cout << count;
//         for (int col = 1; col <= 2 * row - 3; col++)
//         {
//             cout << " ";
//         }
//         if (row > 1)
//         {
//             cout << count;
//         }

//         cout << endl;
//     }

//     for (int row = 2; row <= n; row++)
//     {
//         count = (n - row) + 1;
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }
//         cout << count;
//         for (int col = 1; col <= 2 * (n - row) - 1; col++)
//         {
//             cout << " ";
//         }
//         if (row < n)
//         {
//             cout << count;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 21. Write a Program to Print Cross Sign (╳ ) Number Pattern.

// 1   1
//  2 2
//   3
//  4 4
// 5   5

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count = 1;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             if (row == col || row + col == n + 1)
//             {
//                 cout << row;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 22. Write a Program to print the Fibonacci Half Pyramid Pattern.

// 1
// 1 2
// 3 5 8
// 13 21 34 55
// 89 144 233 377 610

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count = 1, countPrev = 0, result=count;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {

//         for (int col = 1; col <= row; col++)
//         {
//             cout << result << " ";
//             result = countPrev + count;
//             countPrev = count;
//             count = result;
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 23. Write a Program to print a butterfly shape Number pattern.

// 1     7
// 12   67
// 123 567
// 1234567
// 123 567
// 12   67
// 1     7

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count = 1, row, col;
//     cin >> n;

//     for (row = 1; row <= n; row++)
//     {
//         for (col = 1; col <= n; col++)
//         {
//             if (col <= count || col >= n - count + 1)
//             {
//                 cout << col;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         if (row <= n / 2)
//             count++;
//         else
//             count--;

//         cout << endl;
//     }

//     return 0;
// }

// 24. Write a Program to Print the Hollow Half Pyramid Star Pattern.

// 1
// 22
// 3 3
// 4  4
// 55555

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count = 1;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             if (col == row || col == 1 || row == n)
//             {
//                 cout << row;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 25. Write a Program to print Floyd's Triangle Number Pattern.
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number of rows" << endl;
//     int n, count = 1;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << count << " ";
//             count++;
//         }

//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <bitset>

int main() {
    int num;

    std::cout << "Enter a negative integer: ";
    std::cin >> num;

    // Convert to binary using two's complement representation
    std::bitset<sizeof(int) * 8> binary(num);

    std::cout << "Binary representation: " << binary << std::endl;

    return 0;
}
