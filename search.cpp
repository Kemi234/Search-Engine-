/*header tag */
#include <iostream>

// The line below "using namespace std" statement makes
//it unnecessary to prefix the standard library functions with "std::".

using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
    for(int i = 0; i < size; i++)
    {
        if (searchValue == array[i])
        {
            return i;
        }
    }
    return -1;
}
void intro();
int main()
{
    intro();
    int a[] = {15, 23, 7, 45, 87, 16};
 
    int userValue;
 
    cout << "Enter an integer: " << endl;
    cin >> userValue;
 
    int result = linearSearch(a, 6, userValue);
 
    if(result >= 0)
    {
        cout << "The number " << a[result] << " was found at the"
                " element with index " << result << endl;
    }
    else
    {
        cout << "The number " << userValue << " was not found. " << endl;
    }

}
void intro(){
    cout << "\n\n\n\t     TOPIC: SEARCH ENGINE ";
    cout << "\n\n\n\n\t     MADE BY: MATEMILEGBE OLUWAKEMI OMOLABAKE";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/22/0718 ";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
