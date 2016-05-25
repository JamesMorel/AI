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
    //debateCampus
    //debateGO8s
    //debateEnemies
    //debateSpinoff
    int currentTurn = getTurnNumber(g);
    int currentPlayer = getWhoseTurn(g);
    int numMJ = getStudents(g, currentPlayer, STUDENT_MJ);
    int numMTV = getStudents(g, currentPlayer, STUDENT_MTV);
    int numM$ = getStudents(g, currentPlayer, STUDENT_MMONEY);
    int numBPS = getStudents(g, currentPlayer, STUDENT_BPS);
    int numBQN = getStudents(g, currentPlayer, STUDENT_BQN);    
        if (currentPlayer != NO_ONE) {
            if(numMJ >=1 && numMTV >=1 && numM$ >=1){
                nextAction.actionCode = START_SPINOFF;
            }else if(numBPS >=1 && numBQN >=1){
                nextAction.actionCode = OBTAIN_ARC;
            }else{
                nextAction.actionCode = PASS;
        } else if (currentTurn = 2) {
            nextAction.actionCode = OBTAIN_ARC;
        } else if (currentTurn >= 3 && <= 100) {
            possible = debateCampus(g, currentPlayer);
            
            if (possible < 0) {
                next
            }
            
            
            
        }
    } 
    }
    
    int debateCampus(g, currentPlayer) {
        int possible = 0;
        int player = currentPlayer;
        int campus = getCampuses(g, player);
        int arcs = getARCs(g, player);
        
        if (arcs <= campus) {
            possible = -1;
        } else if (campus >= 8) {
            possible = 0;
        } else if (numBPS >= 1 && numB? >= 1 && numMJ >= 1 && numMTV >= 1) {
            possible = 1;
        } else {
            possible = 2;
        }
        return possible;
    }
    
    
    int lastResort(g) {
        if(numMJ >=1 && numMTV >=1 && numM$ >=1) {
            return 1;
        }
    }
    return nextAction;
}
