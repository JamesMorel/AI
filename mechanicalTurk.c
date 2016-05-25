/*
 *  Mr Pass.  Brain the size of a planet!
 *
 *  Proundly Created by Richard Buckland
 *  Share Freely Creative Commons SA-BY-NC 3.0. 
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "Game.h"
#include "mechanicalTurk.h"

action decideAction (Game g) {
    int counter = 0;
    action nextAction;

    nextAction.actionCode = PASS;

    int currentPlayer = getWhoseTurn(g);
    if(counter <= 20){
        if(currentPlayer != NO_ONE){
            int numMJ = getStudents(g, currentPlayer, STUDENT_MJ);
            int numMTV = getStudents(g, currentPlayer, STUDENT_MTV);
            int numM$ = getStudents(g, currentPlayer, STUDENT_MMONEY);
            int numBPS = getStudents(g, currentPlayer, STUDENT_BPS);
            int numBQN = getStudents(g, currentPlayer, STUDENT_BQN);

            if(numMJ >=1 && numMTV >=1 && numM$ >=1){
                nextAction.actionCode = START_SPINOFF;
            }else if(numBPS >=1 && numBQN >=1){
                nextAction.actionCode = OBTAIN_ARC;
            }else{
                nextAction.actionCode = PASS;
                counter++;
        }
    }

    return nextAction;
}
