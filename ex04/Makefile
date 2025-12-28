SRCS = main.cpp FileReplacer.cpp

NAME = replace_file

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:%.cpp=%.o)

DEPS = FileReplacer.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $^ $(CXXFLAGS) -o $@

%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
