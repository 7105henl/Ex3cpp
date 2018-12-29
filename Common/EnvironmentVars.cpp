//
// Created by Chen Levy on 2018-12-29.
//

#include <iostream>
#include "EnvironmentVars.h"
#include "Consts.h"
#include <iostream>
#include <fstream>
#include "../Handlers/Exceptions.h"

void EnvironmentVars::terminalControl() {
    Interpreter *i = new Interpreter();

    string line = Consts::ENDLINE;
    while (line!="exit") {
        try {
            //todo add interpreter
            i->lexer(line);
            i->parser();
            getline(cin, line);
        } catch (BasicException& be) {
            cout << EXCEPTION_THROWN << " " << be.what() << endl;
            delete i;
            throw;
        }
    }
}

void EnvironmentVars::runFileScript(string &file) {
    ifstream fileStream(file);
    try {
        if (fileStream.is_open()) {
            //interpreter
            Interpreter *i = new Interpreter();
            string line;
            while (getline(fileStream, line)) {
                i->lexer(line);
                i->parser();
            }
        }
    } catch (BasicException &be) { // couldnt open :(
        cout << EXCEPTION_THROWN  << " " << be.what() << endl;
        delete i;
        throw;
    }
}


