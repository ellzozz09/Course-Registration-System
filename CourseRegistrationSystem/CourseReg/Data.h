#pragma once
#include<vector>
#include <iostream>

using namespace std;

class Data {
    vector<string> textData;

    public:
    Data(vector<string>, int, int);
    void writeData();
    void readData();
};
