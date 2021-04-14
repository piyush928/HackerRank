#include<iostream>
#include<vector>
using namespace std;

int sum(vector<int> ar)
{

    int len =ar.size();
    cout<<"length is : " << len;
    int out=0;

    int i=0;
    while(len--)
        {
            out+=ar[i++];

        }
    return out;
}

int main()
{
    vector<int> ar;
    int i;
    for(i=0;i<5;i++)
        ar.push_back(i);
    cout<<"\nSum is : "<<sum(ar);


}
