#ifndef THERMISTORTABLES_H_
#define THERMISTORTABLES_H_

#include "Marlin.h"

#define OVERSAMPLENR 16

#if (THERMISTORHEATER_0 == 1) || (THERMISTORHEATER_1 == 1)  || (THERMISTORHEATER_2 == 1) || (THERMISTORBED == 1) //100k bed thermistor

const short temptable_1[][2] PROGMEM = {
{       23*OVERSAMPLENR ,       300     },
{       25*OVERSAMPLENR ,       295     },
{       27*OVERSAMPLENR ,       290     },
{       28*OVERSAMPLENR ,       285     },
{       31*OVERSAMPLENR ,       280     },
{       33*OVERSAMPLENR ,       275     },
{       35*OVERSAMPLENR ,       270     },
{       38*OVERSAMPLENR ,       265     },
{       41*OVERSAMPLENR ,       260     },
{       44*OVERSAMPLENR ,       255     },
{       48*OVERSAMPLENR ,       250     },
{       52*OVERSAMPLENR ,       245     },
{       56*OVERSAMPLENR ,       240     },
{       61*OVERSAMPLENR ,       235     },
{       66*OVERSAMPLENR ,       230     },
{       71*OVERSAMPLENR ,       225     },
{       78*OVERSAMPLENR ,       220     },
{       84*OVERSAMPLENR ,       215     },
{       92*OVERSAMPLENR ,       210     },
{       100*OVERSAMPLENR        ,       205     },
{       109*OVERSAMPLENR        ,       200     },
{       120*OVERSAMPLENR        ,       195     },
{       131*OVERSAMPLENR        ,       190     },
{       143*OVERSAMPLENR        ,       185     },
{       156*OVERSAMPLENR        ,       180     },
{       171*OVERSAMPLENR        ,       175     },
{       187*OVERSAMPLENR        ,       170     },
{       205*OVERSAMPLENR        ,       165     },
{       224*OVERSAMPLENR        ,       160     },
{       245*OVERSAMPLENR        ,       155     },
{       268*OVERSAMPLENR        ,       150     },
{       293*OVERSAMPLENR        ,       145     },
{       320*OVERSAMPLENR        ,       140     },
{       348*OVERSAMPLENR        ,       135     },
{       379*OVERSAMPLENR        ,       130     },
{       411*OVERSAMPLENR        ,       125     },
{       445*OVERSAMPLENR        ,       120     },
{       480*OVERSAMPLENR        ,       115     },
{       516*OVERSAMPLENR        ,       110     },
{       553*OVERSAMPLENR        ,       105     },
{       591*OVERSAMPLENR        ,       100     },
{       628*OVERSAMPLENR        ,       95      },
{       665*OVERSAMPLENR        ,       90      },
{       702*OVERSAMPLENR        ,       85      },
{       737*OVERSAMPLENR        ,       80      },
{       770*OVERSAMPLENR        ,       75      },
{       801*OVERSAMPLENR        ,       70      },
{       830*OVERSAMPLENR        ,       65      },
{       857*OVERSAMPLENR        ,       60      },
{       881*OVERSAMPLENR        ,       55      },
{       903*OVERSAMPLENR        ,       50      },
{       922*OVERSAMPLENR        ,       45      },
{       939*OVERSAMPLENR        ,       40      },
{       954*OVERSAMPLENR        ,       35      },
{       966*OVERSAMPLENR        ,       30      },
{       977*OVERSAMPLENR        ,       25      },
{       985*OVERSAMPLENR        ,       20      },
{       993*OVERSAMPLENR        ,       15      },
{       999*OVERSAMPLENR        ,       10      },
{       1004*OVERSAMPLENR       ,       5       },
{       1008*OVERSAMPLENR       ,       0       } //safety
};
#endif
#if (THERMISTORHEATER_0 == 2) || (THERMISTORHEATER_1 == 2) || (THERMISTORHEATER_2 == 2) || (THERMISTORBED == 2) //200k bed thermistor
const short temptable_2[][2] PROGMEM = {
//200k ATC Semitec 204GT-2
//Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
   {1*OVERSAMPLENR, 848},
   {30*OVERSAMPLENR, 300}, //top rating 300C
   {34*OVERSAMPLENR, 290},
   {39*OVERSAMPLENR, 280},
   {46*OVERSAMPLENR, 270},
   {53*OVERSAMPLENR, 260},
   {63*OVERSAMPLENR, 250},
   {74*OVERSAMPLENR, 240},
   {87*OVERSAMPLENR, 230},
   {104*OVERSAMPLENR, 220},
   {124*OVERSAMPLENR, 210},
   {148*OVERSAMPLENR, 200},
   {176*OVERSAMPLENR, 190},
   {211*OVERSAMPLENR, 180},
   {252*OVERSAMPLENR, 170},
   {301*OVERSAMPLENR, 160},
   {357*OVERSAMPLENR, 150},
   {420*OVERSAMPLENR, 140},
   {489*OVERSAMPLENR, 130},
   {562*OVERSAMPLENR, 120},
   {636*OVERSAMPLENR, 110},
   {708*OVERSAMPLENR, 100},
   {775*OVERSAMPLENR, 90},
   {835*OVERSAMPLENR, 80},
   {884*OVERSAMPLENR, 70},
   {924*OVERSAMPLENR, 60},
   {955*OVERSAMPLENR, 50},
   {977*OVERSAMPLENR, 40},
   {993*OVERSAMPLENR, 30},
   {1004*OVERSAMPLENR, 20},
   {1012*OVERSAMPLENR, 10},
   {1016*OVERSAMPLENR, 0},
};

#endif
#if (THERMISTORHEATER_0 == 3) || (THERMISTORHEATER_1 == 3) || (THERMISTORHEATER_2 == 3) || (THERMISTORBED == 3) //mendel-parts
const short temptable_3[][2] PROGMEM = {
                {1*OVERSAMPLENR,864},
                {21*OVERSAMPLENR,300},
                {25*OVERSAMPLENR,290},
                {29*OVERSAMPLENR,280},
                {33*OVERSAMPLENR,270},
                {39*OVERSAMPLENR,260},
                {46*OVERSAMPLENR,250},
                {54*OVERSAMPLENR,240},
                {64*OVERSAMPLENR,230},
                {75*OVERSAMPLENR,220},
                {90*OVERSAMPLENR,210},
                {107*OVERSAMPLENR,200},
                {128*OVERSAMPLENR,190},
                {154*OVERSAMPLENR,180},
                {184*OVERSAMPLENR,170},
                {221*OVERSAMPLENR,160},
                {265*OVERSAMPLENR,150},
                {316*OVERSAMPLENR,140},
                {375*OVERSAMPLENR,130},
                {441*OVERSAMPLENR,120},
                {513*OVERSAMPLENR,110},
                {588*OVERSAMPLENR,100},
                {734*OVERSAMPLENR,80},
                {856*OVERSAMPLENR,60},
                {938*OVERSAMPLENR,40},
                {986*OVERSAMPLENR,20},
                {1008*OVERSAMPLENR,0},
                {1018*OVERSAMPLENR,-20}
        };

#endif
#if (THERMISTORHEATER_0 == 4) || (THERMISTORHEATER_1 == 4) || (THERMISTORHEATER_2 == 4) || (THERMISTORBED == 4) //10k thermistor
const short temptable_4[][2] PROGMEM = {
   {1*OVERSAMPLENR, 430},
   {54*OVERSAMPLENR, 137},
   {107*OVERSAMPLENR, 107},
   {160*OVERSAMPLENR, 91},
   {213*OVERSAMPLENR, 80},
   {266*OVERSAMPLENR, 71},
   {319*OVERSAMPLENR, 64},
   {372*OVERSAMPLENR, 57},
   {425*OVERSAMPLENR, 51},
   {478*OVERSAMPLENR, 46},
   {531*OVERSAMPLENR, 41},
   {584*OVERSAMPLENR, 35},
   {637*OVERSAMPLENR, 30},
   {690*OVERSAMPLENR, 25},
   {743*OVERSAMPLENR, 20},
   {796*OVERSAMPLENR, 14},
   {849*OVERSAMPLENR, 7},
   {902*OVERSAMPLENR, 0},
   {955*OVERSAMPLENR, -11},
   {1008*OVERSAMPLENR, -35}
};
#endif

#if (THERMISTORHEATER_0 == 5) || (THERMISTORHEATER_1 == 5) || (THERMISTORHEATER_2 == 5) || (THERMISTORBED == 5) //100k ParCan thermistor (104GT-2)
const short temptable_5[][2] PROGMEM = {
// ATC Semitec 104GT-2 (Used in ParCan)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
   {1*OVERSAMPLENR, 713},
   {17*OVERSAMPLENR, 300}, //top rating 300C
   {20*OVERSAMPLENR, 290},
   {23*OVERSAMPLENR, 280},
   {27*OVERSAMPLENR, 270},
   {31*OVERSAMPLENR, 260},
   {37*OVERSAMPLENR, 250},
   {43*OVERSAMPLENR, 240},
   {51*OVERSAMPLENR, 230},
   {61*OVERSAMPLENR, 220},
   {73*OVERSAMPLENR, 210},
   {87*OVERSAMPLENR, 200},
   {106*OVERSAMPLENR, 190},
   {128*OVERSAMPLENR, 180},
   {155*OVERSAMPLENR, 170},
   {189*OVERSAMPLENR, 160},
   {230*OVERSAMPLENR, 150},
   {278*OVERSAMPLENR, 140},
   {336*OVERSAMPLENR, 130},
   {402*OVERSAMPLENR, 120},
   {476*OVERSAMPLENR, 110},
   {554*OVERSAMPLENR, 100},
   {635*OVERSAMPLENR, 90},
   {713*OVERSAMPLENR, 80},
   {784*OVERSAMPLENR, 70},
   {846*OVERSAMPLENR, 60},
   {897*OVERSAMPLENR, 50},
   {937*OVERSAMPLENR, 40},
   {966*OVERSAMPLENR, 30},
   {986*OVERSAMPLENR, 20},
   {1000*OVERSAMPLENR, 10},
   {1010*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 6) || (THERMISTORHEATER_1 == 6) || (THERMISTORHEATER_2 == 6) || (THERMISTORBED == 6) // 100k Epcos thermistor
const short temptable_6[][2] PROGMEM = {
   {1*OVERSAMPLENR, 350},
   {28*OVERSAMPLENR, 250}, //top rating 250C
   {31*OVERSAMPLENR, 245},
   {35*OVERSAMPLENR, 240},
   {39*OVERSAMPLENR, 235},
   {42*OVERSAMPLENR, 230},
   {44*OVERSAMPLENR, 225},
   {49*OVERSAMPLENR, 220},
   {53*OVERSAMPLENR, 215},
   {62*OVERSAMPLENR, 210},
   {71*OVERSAMPLENR, 205}, //fitted graphically
   {78*OVERSAMPLENR, 200}, //fitted graphically
   {94*OVERSAMPLENR, 190},
   {102*OVERSAMPLENR, 185},
   {116*OVERSAMPLENR, 170},
   {143*OVERSAMPLENR, 160},
   {183*OVERSAMPLENR, 150},
   {223*OVERSAMPLENR, 140},
   {270*OVERSAMPLENR, 130},
   {318*OVERSAMPLENR, 120},
   {383*OVERSAMPLENR, 110},
   {413*OVERSAMPLENR, 105},
   {439*OVERSAMPLENR, 100},
   {484*OVERSAMPLENR, 95},
   {513*OVERSAMPLENR, 90},
   {607*OVERSAMPLENR, 80},
   {664*OVERSAMPLENR, 70},
   {781*OVERSAMPLENR, 60},
   {810*OVERSAMPLENR, 55},
   {849*OVERSAMPLENR, 50},
   {914*OVERSAMPLENR, 45},
   {914*OVERSAMPLENR, 40},
   {935*OVERSAMPLENR, 35},
   {954*OVERSAMPLENR, 30},
   {970*OVERSAMPLENR, 25},
   {978*OVERSAMPLENR, 22},
   {1008*OVERSAMPLENR, 3},
   {1023*OVERSAMPLENR, 0}  //to allow internal 0�C
};
#endif

#if (THERMISTORHEATER_0 == 7) || (THERMISTORHEATER_1 == 7) || (THERMISTORHEATER_2 == 7) || (THERMISTORBED == 7) // 100k Honeywell 135-104LAG-J01
const short temptable_7[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {46*OVERSAMPLENR, 270}, //top rating 300C
   {50*OVERSAMPLENR, 265},
   {54*OVERSAMPLENR, 260},
   {58*OVERSAMPLENR, 255},
   {62*OVERSAMPLENR, 250},
   {67*OVERSAMPLENR, 245},
   {72*OVERSAMPLENR, 240},
   {79*OVERSAMPLENR, 235},
   {85*OVERSAMPLENR, 230},
   {91*OVERSAMPLENR, 225},
   {99*OVERSAMPLENR, 220},
   {107*OVERSAMPLENR, 215},
   {116*OVERSAMPLENR, 210},
   {126*OVERSAMPLENR, 205},
   {136*OVERSAMPLENR, 200},
   {149*OVERSAMPLENR, 195},
   {160*OVERSAMPLENR, 190},
   {175*OVERSAMPLENR, 185},
   {191*OVERSAMPLENR, 180},
   {209*OVERSAMPLENR, 175},
   {224*OVERSAMPLENR, 170},
   {246*OVERSAMPLENR, 165},
   {267*OVERSAMPLENR, 160},
   {293*OVERSAMPLENR, 155},
   {316*OVERSAMPLENR, 150},
   {340*OVERSAMPLENR, 145},
   {364*OVERSAMPLENR, 140},
   {396*OVERSAMPLENR, 135},
   {425*OVERSAMPLENR, 130},
   {460*OVERSAMPLENR, 125},
   {489*OVERSAMPLENR, 120},
   {526*OVERSAMPLENR, 115},
   {558*OVERSAMPLENR, 110},
   {591*OVERSAMPLENR, 105},
   {628*OVERSAMPLENR, 100},
   {660*OVERSAMPLENR, 95},
   {696*OVERSAMPLENR, 90},
   {733*OVERSAMPLENR, 85},
   {761*OVERSAMPLENR, 80},
   {794*OVERSAMPLENR, 75},
   {819*OVERSAMPLENR, 70},
   {847*OVERSAMPLENR, 65},
   {870*OVERSAMPLENR, 60},
   {892*OVERSAMPLENR, 55},
   {911*OVERSAMPLENR, 50},
   {929*OVERSAMPLENR, 45},
   {944*OVERSAMPLENR, 40},
   {959*OVERSAMPLENR, 35},
   {971*OVERSAMPLENR, 30},
   {981*OVERSAMPLENR, 25},
   {989*OVERSAMPLENR, 20},
   {994*OVERSAMPLENR, 15},
   {1001*OVERSAMPLENR, 10},
   {1005*OVERSAMPLENR, 5},
   {1023*OVERSAMPLENR, 0}  //to allow internal 0�C
};
#endif
#if (THERMISTORHEATER_0 == 8) || (THERMISTORHEATER_1 == 8) || (THERMISTORHEATER_2 == 8) || (THERMISTORBED == 8)
// 100k 0603 SMD Vishay NTCS0603E3104FXT (4.7k pullup)
const short temptable_8[][2] PROGMEM = {
   {1*OVERSAMPLENR, 704},
   {54*OVERSAMPLENR, 216},
   {107*OVERSAMPLENR, 175},
   {160*OVERSAMPLENR, 152},
   {213*OVERSAMPLENR, 137},
   {266*OVERSAMPLENR, 125},
   {319*OVERSAMPLENR, 115},
   {372*OVERSAMPLENR, 106},
   {425*OVERSAMPLENR, 99},
   {478*OVERSAMPLENR, 91},
   {531*OVERSAMPLENR, 85},
   {584*OVERSAMPLENR, 78},
   {637*OVERSAMPLENR, 71},
   {690*OVERSAMPLENR, 65},
   {743*OVERSAMPLENR, 58},
   {796*OVERSAMPLENR, 50},
   {849*OVERSAMPLENR, 42},
   {902*OVERSAMPLENR, 31},
   {955*OVERSAMPLENR, 17},
   {1008*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 9) || (THERMISTORHEATER_1 == 9) || (THERMISTORHEATER_2 == 9) || (THERMISTORBED == 9)
// 100k GE Sensing AL03006-58.2K-97-G1 (4.7k pullup)
const short temptable_9[][2] PROGMEM = {
	{1*OVERSAMPLENR, 936},
	{36*OVERSAMPLENR, 300},
	{71*OVERSAMPLENR, 246},
	{106*OVERSAMPLENR, 218},
	{141*OVERSAMPLENR, 199},
	{176*OVERSAMPLENR, 185},
	{211*OVERSAMPLENR, 173},
	{246*OVERSAMPLENR, 163},
	{281*OVERSAMPLENR, 155},
	{316*OVERSAMPLENR, 147},
	{351*OVERSAMPLENR, 140},
	{386*OVERSAMPLENR, 134},
	{421*OVERSAMPLENR, 128},
	{456*OVERSAMPLENR, 122},
	{491*OVERSAMPLENR, 117},
	{526*OVERSAMPLENR, 112},
	{561*OVERSAMPLENR, 107},
	{596*OVERSAMPLENR, 102},
	{631*OVERSAMPLENR, 97},
	{666*OVERSAMPLENR, 92},
	{701*OVERSAMPLENR, 87},
	{736*OVERSAMPLENR, 81},
	{771*OVERSAMPLENR, 76},
	{806*OVERSAMPLENR, 70},
	{841*OVERSAMPLENR, 63},
	{876*OVERSAMPLENR, 56},
	{911*OVERSAMPLENR, 48},
	{946*OVERSAMPLENR, 38},
	{981*OVERSAMPLENR, 23},
	{1005*OVERSAMPLENR, 5},
	{1016*OVERSAMPLENR, 0}
};
#endif
#if (THERMISTORHEATER_0 == 10) || (THERMISTORHEATER_1 == 10) || (THERMISTORHEATER_2 == 10) || (THERMISTORBED == 10)
// 100k RS thermistor 198-961 (4.7k pullup)
const short temptable_10[][2] PROGMEM = {
   {1*OVERSAMPLENR, 929},
   {36*OVERSAMPLENR, 299},
   {71*OVERSAMPLENR, 246},
   {106*OVERSAMPLENR, 217},
   {141*OVERSAMPLENR, 198},
   {176*OVERSAMPLENR, 184},
   {211*OVERSAMPLENR, 173},
   {246*OVERSAMPLENR, 163},
   {281*OVERSAMPLENR, 154},
   {316*OVERSAMPLENR, 147},
   {351*OVERSAMPLENR, 140},
   {386*OVERSAMPLENR, 134},
   {421*OVERSAMPLENR, 128},
   {456*OVERSAMPLENR, 122},
   {491*OVERSAMPLENR, 117},
   {526*OVERSAMPLENR, 112},
   {561*OVERSAMPLENR, 107},
   {596*OVERSAMPLENR, 102},
   {631*OVERSAMPLENR, 97},
   {666*OVERSAMPLENR, 91},
   {701*OVERSAMPLENR, 86},
   {736*OVERSAMPLENR, 81},
   {771*OVERSAMPLENR, 76},
   {806*OVERSAMPLENR, 70},
   {841*OVERSAMPLENR, 63},
   {876*OVERSAMPLENR, 56},
   {911*OVERSAMPLENR, 48},
   {946*OVERSAMPLENR, 38},
   {981*OVERSAMPLENR, 23},
   {1005*OVERSAMPLENR, 5},
   {1016*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 51) || (THERMISTORHEATER_1 == 51) || (THERMISTORHEATER_2 == 51) || (THERMISTORBED == 51)
// 100k EPCOS (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee.
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: Twice the resolution and better linearity from 150C to 200C
const short temptable_51[][2] PROGMEM = {
   {1*OVERSAMPLENR, 350},
   {190*OVERSAMPLENR, 250}, //top rating 250C
   {203*OVERSAMPLENR, 245},
   {217*OVERSAMPLENR, 240},
   {232*OVERSAMPLENR, 235},
   {248*OVERSAMPLENR, 230},
   {265*OVERSAMPLENR, 225},
   {283*OVERSAMPLENR, 220},
   {302*OVERSAMPLENR, 215},
   {322*OVERSAMPLENR, 210},
   {344*OVERSAMPLENR, 205},
   {366*OVERSAMPLENR, 200},
   {390*OVERSAMPLENR, 195},
   {415*OVERSAMPLENR, 190},
   {440*OVERSAMPLENR, 185},
   {467*OVERSAMPLENR, 180},
   {494*OVERSAMPLENR, 175},
   {522*OVERSAMPLENR, 170},
   {551*OVERSAMPLENR, 165},
   {580*OVERSAMPLENR, 160},
   {609*OVERSAMPLENR, 155},
   {638*OVERSAMPLENR, 150},
   {666*OVERSAMPLENR, 145},
   {695*OVERSAMPLENR, 140},
   {722*OVERSAMPLENR, 135},
   {749*OVERSAMPLENR, 130},
   {775*OVERSAMPLENR, 125},
   {800*OVERSAMPLENR, 120},
   {823*OVERSAMPLENR, 115},
   {845*OVERSAMPLENR, 110},
   {865*OVERSAMPLENR, 105},
   {884*OVERSAMPLENR, 100},
   {901*OVERSAMPLENR, 95},
   {917*OVERSAMPLENR, 90},
   {932*OVERSAMPLENR, 85},
   {944*OVERSAMPLENR, 80},
   {956*OVERSAMPLENR, 75},
   {966*OVERSAMPLENR, 70},
   {975*OVERSAMPLENR, 65},
   {982*OVERSAMPLENR, 60},
   {989*OVERSAMPLENR, 55},
   {995*OVERSAMPLENR, 50},
   {1000*OVERSAMPLENR, 45},
   {1004*OVERSAMPLENR, 40},
   {1007*OVERSAMPLENR, 35},
   {1010*OVERSAMPLENR, 30},
   {1013*OVERSAMPLENR, 25},
   {1015*OVERSAMPLENR, 20},
   {1017*OVERSAMPLENR, 15},
   {1018*OVERSAMPLENR, 10},
   {1019*OVERSAMPLENR, 5},
   {1020*OVERSAMPLENR, 0},
   {1021*OVERSAMPLENR, -5}
};
#endif

#if (THERMISTORHEATER_0 == 52) || (THERMISTORHEATER_1 == 52) || (THERMISTORHEATER_2 == 52) || (THERMISTORBED == 52) 
// 200k ATC Semitec 204GT-2 (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_52[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {125*OVERSAMPLENR, 300}, //top rating 300C
   {142*OVERSAMPLENR, 290},
   {162*OVERSAMPLENR, 280},
   {185*OVERSAMPLENR, 270},
   {211*OVERSAMPLENR, 260},
   {240*OVERSAMPLENR, 250},
   {274*OVERSAMPLENR, 240},
   {312*OVERSAMPLENR, 230},
   {355*OVERSAMPLENR, 220},
   {401*OVERSAMPLENR, 210},
   {452*OVERSAMPLENR, 200},
   {506*OVERSAMPLENR, 190},
   {563*OVERSAMPLENR, 180},
   {620*OVERSAMPLENR, 170},
   {677*OVERSAMPLENR, 160},
   {732*OVERSAMPLENR, 150},
   {783*OVERSAMPLENR, 140},
   {830*OVERSAMPLENR, 130},
   {871*OVERSAMPLENR, 120},
   {906*OVERSAMPLENR, 110},
   {935*OVERSAMPLENR, 100},
   {958*OVERSAMPLENR, 90},
   {976*OVERSAMPLENR, 80},
   {990*OVERSAMPLENR, 70},
   {1000*OVERSAMPLENR, 60},
   {1008*OVERSAMPLENR, 50},
   {1013*OVERSAMPLENR, 40},
   {1017*OVERSAMPLENR, 30},
   {1019*OVERSAMPLENR, 20},
   {1021*OVERSAMPLENR, 10},
   {1022*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 55) || (THERMISTORHEATER_1 == 55) || (THERMISTORHEATER_2 == 55) || (THERMISTORBED == 55) 
// 100k ATC Semitec 104GT-2 (Used on ParCan) (WITH 1kohm RESISTOR FOR PULLUP, R9 ON SANGUINOLOLU! NOT FOR 4.7kohm PULLUP! THIS IS NOT NORMAL!)
// Verified by linagee. Source: http://shop.arcol.hu/static/datasheets/thermistors.pdf
// Calculated using 1kohm pullup, voltage divider math, and manufacturer provided temp/resistance
// Advantage: More resolution and better linearity from 150C to 200C
const short temptable_55[][2] PROGMEM = {
   {1*OVERSAMPLENR, 500},
   {76*OVERSAMPLENR, 300},
   {87*OVERSAMPLENR, 290},
   {100*OVERSAMPLENR, 280},
   {114*OVERSAMPLENR, 270},
   {131*OVERSAMPLENR, 260},
   {152*OVERSAMPLENR, 250},
   {175*OVERSAMPLENR, 240},
   {202*OVERSAMPLENR, 230},
   {234*OVERSAMPLENR, 220},
   {271*OVERSAMPLENR, 210},
   {312*OVERSAMPLENR, 200},
   {359*OVERSAMPLENR, 190},
   {411*OVERSAMPLENR, 180},
   {467*OVERSAMPLENR, 170},
   {527*OVERSAMPLENR, 160},
   {590*OVERSAMPLENR, 150},
   {652*OVERSAMPLENR, 140},
   {713*OVERSAMPLENR, 130},
   {770*OVERSAMPLENR, 120},
   {822*OVERSAMPLENR, 110},
   {867*OVERSAMPLENR, 100},
   {905*OVERSAMPLENR, 90},
   {936*OVERSAMPLENR, 80},
   {961*OVERSAMPLENR, 70},
   {979*OVERSAMPLENR, 60},
   {993*OVERSAMPLENR, 50},
   {1003*OVERSAMPLENR, 40},
   {1010*OVERSAMPLENR, 30},
   {1015*OVERSAMPLENR, 20},
   {1018*OVERSAMPLENR, 10},
   {1020*OVERSAMPLENR, 0}
};
#endif

#if (THERMISTORHEATER_0 == 56) || (THERMISTORHEATER_1 == 56) || (THERMISTORHEATER_2 == 56) || (THERMISTORBED == 56) 
// Thermistor lookup table for Marlin
// ./createTemperatureLookup.py --rp=4520 --t1=20.0:121500.0 --t2=150.0:1256.0 --t3=250.0:175.0 --num-temps=72
const short temptable_56[][2] PROGMEM = {
   {164, 350},
   {174, 345},
   {185, 340},
   {196, 335},
   {208, 330},
   {222, 325},
   {236, 320},
   {252, 315},
   {268, 310},
   {287, 305},
   {306, 300},
   {328, 295},
   {351, 290},
   {377, 285},
   {404, 280},
   {434, 275},
   {467, 270},
   {504, 265},
   {543, 260},
   {586, 255},
   {634, 250},
   {686, 245},
   {743, 240},
   {806, 235},
   {876, 230},
   {953, 225},
   {1037, 220},
   {1131, 215},
   {1234, 210},
   {1348, 205},
   {1474, 200},
   {1614, 195},
   {1769, 190},
   {1940, 185},
   {2129, 180},
   {2339, 175},
   {2570, 170},
   {2825, 165},
   {3106, 160},
   {3415, 155},
   {3753, 150},
   {4123, 145},
   {4526, 140},
   {4962, 135},
   {5431, 130},
   {5934, 125},
   {6468, 120},
   {7032, 115},
   {7621, 110},
   {8231, 105},
   {8855, 100},
   {9487, 95},
   {10119, 90},
   {10743, 85},
   {11350, 80},
   {11934, 75},
   {12487, 70},
   {13004, 65},
   {13480, 60},
   {13913, 55},
   {14301, 50},
   {14644, 45},
   {14944, 40},
   {15204, 35},
   {15425, 30},
   {15612, 25},
   {15768, 20},
   {15897, 15},
   {16002, 10},
   {16087, 5},
   {16156, 0}
};

#endif

#if (THERMISTORHEATER_0 == 57) || (THERMISTORHEATER_1 == 57) || (THERMISTORHEATER_2 == 57) || (THERMISTORBED == 57) 
// Thermistor lookup table for Marlin
// ./createTemperatureLookupMarlin.py --rp=4680 --t1=21.4:106300 --t2=187:1023 --t3=248:281 --num-temps=72
// thermistor table for  extruder
const short temptable_57[][2] PROGMEM = {
  {159, 340},
  {172, 335},
  {186, 330},
  {202, 325},
  {219, 320},
  {238, 315},
  {258, 310},
  {281, 305},
  {306, 300},
  {333, 295},
  {363, 209},
  {396, 285},
  {432, 280},
  {472, 275},
  {516, 270},
  {565, 265},
  {618, 260},
  {677, 255},
  {742, 240},
  {814, 245},
  {894, 240},
  {981, 235},
  {1078, 230},
  {1184, 225},
  {1302, 220},
  {1432, 215},
  {1574, 210},
  {1732, 205},
  {1904, 200},
  {2094, 195},
  {2302, 190},
  {2530, 185},
  {2779, 180},
  {3050, 175},
  {3344, 170},
  {3662, 165},
  {4006, 160},
  {4375, 155},
  {4770, 150},
  {5190, 145},
  {5634, 140},
  {6101, 135},
  {6589, 130},
  {7095, 125},
  {7617, 120},
  {8149, 115},
  {8689, 110},
  {9230, 105},
  {9770, 100},
  {10302, 95},
  {11810, 90},
  {12271, 85},
  {12705, 80},
  {13111, 75},
  {13487, 70},
  {13833, 65},
  {14149, 60},
  {14435, 55},
  {14693, 50},
  {14923, 45},
  {15127, 40},
  {15308, 35},
  {15466, 30},
  {15604, 25},
  {15725, 20},
  {15828, 15},
  {15918, 10},
  {15994, 5},
  {16060, 0}
};

#endif

#if (THERMISTORHEATER_0 == 58) || (THERMISTORHEATER_1 == 58) || (THERMISTORHEATER_2 == 58) || (THERMISTORBED == 58) 
// Thermistor lookup table for Marlin
// ./createTemperatureLookup.py --rp=4670 --t1=21.7:110700.0 --t2=190.0:623.0 --t3=259.0:192.0 --num-temps=72
// thermistor table for  heatbed
const short temptable_58[][2] PROGMEM = {
  {198, 350},
  {210, 345},
  {223, 340},
  {236, 335},
  {251, 330},
  {267, 325},
  {284, 320},
  {303, 315},
  {323, 310},
  {345, 305},
  {369, 300},
  {395, 295},
  {423, 290},
  {453, 285},
  {486, 280},
  {522, 275},
  {562, 270},
  {605, 265},
  {652, 260},
  {704, 255},
  {760, 250},
  {822, 245},
  {890, 240},
  {964, 235},
  {1046, 230},
  {1136, 225},
  {1235, 220},
  {1344, 215},
  {1464, 210},
  {1597, 205},
  {1743, 200},
  {1903, 195},
  {2080, 190},
  {2275, 185},
  {2489, 180},
  {2725, 175},
  {2983, 170},
  {3267, 165},
  {3576, 160},
  {3913, 155},
  {4280, 150},
  {4676, 145},
  {5104, 140},
  {5561, 135},
  {6049, 130},
  {6565, 125},
  {7108, 120},
  {7673, 115},
  {8256, 110},
  {8852, 105},
  {9455, 100},
  {10058, 95},
  {10654, 90},
  {11237, 85},
  {11799, 80},
  {12334, 75},
  {12838, 70},
  {13306, 65},
  {13734, 60},
  {14123, 55},
  {14471, 50},
  {14779, 45},
  {15048, 40},
  {15282, 35},
  {15481, 30},
  {15651, 25},
  {15793, 20},
  {15912, 15},
  {16010, 10},
  {16090, 5},
  {16154, 0}
 };

#endif

#define _TT_NAME(_N) temptable_ ## _N
#define TT_NAME(_N) _TT_NAME(_N)

#ifdef THERMISTORHEATER_0
# define HEATER_0_TEMPTABLE TT_NAME(THERMISTORHEATER_0)
# define HEATER_0_TEMPTABLE_LEN (sizeof(HEATER_0_TEMPTABLE)/sizeof(*HEATER_0_TEMPTABLE))
#else
# ifdef HEATER_0_USES_THERMISTOR
#  error No heater 0 thermistor table specified
# else  // HEATER_0_USES_THERMISTOR
#  define HEATER_0_TEMPTABLE NULL
#  define HEATER_0_TEMPTABLE_LEN 0
# endif // HEATER_0_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_0_RAW_HI_TEMP
# ifdef HEATER_0_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_0_RAW_HI_TEMP 0
#  define HEATER_0_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_0_RAW_HI_TEMP 16383
#  define HEATER_0_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORHEATER_1
# define HEATER_1_TEMPTABLE TT_NAME(THERMISTORHEATER_1)
# define HEATER_1_TEMPTABLE_LEN (sizeof(HEATER_1_TEMPTABLE)/sizeof(*HEATER_1_TEMPTABLE))
#else
# ifdef HEATER_1_USES_THERMISTOR
#  error No heater 1 thermistor table specified
# else  // HEATER_1_USES_THERMISTOR
#  define HEATER_1_TEMPTABLE NULL
#  define HEATER_1_TEMPTABLE_LEN 0
# endif // HEATER_1_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_1_RAW_HI_TEMP
# ifdef HEATER_1_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_1_RAW_HI_TEMP 0
#  define HEATER_1_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_1_RAW_HI_TEMP 16383
#  define HEATER_1_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORHEATER_2
# define HEATER_2_TEMPTABLE TT_NAME(THERMISTORHEATER_2)
# define HEATER_2_TEMPTABLE_LEN (sizeof(HEATER_2_TEMPTABLE)/sizeof(*HEATER_2_TEMPTABLE))
#else
# ifdef HEATER_2_USES_THERMISTOR
#  error No heater 2 thermistor table specified
# else  // HEATER_2_USES_THERMISTOR
#  define HEATER_2_TEMPTABLE NULL
#  define HEATER_2_TEMPTABLE_LEN 0
# endif // HEATER_2_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_2_RAW_HI_TEMP
# ifdef HEATER_2_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_2_RAW_HI_TEMP 0
#  define HEATER_2_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_2_RAW_HI_TEMP 16383
#  define HEATER_2_RAW_LO_TEMP 0
# endif
#endif

#ifdef THERMISTORBED
# define BEDTEMPTABLE TT_NAME(THERMISTORBED)
# define BEDTEMPTABLE_LEN (sizeof(BEDTEMPTABLE)/sizeof(*BEDTEMPTABLE))
#else
# ifdef BED_USES_THERMISTOR
#  error No bed thermistor table specified
# endif // BED_USES_THERMISTOR
#endif

//Set the high and low raw values for the heater, this indicates which raw value is a high or low temperature
#ifndef HEATER_BED_RAW_HI_TEMP
# ifdef BED_USES_THERMISTOR   //In case of a thermistor the highest temperature results in the lowest ADC value
#  define HEATER_BED_RAW_HI_TEMP 0
#  define HEATER_BED_RAW_LO_TEMP 16383
# else                          //In case of an thermocouple the highest temperature results in the highest ADC value
#  define HEATER_BED_RAW_HI_TEMP 16383
#  define HEATER_BED_RAW_LO_TEMP 0
# endif
#endif

#endif //THERMISTORTABLES_H_
