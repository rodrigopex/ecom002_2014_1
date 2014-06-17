dobj:
	@echo Gerando os arquivos objeto
	gcc src/a.c -c -fPIC
	gcc src/b.c -c -fPIC
    
sobj:
	@echo Gerando os arquivos objeto
	gcc src/a.c -c
	gcc src/b.c -c
    
dlib: dobj
	@echo Gerando o lib final
	gcc -shared -Wl -o libab.dylib a.o b.o

slib: sobj
	@echo Gerando o lib final
	ar rcs libAB.a a.o b.o
	rm a.o b.o

dall: dlib
	gcc main.c -L. -lab -o test

all: slib
	@echo Gerando o binario final
	gcc main.c libAB.a -o test

clean:
	@echo Limpando pasta do projeto
	rm libAB.a test
