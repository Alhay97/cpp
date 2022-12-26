NAME = ALHAI_PHONE
SOURCES =PhoneBook.cpp \
			contact.cpp
OBJECTS = $(SOURCES:.cpp=.o)
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
${NAME}: $(OBJECTS)
		$(CXX) $(CXXFLAGS) -o BASIC_PHONEBOOK $(OBJECTS)
all : ${NAME}
bonus :
clean :
		rm -f ${OBJECTS}
fclean : clean
		rm -f ${NAME}
re : fclean all
