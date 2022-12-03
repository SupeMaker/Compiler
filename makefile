CC = gcc
OUT = calc
OBJ = lex.yy.o y.tab.o symbol.o ASTNode.o
SCANNER = compiler.l
PARSER = compiler.y
TESTFILE = Test/test2.txt
OUTPUTFILE = outputFile.txt

build: $(OUT)

run: $(OUT)
	./$(OUT) < $(TESTFILE) > $(OUTPUTFILE)

clean:
	rm -f *.o lex.yy.c y.tab.c y.tab.h y.output $(OUT) test.asm

# 这里编译生成可执行文件
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


# 编译生成目标文件
# 正常的语句为
# symbol.o:	symbol.c
# 		gcc -c symbol.c

# fout: compiler.l compiler.y symbol.h ASTNode.h
# 	bison -d compiler.y
# 	flex -o compiler.lex.c compiler.l
# 	cc -o $@ symbol.c ASTNode.c compiler.tab.c compiler.lex.c
# 	./fout < Test/test.txt > outputFile.txt