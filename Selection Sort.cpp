//
//  main.cpp
//  Selection sort
//
//  Created by ARIJIT CHANDRA on 03/06/14.
//  Copyright (c) 2014 ARIJIT CHANDRA. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


void selectionS(vector<int> &v,long n)
{
    for (int i = 0 ; i < n-1; i++) {
        int min = i;
        for (int j = i+1; j<n; j++) {
            if (v[j]<v[min]) {
                min = j;
            }
        }
        int temp = v[i];
        v[i] = v[min];
        v[min]= temp;
    }
}

int main(int argc, const char * argv[])
{
    vector<int> v;
    int input;
    cout<<"Enter an unsorted vector and press any non-integer to quit ";
    while (cin>>input) {
        v.push_back(input);
    }
    long size = v.size();
    cout<<"Vector before sorting";
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;
    selectionS(v,size);
    cout<<"Vector After sorting";
    for(auto i: v)
        cout<<i<<" ";
    
    return 0;
}

