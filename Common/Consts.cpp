//
// Created by Ronen Pinhasov on 2018-12-29.
//

#include <map>
#include "Consts.h"
#include "../Handlers/Exceptions.h"
#include "../Commands/CreateCommand.h"
#include "../Commands/Creators.h"

const string Consts::ENDLINE = ";";//intilizing const maps:

// inner use to intilize maps:

map<string, CreateCommand*> Consts::createCommandsByNames() {

    map<string, CreateCommand*> m =
            {{ "if", new IfCommandCreator() }, { "while", new WhileCommandCreator() },
             { "openDataServer", new OpenDataServerCommandCreator() }, { "print", new PrintCommandCreator()} ,
             {Consts::ENDLINE, new SemicolonCommandCreator()}, {"=", new EqualsCommandCreator()},
             {"var", new DefineVarCommandCreator()}, {"connect", new ConnectCommandCreator()}, {"sleep", new SleepCommandCreator()}
                    , {"bind", new SemicolonCommandCreator()}, {"enterc", new EnterCCommandCreator()}
            };

    return m;
};

// now create the maps:
map<string, CreateCommand*> Consts::_commandsByNames = Consts::createCommandsByNames();

map<string, double> Consts::_keywordValues = Consts::createKeywordValues();

map<string, double> Consts::createKeywordValues() {
    map<string, double> m = {{ "true", 1 }, { "false", 0 }};
    return m;
};

Command* Consts::createCommand(string name, vector<string>& args) {
    if(_commandsByNames.count(name) != 0) {
        // TODO: CHANGE TO FACTORY.
        return _commandsByNames.at(name)->create(args);
    }
    else {
        throw CommandException("Command (keyword) name is not defined");
    }

}

CreateCommand *Consts::getCommand(string name) {
    if(_commandsByNames.count(name) != 0) {
        return _commandsByNames.at(name);
    }
    else {
        throw CommandException("Command (keyword) name is not defined");
    }
}

double Consts::getKeywordValue(string name) {
    if(_keywordValues.count(name) != 0) {
        return  _keywordValues.at(name);
    }
    else {
        throw KeywordException("Keyword is not defined");
    }
}
bool Consts::containsKeyword(string name) {
    return _keywordValues.count(name) != 0;
}

bool Consts::containsCommand(string name) {
    return _commandsByNames.count(name) != 0;
}

void Consts::destroyAllDB() {
    for(map<string, CreateCommand*>::iterator p = _commandsByNames.begin(); p != _commandsByNames.end(); ++p) {
        if(p->second != nullptr)
            delete p->second;

    }
}
