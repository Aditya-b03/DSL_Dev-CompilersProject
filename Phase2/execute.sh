

input_file="$1"
flex lex.l
yacc -d yacc.y
gcc lex.yy.c y.tab.c
./a.out "$input_file"

