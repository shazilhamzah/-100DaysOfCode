#include <iostream>
using namespace std;

int hashFormula(int n){
    int value;
    value=n%10;
    return value;
}


int main()
{
    int array[6]={24,32,11,23,90,15};
    int hashTable[10];
    for (int i = 0; i < 6; i++)
    {
        int index=hashFormula(array[i]);
        hashTable[index]=array[i];
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<hashTable[i]<<" ";
    }
    
    
    return 0;
}
