CC = clang++
CFLAGS = -Wall -Wextra -std=c++98

EXECUTABLE_FILE = mod-01-ex-00

SOURCE_EXT =	.cc
OBJECT_EXT =	.o
INCLUDE_EXT =	.hpp

SOURCE_NAME =	workermanager$(SOURCE_EXT) \
		toolmanager$(SOURCE_EXT) \
		main$(SOURCE_EXT)

INCLUDE_NAME =	workshop$(INCLUDE_EXT) \
		workermanager$(INCLUDE_EXT) \
		worker$(INCLUDE_EXT) \
		toolmanager$(INCLUDE_EXT) \
		statistic$(INCLUDE_EXT) \
		position$(INCLUDE_EXT) \
		tool$(INCLUDE_EXT) \
		shovel$(INCLUDE_EXT) \
		hammer$(INCLUDE_EXT) \
		toolproxy$(INCLUDE_EXT) \
		workerproxy$(INCLUDE_EXT)

SOURCE_FILES =	$(foreach P, $(SOURCE_NAME), $(shell find . -name "$(P)"))
INCLUDE_FILES =	$(addprefix -I,$(foreach P, $(INCLUDE_NAME), $(shell find . -name "$(P)")))
OBJECT_FILES =	$(SOURCE_FILES:$(SOURCE_EXT)=$(OBJECT_EXT))

all: $(EXECUTABLE_FILE)

$(EXECUTABLE_FILE): $(OBJECT_FILES)
	$(CC) -o $(EXECUTABLE_FILE) $^

%$(OBJECT_EXT): %$(SOURCE_EXT)
	$(CC) $(CFLAGS) $(INCLUDE_FILES) -c -o $@ $<

clean:
	rm -rf $(OBJECT_FILES)

fclean: clean
	rm -rf $(EXECUTABLE_FILE)

re: fclean all