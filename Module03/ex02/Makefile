NAME = FragTrap
SOURCES = ClapTrap.cpp\
			ScavTrap.cpp\
			FragTrap.cpp\
			main.cpp

OBJECTS = $(SOURCES:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
${NAME}: $(OBJECTS)
		$(CXX) $(CXXFLAGS)  $(OBJECTS) -o FragTrap
all : ${NAME}
clean :
		rm -f ${OBJECTS}
fclean : clean
		rm -f ${NAME}
re : fclean all

.PHONY:	all clean fclean re header
