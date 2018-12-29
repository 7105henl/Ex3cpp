//
// created by omri & gal on 12/24/18.
//

#ifndef PROG1PROJECT_CREATORS_H
#define PROG1PROJECT_CREATORS_H

// here is all creators of commands:


#include "CreateCommand.h"
#include "OpenDataServerCommand.h"
#include "CommandCreator/IfCommand.h"
#include "WhileCommand.h"
#include "ConnectCommand.h"
#include "SemicolonCommand.h"
#include "PrintCommand.h"
#include "EqualsCommand.h"
#include "DefineVarCommand.h"
#include "SleepCommand.h"
#include "EnterCCommand.h"

class OpenDataServerCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new OpenDataServerCommand(CommandArgs);
    }
};

class IfCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new IfCommand(CommandArgs);
    }
};

class WhileCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new WhileCommand(CommandArgs);
    }
};

class ConnectCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new ConnectCommand(CommandArgs);
    }
};

class SemicolonCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new SemicolonCommand(CommandArgs);
    }
};

class PrintCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new PrintCommand(CommandArgs);
    }
};

class EqualsCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new EqualsCommand(CommandArgs);
    }
};

class DefineVarCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new DefineVarCommand(CommandArgs);
    }
};

class SleepCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new SleepCommand(CommandArgs);
    }
};

class EnterCCommandCreator : public CreateCommand{
    Command *create(vector<string>& CommandArgs) override {
        return new EnterCCommand(CommandArgs);
    }
};

#endif //PROG1PROJECT_CREATORS_H
