#ifndef MONITOR_HPP_INCLUDED
#define MONITOR_HPP_INCLUDED

#include "screen.hpp"

enum MonitorStates {sON, sOFF, sOUT, sTEST, sSTANDBY};

class Monitor
{
private:
    MonitorStates state;
    Screen screen;

public:
    Monitor() : screen()
    {
        state = sOFF;
    }

    bool turnOn()
    {
        if((state == sTEST) || (state = sOFF) || (sSTANDBY))
        {
            state = sON;
            screen.setState(ssON);
            return true;
        }
        return false;
    }

    bool turnOff()
    {
        if((state == sTEST) || (state = sON) || (sSTANDBY))
        {
            state = sOFF;
            screen.setState(ssOFF);
            return true;
        }
        return false;
    }

    bool turnOut()
    {
        if(state != sOUT)
        {
            state = sOUT;
            screen.setState(ssOFF);
            return true;
        }
        return false;
    }

    bool turnTest()
    {
        if(state == sON)
        {
            state = sTEST;
            screen.setState(ssON);
            return true;
        }
        return false;
    }

    bool turnStandBy()
    {
        if(state == sON)
        {
            state = sSTANDBY;
            screen.setState(ssOFF);
            return true;
        }
        return false;
    }

    bool repair()
    {
        if(state == sOUT)
        {
            state = sOFF;
            screen.setState(ssOFF);
            return true;
        }
        return false;
    }

    bool incB()
    {
        if(screen.incB())
        {
            return true;
        }
        return false;
    }

    bool decB()
    {
        if(screen.decB())
        {
            return true;
        }
        return false;
    }

    MonitorStates getMonitorState() const
    {
        return state;
    }

    ScreenStates getScreenState() const
    {
        return screen.getState();
    }

    int getBrightness() const
    {
        return screen.getBrightness();
    }

    friend void printInfo(const Monitor& m1);

};

#endif // MONITOR_HPP_INCLUDED
