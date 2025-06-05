// 1. Write a Program to print the right triangle star pattern.

// *
// **
// ***
// ****
// *****

// #include <iostream>
// using namespace std;

// int main(){

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

// return 0;
// }

// 2. Write a Program to print an inverted right triangle star pattern.

// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

// for (int row = 1; row <= n; row++)
// {
//     for (int col = 1; col <= (n - row) + 1; col++)
//     {
//         cout << "*";
//     }
//     cout << endl;
// }

//     return 0;
// }

// 3. Write a Program to print mirrored right triangle star pattern.

//     *
//    **
//   ***
//  ****
// *****

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n - row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4. Write a Program to print the Inverted Half Pyramid Star Pattern.

// *****
//  ****
//   ***
//    **
//     *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 5. Write a Program to print the Full Pyramid Star pattern.

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int sp = 1; sp < (n - row) + 1; sp++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 6. Write a Program to print an inverted pyramid star pattern.

// * * * * *
//  * * * *
//   * * *
//    * *
//     *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int sp = 1; sp < row; sp++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 7. Write a Program to print a square star pattern.

// *****
// *****
// *****
// *****
// *****

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 8. Write a Program to Print Half Diamond Star Pattern.

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col < (n - row) + 1; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 9. Write a program to Print a solid Diamond Star Pattern.

//      *
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col < (n - row) + 1; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//         for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col < (n - row) + 1; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 10. Write a program to Print Inverted V Star Pattern.

//     *
//    * *
//   *   *
//  *     *
// *       *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n - row; col++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         for (int space = 1; space <= 2 * row - 3; space++)
//         {
//             cout << " ";
//         }

//         if (row > 1)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 11. Write a Program to print the Full Pyramid Star Pattern.

//     *
//    ***
//   *****
//  *******
// *********

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
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
//             cout << "*";
//         }
//         for (int col = 2; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 12. Write a Program to Print the Inverted Full Pyramid Star Pattern.

// *********
//  *******
//   *****
//    ***
//     *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << "*";
//         }
//         for (int col = 2; col <= (n - row) + 1; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 13. Write a  Program to print the Solid Inverted Half Diamond Star Pattern.

//      *
//     **
//    ***
//   ****
//  *****
// ******
//  *****
//   ****
//    ***
//     **
//      *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n - row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= n - row; col++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 14. Write a Program to Print the V Star Pattern.

// *       *
//  *     *
//   *   *
//    * *
//     *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         for (int sp = 1; sp <= 2 * (n - row) - 1; sp++)
//         {
//             cout << " ";
//         }

//         if (row < n)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 15. Write a Program to Print the Hollow Diamond Star Pattern.

//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n - row; col++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         for (int sp = 1; sp <= 2 * row - 3; sp++)
//         {
//             cout << " ";
//         }

//         if (row > 1)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     for (int row = 2; row <= n; row++)
//     {
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         for (int sp = 1; sp <= 2 * (n - row) - 1; sp++)
//         {
//             cout << " ";
//         }

//         if (row < n)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 16. Write a Program to Print the Pant's style Star Pattern.

// *********
// **** ****
// ***   ***
// **     **
// *       *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << "*";
//         }
//         for (int space = 1; space <= (2 * row) - 3; space++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             if (row == 1 && col == n)
//             {
//                 break;
//             }

//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 17. Write a Program to Print the Inverted Pant's Shape Star Pattern.

// *       *
// **     **
// ***   ***
// **** ****
// *********

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }
//         for (int space = 1; space <= (2 * (n - row)) - 1; space++)
//         {
//             cout << " ";
//         }
//         for (int col = 1; col <= row; col++)
//         {
//             if (row == n && col == n)
//             {
//                 break;
//             }

//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 18. Write a Program to Print the Double Pyramid Star Pattern.

// ******
// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
// ******

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     for (int row = 2; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 19. Write a Program to Print Cross Sign (╳ ) Star Pattern.

// *   *
//  * *
//   *
//  * *
// *   *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col < row; col++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         for (int sp = 1; sp <= 2 * (n - row) - 1; sp++)
//         {
//             cout << " ";
//         }

//         if (row < n)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }
//     for (int row = 2; row <= n; row++)
//     {
//         for (int col = 1; col <= n - row; col++)
//         {
//             cout << " ";
//         }

//         cout << "*";

//         for (int sp = 1; sp <= 2 * row - 3; sp++)
//         {
//             cout << " ";
//         }

//         if (row > 1)
//         {
//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 20. Write a Program to Print the Hollow Half Pyramid Star Pattern.

// *
// **
// * *
// *  *
// *****

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             if (col == 1 || col == row || row == n)
//             {
//                 cout << "*";
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

// 21. Write a Program to Print the Hollow Rectangle Star Pattern.

// *****
// *   *
// *   *
// *   *
// *****

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= n; col++)
//         {
//             if (col == 1 || col == n || row == n || row == 1)
//             {
//                 cout << "*";
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

// 22. Write a Program to print a butterfly shape star pattern.

// *     *
// **   **
// *** ***
// *******
// *** ***
// **   **
// *     *

// #include <iostream>
// using namespace std;

// int main()
// {

//     cout << "Enter the number" << endl;
//     int n;
//     cin >> n;

//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             cout << "*";
//         }

//         for (int sp = 1; sp <= 2 * (n - row) - 1; sp++)
//         {
//             cout << " ";
//         }

//         for (int col = 1; col <= row; col++)
//         {
//             if (row == n && col == n)
//             {
//                 break;
//             }
//             cout << "*";
//         }

//         cout << endl;
//     }
//     for (int row = 2; row <= n; row++)
//     {
//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             cout << "*";
//         }

//         for (int sp = 1; sp <= 2 * row - 3; sp++)
//         {
//             cout << " ";
//         }

//         for (int col = 1; col <= (n - row) + 1; col++)
//         {
//             if (row == 1 && col == n)
//             {
//                 break;
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }