//
// created by omri & gal on 12/17/18.
//

#ifndef PROG1PROJECT_IfCOMMAND_H
#define PROG1PROJECT_IfCOMMAND_H

#include "../Command.h"
#include "../../Handlers/Conditions.h"

class IfCommand: public Conditions{
public:
    // constructor:
    IfCommand(vector<string>& v):
    Conditions(v) {};

    void doCommand() override;



};


#endif //PROG1PROJECT_IfCOMMAND_H
