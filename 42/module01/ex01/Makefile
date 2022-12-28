NAME = ZombieHORDE
SOURCES =Zombie.cpp \
			zombieHorde.cpp\
			main.cpp\


OBJECTS = $(SOURCES:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
${NAME}: $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o ZombieHORDE $(OBJECTS)
all : ${NAME}
bonus :
clean :
		rm -f ${OBJECTS}
fclean : clean
		rm -f ${NAME}
re : fclean all
