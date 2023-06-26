%{
#include "y.tab.h"
%}
%%
[_a-zA-Z][_a-zA-Z0-9]* {return VAR;}
. {return yytext[0];}
\n return 0;
%%
int yywrap() { }