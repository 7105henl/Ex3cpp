//
// Created by Ronen Pinhasov on 2018-12-29.
//

#ifndef UNTITLED3_CREATECOMMAND_H
#define UNTITLED3_CREATECOMMAND_H

#include <string>
#include <vector>
using namespace std;

class CreateCommand {
public:
    virtual Command* create(vector<string>& args) = 0;
};


#endif //UNTITLED3_CREATECOMMAND_H
