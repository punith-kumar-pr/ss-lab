%{
#include <stdio.h>
%}
%token VAR
%%
exp:VAR { printf("Valid variable"); return 0;};
%%
int yyerror(){
    printf("Invalid variable\n");
    return 0;
}
int main(){
    printf("Enter a variable\n");
    yyparse();
    return 0;
}