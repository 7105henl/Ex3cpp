//
// created by omri & gal on 12/18/18.
//

#ifndef PROG1PROJECT_CONSTSDB_H
#define PROG1PROJECT_CONSTSDB_H

#include "../Commands/Command.h"
#include "../Commands/CreateCommand.h"
#include <string>

using namespace std;
class Consts {

private:

// initliztion of string names to command object map:
    static map<string, CreateCommand *> createCommandsByNames();

    // intiliztion of string names to keyword values map:

    static map<string, double> createKeywordValues();

    // keyword defualt variables name to value.
    static map<string, double> _keywordValues;

    // commands table - between name and command object.
    static map<string, CreateCommand*> _commandsByNames;

public:
    static const string ENDLINE;

    static Command* createCommand(string name, vector<string>& args);
    // get a command object by name.
    static CreateCommand *getCommand(string name);

    static bool containsCommand(string name);

    // get a keyword value by name.
    static double getKeywordValue(string name);

    // destrucor:
    static void destroyAllDB();

    // check if a keyword exsists.
    static bool containsKeyword(string name);

    /**
     * doCommand(string[])
     */

};

#endif //PROG1PROJECT_CONSTSDB_H
