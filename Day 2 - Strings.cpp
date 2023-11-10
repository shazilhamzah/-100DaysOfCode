#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Assigning an array
    string str = "Muhammad Shazil Hamzah";
    cout<<str<<endl;




    /* Taking input from an array without getline function
    It will just output first number as it will consider space as null and stop the string */
    string str1;
    cout<<"Enter string (without getline): "; cin >> str1;
    cout<<str1<<endl;
    
    cin.ignore();


    /* Taking input from an array using getline function
    It will output all the words */
    string str2;
    cout<<"Enter a string (with getline): "; 
    getline(cin, str2);
    cout<<str2<<endl;


    // Concatenation of strings
    string str3="Hello! ",str4="World!";
    string str5=str3+str4;
    cout<<str5<<endl;


    // Accessing character from an array
    string str6="family";
    cout<<str6[2]<<" "<<str6[5]<<endl;


    // Clear a string
    string str7="hello bacho";
    str7.clear();
    cout<<str7;


    // Comparing strings
    string str8="abc",str9="xyz";
    cout<<str8.compare(str9)<<endl;


    // Empty function
    string str10="adjvcns";
    str10.clear();
    if (str10.empty())
    {
        cout<<"Array is empty!"<<endl;
    }


    // Erease Function
    string str11="hello bacho";
    str11.erase(1,5);
    cout<<str11<<endl;


    // Finding Character in an array
    string str12="ninpoop";
    cout<<str12.find("poo")<<endl;


    // Insert and length function
    string str13="hello world";
    str13.insert(5," lol ");
    cout<<str13<<" "<<str.length()<<endl;


    // String to integer and integer to string
    string str14="786";
    int abc=14;
    stoi(str14);
    cout<<str14<<endl;
    cout<<to_string(abc)<<endl;


    
    
    
    
    
    
    
    // Array Challenges //

    // Convert upper case to lower and lower to upper
    string str15="kjaADnckAdc";
    int size=str15.length();
    for (int i = 0; i < size; i++)
    {
        int value = str15[i];
        if (value>96)
        {
            value-=32;
        }
        else if (value>64 && value<91)
        {
            value+=32;
        }
        
        char test=value;
        str15[i]=test;
        cout<<str15[i]<<endl;
    }

    // Convert numeric string to highest number
    string str16="53214";
    for (int i = 0; i < str16.length()-1; i++)
    {
        for (int  j = i+1; j<str16.length(); j++)
        {
            char ascii=str16[i],ascii2=str16[j];
        if (ascii<ascii2)
        {
            swap(str16[i],str16[j]);
        }
        }
    }
    cout<<str16<<endl;

    

    // Frequency of highest occuring character inside an array
    char alphabets[26];
    int m=97;
    for (int i = 0; i < 26; i++)
    {
        char alph=m;
        alphabets[i]=alph;
        m++;
    }
    
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    
    
    string str17="abbcacbbzazzzzzzzzbbdez";
    for (int i = 0; i < str17.length(); i++)
    {
        char alph=str17[i];
        
        for (int j = 0; j < 26; j++)
        {
            char abcd=alphabets[j];
            if (alph==abcd)
            {
                freq[j]+=1;
            }
            
        }
        
    }
    
    
    int max=freq[0],index;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i]>max)
        {
            max=freq[i];
        }

        for (int j = 0; j < 26; j++)
        {
            if (freq[j]==max)
            {
                index=j;
            }
            
        }
        
          
    }
    cout<<"Maximum frequency is of alphabet "<<alphabets[index]<<" and has a frequency of "<<max<<endl;
    
    return 0;
}
