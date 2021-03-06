//
//  FormantFilter.hpp
//  AudioComponents
//
//  Created by Aaron Dawson on 8/28/16.
//
//

#ifndef FormantFilter_hpp
#define FormantFilter_hpp

#include <stdio.h>
#include "SampleEffect.hpp"

typedef enum Vowel {
    A,
    E,
    I,
    O,
    U
} Vowel;

const double coeff[5][11]= {
    { 8.11044e-06,
        8.943665402,    -36.83889529,    92.01697887,    -154.337906,    181.6233289,
        -151.8651235,   89.09614114,    -35.10298511,    8.388101016,    -0.923313471  ///A
    },
    {4.36215e-06,
        8.90438318,    -36.55179099,    91.05750846,    -152.422234,    179.1170248,  ///E
        -149.6496211,87.78352223,    -34.60687431,    8.282228154,    -0.914150747
    },
    { 3.33819e-06,
        8.893102966,    -36.49532826,    90.96543286,    -152.4545478,    179.4835618,
        -150.315433,    88.43409371,    -34.98612086,    8.407803364,    -0.932568035  ///I
    },
    {1.13572e-06,
        8.994734087,    -37.2084849,    93.22900521,    -156.6929844,    184.596544,   ///O
        -154.3755513,    90.49663749,    -35.58964535,    8.478996281,    -0.929252233
    },
    {4.09431e-07,
        8.997322763,    -37.20218544,    93.11385476,    -156.2530937,    183.7080141,  ///U
        -153.2631681,    89.59539726,    -35.12454591,    8.338655623,    -0.910251753
    }
};



class FormantFilter : public SampleEffect {
private:
    Vowel vowel;
    double memory[10]={0,0,0,0,0,0,0,0,0,0};

public:
    FormantFilter() {
        FormantFilter(A);
    }
    FormantFilter(Vowel vowel) {
        this->vowel = vowel;
    }
    
    double process(double sample);
};
#endif /* FormantFilter_hpp */
