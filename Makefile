NAME = ircserv

SRCS = main.cpp \
Server.cpp \
Client.cpp \

CXX = c++

MY_OBJECTS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(MY_OBJECTS)
	$(CXX) $(CXXFLAGS) $(MY_OBJECTS) -o $(NAME)

RM = rm -f

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	${RM} ${NAME}

re:	fclean all