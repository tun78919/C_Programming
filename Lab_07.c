/*Thompson M. Dillon Section 008
Lab 07 3/23/23*/
// Preprocessor Directives
#include <stdio.h>
// Main function
int main(void){
    FILE* ptr;
    char ch;
    ptr = fopen("data.txt", "r");
    if (NULL == ptr){
        printf("File can not be opened \n");
    }
    int plate_appearances = 0, at_bats, hit = 0, out = 0;
    do{
        ch = fgetc(ptr);
        // Was going to include below line of code if we had to give the nummber of plate appearances, but not required for submission
        // plate_appearances += 1;
        if (ch == 'H'){
            hit += 1;
        }
        else if (ch == 'O'){
            out += 1;
        } 
    } while(ch != EOF);
    fclose(ptr);
    float batting_average, hit_float, out_float;
    hit_float = hit * 1.0;
    out_float = out * 1.0;
    at_bats = hit + out;
    batting_average = hit_float / (hit_float + out_float);
    printf("Number of times at the plate:  Official at-bats: %d; Hits: %d; Batting average (rounded to 3 decimal places): %.3lf", at_bats, hit, batting_average);
    return 0; 
}