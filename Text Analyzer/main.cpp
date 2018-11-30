//
//  main.cpp
//  Text analyzer
//
//  Created by Elizabeth Lorelei on 11/23/18.
//  Copyright © 2018 Yelyzaveta Losieva. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <set>
#include <fstream>


using namespace std;

int uniqueChars(string line) {
    set<char> checker(line.begin(), line.end());
    return checker.size() == line.size();
}

int main() {
    
    ifstream file;
    file.open("/Users/elizabethlorelei/Documents/Study/Магистратура/Sos/TextAnalyzer/TextAnalyzer/Text.txt");
    
    if(!file.is_open()){
        cout << "..." << endl;
        return 0;
    }
    

    vector<string> input;
    
    
    while (!file.eof()) {
        string line;
        getline(file, line);
        
        if (file.fail()) break;
        
        input.push_back(line);
    }
    
    vector<string> result;
    
    for (vector<string>::const_iterator i = input.cbegin(); i != input.cend(); ++i)
        if (uniqueChars(*i)) result.push_back(*i);
    
    cout <<"Unique words: \n " << endl;
    for (vector<string>::const_iterator i = result.cbegin(); i != result.cend(); ++i)
        cout << *i << endl;
    
    file.close();
    
    return 0;
}
