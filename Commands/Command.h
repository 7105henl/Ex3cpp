//
// Created by Ronen Pinhasov on 2018-12-29.
//

#ifndef UNTITLED3_COMMAND_H
#define UNTITLED3_COMMAND_H


class Command {
public:
    virtual void doCommand() = 0;
    virtual ~Command(){};
};


#endif //UNTITLED3_COMMAND_H
