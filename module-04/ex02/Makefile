CC = clang++
CFLAGS = # -Wall -Wextra -Werror

EXECUTABLE_FILE = ex02

SOURCE_EXT =	.cpp
OBJECT_EXT =	.o
INCLUDE_EXT =	.hpp

SOURCE_NAME =	main$(SOURCE_EXT) \
		Form$(SOURCE_EXT)

INCLUDE_NAME =	Form$(INCLUDE_EXT) \
		CourseFinishedForm$(INCLUDE_EXT) \
		NeedCourseCreationForm$(INCLUDE_EXT) \
		NeedMoreClassRoomForm$(INCLUDE_EXT) \
		SubscriptionToCourseForm$(INCLUDE_EXT) \
		Headmaster$(INCLUDE_EXT) \
		Person$(INCLUDE_EXT) \
		Professor$(INCLUDE_EXT) \
		Secretary$(INCLUDE_EXT) \
		Staff$(INCLUDE_EXT) \
		Student$(INCLUDE_EXT) \
		Classroom$(INCLUDE_EXT) \
		Courtyard$(INCLUDE_EXT) \
		HeadmasterOffice$(INCLUDE_EXT) \
		Room$(INCLUDE_EXT) \
		SecretarialOffice$(INCLUDE_EXT) \
		StaffRestRoom$(INCLUDE_EXT) \
		containerAdapter$(INCLUDE_EXT) \
		Course$(INCLUDE_EXT) \
		datas$(INCLUDE_EXT) \
		singletons$(INCLUDE_EXT) \

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