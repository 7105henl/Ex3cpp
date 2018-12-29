//
// Created by Ronen Pinhasov on 2018-12-29.
//

#ifndef UNTITLED3_INTERPRETER_H
#define UNTITLED3_INTERPRETER_H


#include "../Commands/Command.h"
#include <vector>
#include <string>
using namespace std;

class Interpreter {
private:
    Command* thisCommand;
    int m_index = 0;
    vector<string> m_words;
public:
    Interpreter(vector<string> code): thisCommand(nullptr), m_index(0), m_words(code){};
    void lexer(string& line);
    void parser();
    ~Interpreter();

};


#endif //UNTITLED3_INTERPRETER_H
