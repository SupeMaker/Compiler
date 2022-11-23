CC = gcc
OUT = calc
OBJ = lex.yy.o y.tab.o symbol.o ASTNode.o
SCANNER = compiler.l
PARSER = compiler.y
TESTFILE = Test/test.txt
OUTPUTFILE = outputFile.txt

build: $(OUT)

run: $(OUT)
	./$(OUT) < $(TESTFILE) > $(OUTPUTFILE)

clean:
	rm -f *.o lex.yy.c y.tab.c y.tab.h y.output $(OUT) test.asm

$(OUT): $(OBJ)
	$(CC) -o $(OUT) $(OBJ)

lex.yy.c: $(SCANNER) y.tab.c
	flex $<

y.tab.c: $(PARSER)
	bison -vdty -Wno-yacc $<

symbol.o: symbol.c
	$(CC) -c $<

ASTNode.o: ASTNode.c
	$(CC) -c $<

# fout: compiler.l compiler.y symbol.h ASTNode.h
# 	bison -d compiler.y
# 	flex -o compiler.lex.c compiler.l
# 	cc -o $@ symbol.c ASTNode.c compiler.tab.c compiler.lex.c
# 	./fout < Test/test.txt > outputFile.txt