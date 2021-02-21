CCX = gcc
CC = g++
MAIN := main
MAIN_NAME := MarriageAgencyTest
BUILD_DIR := ./build
STATIC_LIB := lib_static
DYNAMIC_LIB := lib_dynamic

SRC := Client.cpp #MarriageAgencyTest.cpp
OBJS := $(SRC:%=$(BUILD_DIR)/%.o)

#important------------------------
#@gcc -o ./build/main ./build/MarriageAgencyTest.o -L./build -l_static
#------------------------------------


#
#$(BUILD_DIR)/$(MAIN) : $(OBJS)
#	#@$(CC) $(OBJS) -o $@
#	@$(CC) $^ -o $@
collect_static : $(BUILD_DIR)/$(MAIN)_s

# collecting main and static library
$(BUILD_DIR)/$(MAIN)_s : $(BUILD_DIR)/$(MAIN_NAME).o $(BUILD_DIR)/$(STATIC_LIB).a
#	@$(CCX) -o $@ $< -L. -l: $(BUILD_DIR)/$(STATIC_LIB).a
	@gcc -o ./build/main ./build/MarriageAgencyTest.o -L./build -l_static

# creating a static library:
$(BUILD_DIR)/$(STATIC_LIB).a : $(OBJS)
	@ar cr $@ $<

collect_dynamic : $(BUILD_DIR)/$(MAIN)_d
# collecting main and dynamic library
$(BUILD_DIR)/$(MAIN)_d : $(MAIN_NAME).cpp $(BUILD_DIR)/$(DYNAMIC_LIB).so
	@$(CCX) $< -o $@ -L $(BUILD_DIR) -l_dynamic

# creating a dynamic library:
$(BUILD_DIR)/$(DYNAMIC_LIB).so : $(BUILD_DIR)/Client.cpp.o
	$(CCX) $^ -shared  -o $@ -lc

#test : $(BUILD_DIR)/Client.cpp.o
$(BUILD_DIR)/Client.cpp.o : Client.cpp
	@$(CXX) -c -fPIC $< -o $@

# compiling main file
$(BUILD_DIR)/$(MAIN_NAME).o: $(MAIN_NAME).cpp
	@$(CXX)  -c $< -o $@

# creating object files:
#$(BUILD_DIR)/%.cpp.o: %.cpp
#	#@mkdir -p $(dir $@)
#	#@$(CCX) -c *.cpp
#	@$(CXX)  -c $< -o $@

clean:
	@rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/*.a $(BUILD_DIR)/*.so $(BUILD_DIR)/$(MAIN)

clean_src:
	@rm -f *.o *.a *.so

run:
	@./$(BUILD_DIR)/$(MAIN)

# ll: library.cpp main.cpp
  #
  #In this case:
  #
  #    $@ evaluates to all
  #    $< evaluates to library.cpp
  #    $^ evaluates to library.cpp main.cpp
