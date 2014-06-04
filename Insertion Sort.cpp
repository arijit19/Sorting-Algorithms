//
//  main.cpp
//  Insertion sort
//
//  Created by ARIJIT CHANDRA on 04/06/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

void InsertionS(vector<int> &v,long n)
{
    for (int i =1; i< n; i++) {
        int value = v[i];
        int hole = i;
        while (hole>0&&v[hole-1]>value) {
            v[hole]= v[hole-1];
            hole--;
        }
        v[hole]= value;
    }
}

int main(int argc, const char * argv[])
{
    vector<int> v;
    int input;
    cout<<"Enter a unsorted Vector and press any non-integer to quit";
    while (cin>>input) {
        v.push_back(input);
    }
    cout<<endl;
    long size = v.size();
    cout<<"Vector before sorted";
    for(auto i : v)
        cout<<i<<" ";
    cout<<endl;
    InsertionS(v, size);
    cout<<"Vector After sorted";
    for(auto i : v)
        cout<<i<<" ";
    return 0;
}

