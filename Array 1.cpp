#include <iostream>
using namespace std;

int findEvenNumbers(int [], int );
void findNum(int[], int, int);

int main()
{
   int arraysize = 5;
   int array[arraysize]= {0};
   
   
   for (int i = 0; i < arraysize; ++i)
   {
       cout << " Please enter an integers\n";
   cin >> array[i];
   }
   cout << endl;
   
   for (int x = 0; x < arraysize; ++x)
{
    
   cout << array[x] <<" " ;
}
cout << endl;

for (int j = arraysize - 1; j >= 0 ; j--)
{
    
   cout << array[j] << " " ;
    
}
cout << endl;

int sum = 0; 
    for (int y = 0; y < arraysize; y++)
    {
        sum += array[y]; 
        
        if (y == arraysize - 1)
        {
            cout << "The sum of all numbers is: " << sum << endl;
        }
    }


for (int l = 0; l < arraysize; ++l)
{
    if (array[0] < array[l])
    {
    array[0] = array[l];
    if (l == arraysize - 1)
    {
    cout << "Largest integer is:\n" << array[0] << endl;
    }
    }
    
    
}

int num = findEvenNumbers(array, arraysize);
    cout << "Even numbers in the array: " << num <<endl;
    
int wanted;
    cout << "Enter number you wish to find:\n";
    cin >> wanted;

    findNum(array, arraysize, wanted);
    
}
int findEvenNumbers(int a[], int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
void findNum(int ar[], int sz, int w)
{
    bool found = false;
    for (int r = 0; r < sz; ++r)
    {
        if (ar[r] == w)
        {
            cout << "The number " << w << " is found in the list.\n";
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "The number entered is not found within the list.\n";
    }
}


