#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstring>
#include <cmath>
#include "ModulesPopov.h"

using namespace std;

struct TestSuite{
    float action = 0;
    float expResult = 0;
};

vector<TestSuite> readCVSFiles(string filePath){
    ifstream testSuite (filePath);
    vector<string> row;
    vector<TestSuite> autotest;
    TestSuite ts;
    string line, value;
    getline(testSuite, line);

    while(getline(testSuite, line)){
        row.clear();
        stringstream s(line);

        while(getline(s, value, ',')){
            row.push_back(value);
        }

        ts.action = stof(row[0]);
        ts.expResult = stof(row[1]);

        autotest.push_back(ts);
    }

    testSuite.close();

    return autotest;
}

int main()
{
    ofstream testResult;
    testResult.open("TestResult.txt");

        if(!testResult.is_open())
        {
        testResult << "Встановлені вимоги порядку виконання лабораторної роботи порушено!";
        }

    else{
        ClassLab12_Popov ball(10);
        vector<TestSuite> autotest = readCVSFiles("TS.txt");

        for(int i = 0; i < autotest.size(); i++){
            ball.setRadius(autotest[i].action);
            if(round(autotest[i].expResult) == round(ball.getVolumeBall())){
                testResult << "test №" << i+1 << " -> passed" << endl << endl;
            }
            else{
                testResult << "test №" << i+1 << " -> failed" << endl;
            }
        }
    }
    testResult.close();
    cout << "Тестування завершенно.";
    return 0;
}
