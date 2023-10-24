#ifndef MACHINE_HPP_INCLUDED
#define MACHINE_HPP_INCLUDED

enum MachineState{sA , sB , sC , sD};

class Machine{

private:

    MachineState currentState;
    int value;

public:

    Machine(){
        currentState = sC;
        value = 80;
    };

    bool metodaX(){
        if(currentState == sB){
            currentState = sA;
            return true;
        }
        if(currentState == sC){
            currentState = sA;
            return true;
        }
        return false;
    }

     bool metodaY(){
        if(currentState == sB){
            currentState = sC;
            value = 80;
            return true;
        }
        if(currentState == sD){
            currentState = sC;
            value = 80;
            return true;
        }
        return false;
    }

    bool metodaZ(){
        if(currentState == sA){
            currentState = sB;
            value = 0;
            return true;
        }
        return false;
    }

     bool metodaW(){
        if(currentState == sA){
            currentState = sD;
            value = 0;
            return true;
        }
        return false;
    }

    bool plus(){
        if((currentState == sA) && (value < 80)){
            value += 20;
            return true;
        }
        return false;
    }

    bool minus(){
        if((currentState == sA) && (value > 0)){
            value -= 20;
            return true;
        }
        return false;
    }

    MachineState getCurrentState() const{
        return currentState;
    }

    int getValue() const{
        return value;
    }


};

#endif // MACHINE_HPP_INCLUDED
