#ifndef SCREEN_HPP_INCLUDED
#define SCREEN_HPP_INCLUDED

enum ScreenStates {ssON, ssOFF};

class Screen
{
private:
    ScreenStates state;
    int brightness;

public:

    Screen()
    {
        state = ssOFF;
        brightness = 0;
    }

    bool incB()
    {
        if(state == ssON)
        {
            if(brightness <= 18)
            {
                brightness += 2;
            }
        }
    }

    bool decB()
    {
        if(state == ssON)
        {
            if(brightness >= 0)
            {
                brightness -= 2;
            }
        }
    }

    void setState(ScreenStates x)
    {
        state = x;
        if(state == ssOFF){
            brightness = 0;
        }
    }

    ScreenStates getState() const
    {
        return state;
    }

    int getBrightness() const
    {
        return brightness;
    }



};

#endif // SCREEN_HPP_INCLUDED
