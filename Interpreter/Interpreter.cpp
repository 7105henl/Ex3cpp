//
// Created by Ronen Pinhasov on 2018-12-29.
//

#include "Interpreter.h"
#include <vector>
#include "../Common/Consts.h"
using namespace std;

bool isLetterOrUnderscore(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c == '_');
}

void addWordIfNew(vector<string>& words, string& checking){
    if(checking != ""){
        words.push_back(checking)
        checking ="";
    }
}

void Interpreter::lexer(string& line) {

    // var a = bind "/cosjd/ckkd./jdj"


    bool followingStr = false;
    vector<string> words;
    string tmpNum = "";
    string tmpOperat = "";
    string tmpVar = "";
    string tmpString ="";
    int i=0;
    while(i<line.length()){
        char c = line[i];
        if(followingStr){
            if(c == '"'){
                words.push_back('"');
                followingStr = false;
            }
            else
                tmpString += c;
        }
        else{
            if(c == ' '){
                if(tmpNum!="" || (tmpVar!="" && !Consts::containsCommand(tmpVar))){
                    while(line[i] == ' '){ //the place to increment the i
                        i++;
                    }
                    c = line[i];


                    //todo refactor
                    if(isLetterOrUnderscore(c) || isdigit(c) || c == '(' || c ==')'){ //might needed ,
                        addWordIfNew(words, tmpNum);
                        addWordIfNew(words, tmpVar);

                    }
                    countinue;

                }
                addWordIfNew(words, tmpNum);
                addWordIfNew(words, tmpVar);
                addWordIfNew(words, tmpOperat);

            }



        }
    }
}

void Interpreter::parser() {
}