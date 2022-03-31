# Name of the project
PROJECT_NAME = GAME_QUIZ

#Doxyfile folder
DOC = documentation

#All source code files
SRC = game.c\
src/game_operations.c

#All test source files
TEST_SRC = src/game_operations.c\
test/test_game_operations.c\
unity/unity.c

TEST_OUTPUT = Test_a.out

#All include folders with header files
INC = -Iinc\
-Iunity\

#Project Output Name
PROJECT_OUTPUT = game.out

#Document files
DOCUMENTATION_OUTPUT = documentation/html

#Default target built
$(PROJECT_NAME):all


Build:
	gcc game_v1.c test_game.c unity/unity.c -Iunity

Run:
	./a.out