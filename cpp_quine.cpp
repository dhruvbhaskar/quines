/*
AUTHOR: Dhruv Bhaskar <dhruvbhaskar95@gmail.com>
LAST MODIFIED: 28 December, 2013
*/
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
   int length = 22;
   char q = 34;  // ASCII value for quotation mark
   string l[] = {
   "/*",
   "AUTHOR: Dhruv Bhaskar <dhruvbhaskar95@gmail.com>",
   "LAST MODIFIED: 28 December, 2013",
   "*/",
   "#include <iostream>",
   "#include <string>",
   "using namespace std;",
   "int main(void)",
   "{",
   "   int length = 22;",
   "   char q = 34;  // ASCII value for quotation mark",
   "   string l[] = {",
   "   ",
   "   };",
   "   for (int i = 0; i < 12; i++)",
   "       cout << l[i] << endl;",
   "   for (int i = 0; i < length; i++)",
   "       cout << l[12] + q + l[i] + q + ',' << endl;  // Print string containing source code",
   "   for (int i = 13; i < length; i++)",
   "       cout << l[i] << endl;",
   "   return 0;",
   "}",
   };
   for (int i = 0; i < 12; i++)
       cout << l[i] << endl;
   for (int i = 0; i < length; i++)
       cout << l[12] + q + l[i] + q + ',' << endl;  // Print string containing source code
   for (int i = 13; i < length; i++)
       cout << l[i] << endl;
   return 0;
}
