//
// Created by Ronen Pinhasov on 2018-12-29.
//

#ifndef UNTITLED3_ENVIRONMENTVARS_H
#define UNTITLED3_ENVIRONMENTVARS_H
#include <string>
using namespace std;

class EnvironmentVars {
private:
    const string EXCEPTION_THROWN = "EXCEPTION!!";
public:
    void terminalControl();
    void runFileScript(string& file);
    ~EnvironmentVars();
};


#endif //UNTITLED3_ENVIRONMENTVARS_H
