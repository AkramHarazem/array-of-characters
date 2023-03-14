#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int i,STD;


    cout<< "\nplease enter students number: ";
    cin>> STD;
    float sum[STD]= {0};
    char fname[STD][15],lname[STD][15],fullname[STD][50];

    for (i=0; i<STD; i++)
    {
        cout<< "\nEnter fname of student no. "<<i+1<<" : ";
        cin >> fname[i];
        cout<< "\nEnter lname of student no. "<<i+1<<" : ";
        cin >> lname[i];

    }

    for (i=0; i<STD; i++)
    {
        strcpy (fullname[i],fname[i]);
        strcat (fullname[i]," ");
        strcat (fullname[i],lname[i]);
        cout<<"\nStudent No."<<i+1<<" his full name is: "<< fullname[i]<<endl;

    }

    int longestNameLength=strlen(fullname[0]),index=0;
    for (i=1; i<STD; i++)
    {
        int currentLength = strlen(fullname[i]);
        if ( currentLength > longestNameLength)
        {
            longestNameLength=currentLength;
            index=i;
        }
    }

    cout<< "\nFirst Student is No. "<<index+1<<" length is "<<longestNameLength<< " his full name is "<< fullname[index];

    return 0;
}
