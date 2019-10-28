// Helper functions for music

#include <cs50.h>
#include <stdlib.h>
#include "helpers.h"
#include <math.h>
#include <string.h>


// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{

    int num = fraction[0] - '0';
    int denom = fraction[2] - '0';
    int notes = (8 / denom) * num;

    return notes;
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    //get octave from last note in string
    int octave = note [strlen(note) - 1] - '0'; // string -> int subtract '0' ascii value so int is correct

    // frequency is 2^(n/12) * 440 A4 = 440 n is semitones from note to A4
    float freq = 0.0;
    if (note[0] == 'A')
    {
        freq = 440;
    }
    else if (note[0] == 'B')
    {
        freq = 440 * (pow(2.0,(2.0/12.0)));
    }
    else if (note[0] == 'C')
    {
        freq = 440/ (pow(2.0,(9.0/12.0)));
    }
    else if (note[0] == 'D')
    {
        freq = 440 / (pow(2.0,(7.0/12.0)));
    }
    else if (note[0] == 'E')
    {
        freq = 440 / (pow(2.0,(5.0/12.0)));
    }
    else if (note[0] == 'F')
    {
        freq = 440 / (pow(2.0,(4.0/12.0)));
    }
    else if (note[0] == 'G')
    {
        freq = 440 / (pow(2.0,(2.0/12.0)));
    }

    if (octave > 4)
    {
        for (int j=0; j < octave - 4; j++)
        {
            freq *= 2.0; //for every octave higher than 4 double frequency
        }

    }
    else if (octave < 4)
    {
        for (int i=0; i < 4 - octave; i++)
        {
            freq /= 2.0; //for every octave less than 4 divide freq by 2
        }
    }
    if (note[1] == 'b')
    {
        freq /= (pow(2.0, (1.0/12.0)));
    }
   else if (note[1] == '#')
    {
        freq *= (pow(2.0, (1.0/12.0)));
    }

    int result = round(freq);

    return result;

}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s[0] == '\0')
    {
        return true;
    }

    else
    {
        return false;
    }



}
