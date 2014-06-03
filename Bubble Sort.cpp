//
//  main.cpp
//  Bubble sort
//
//  Created by ARIJIT CHANDRA on 04/06/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void bubbleS(vector<int>&v , long n)
{
    for (int k =1; k < n; k++) {
        int flag =0;
        for (int  i = 0; i< n-k; i++) {
            if (v[i+1]< v[i]) {
                Swap(v[i], v[i+1]);
                flag =1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
}

int main(int argc, const char * argv[])
{
    vector<int> v;
    int input;
    cout<<"Enter an unsorted vector and press and non-integer to quit";
    while (cin>>input) {
        v.push_back(input);
    }
    cout<<endl;
    long size = v.size();
    cout<<"Vector Before sorted";
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
    bubbleS(v, size);
    cout<<"Vector After sorted";
    for(auto i:v)
        cout<<i<<" ";
    return 0;
}

