LIG = g++ -Wall -ansi -pedantic -o 
MAINC = src/main.cpp
FIGC = src/fig.cpp
CALC = src/cal.cpp
MAINO = build/main.o
FIGO = build/fig.o
CALO = build/cal.o


lab1: $(MAINO) $(FIGO)  $(CALO) 
	$(LIG) bin/lab1 $(MAINO) $(CALO) $(FIGO)

$(MAINO): $(MAINC) include/fig.h
	g++ -c $(MAINC) -Iinclude -o $(MAINO)

$(FIGO): $(FIGC) include/cal.h include/fig.h 
	g++ -c $(FIGC) -Iinclude -o $(FIGO) 

$(CALO): $(CALC) include/cal.h
	g++ -c $(CALC) -Iinclude -o $(CALO)
	
clear: 
	rm -f build/*.o
