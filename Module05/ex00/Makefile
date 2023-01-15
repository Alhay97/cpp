NAME = BUREAUCRAT
SOURCES = Bureaucrat.cpp\
			main.cpp

OBJECTS = $(SOURCES:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -Wno-shadow -std=c++98
CXX = c++
${NAME}: $(OBJECTS)
		$(CXX) $(CXXFLAGS)  $(OBJECTS) -o BUREAUCRAT
all : ${NAME}
clean :
		rm -f ${OBJECTS}
fclean : clean
		rm -f ${NAME}
re : fclean all

.PHONY:	all clean fclean re header
