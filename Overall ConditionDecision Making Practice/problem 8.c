#include<stdio.h>
 int main (){
     int population=80000,population_man,population_women,population_literacy,man_literacy,woman_literacy,man_illiterate,woman_illiterate;

    population_man=population*0.52;
    population_women=population-population_man;
    population_literacy=population*0.48;
    man_literacy=population*0.35;
    woman_literacy=population_literacy-man_literacy;
    man_illiterate=population_man-man_literacy;
    woman_illiterate=population_women-woman_literacy;

    printf("illiterate men : %d",man_illiterate);
    printf("\nilliterate women : %d",woman_illiterate);

 return 0;
 }

