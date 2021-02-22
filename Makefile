CCX = g++
MAIN := main
MAIN_NAME := MarriageAgencyTest
BUILD_DIR := ./build
STATIC_LIB := lib_static
DYNAMIC_LIB := lib_dynamic

SRC := Client.cpp #MarriageAgencyTest.cpp
OBJS := $(SRC:%=$(BUILD_DIR)/%.o)

collect_static : $(BUILD_DIR)/$(MAIN)_s

# collecting main and static library
$(BUILD_DIR)/$(MAIN)_s : $(BUILD_DIR)/$(MAIN_NAME).o $(BUILD_DIR)/$(STATIC_LIB).a
	@$(CCX) -o $@ $< -L$(BUILD_DIR) -l_static

# compiling main file
$(BUILD_DIR)/$(MAIN_NAME).o: $(MAIN_NAME).cpp
	@$(CXX)  -c $< -o $@

# creating a static library:
$(BUILD_DIR)/$(STATIC_LIB).a : $(OBJS)
	@ar crs $@ $^

collect_dynamic : $(BUILD_DIR)/$(MAIN)_d
# collecting main and dynamic library
$(BUILD_DIR)/$(MAIN)_d : $(MAIN_NAME).cpp $(BUILD_DIR)/$(DYNAMIC_LIB).so
	@$(CCX) $< -o $@ -L $(BUILD_DIR) -l_dynamic

# creating a dynamic library:
$(BUILD_DIR)/$(DYNAMIC_LIB).so : $(OBJS)#$(BUILD_DIR)/Client.cpp
	$(CCX) $^ -shared  -o $@ -lc

# compile files
$(BUILD_DIR)/%.cpp.o : %.cpp
	@$(CXX) -c -fPIC $< -o $@



clean:
	@rm -f *.o 
	@rm -f *.c
	@rm main
client: Client.cpp MarriageAgencyTest.cpp
	@g++ -c Client.cpp MarriageAgencyTest.cpp
	@g++ -o main Client.o MarriageAgencyTest.cpp
	@./main
database: DataBase.cpp DataBaseTest.cpp Client.cpp
	@gcc -c DataBase.cpp DataBaseTest.cpp Client.cpp
	@g++ -o main DataBase.o DataBaseTest.o Client.o
	@./main
run:
	@./main
	@rm -f $(BUILD_DIR)/*.o $(BUILD_DIR)/*.a $(BUILD_DIR)/*.so $(BUILD_DIR)/$(MAIN)
	@rm $(BUILD_DIR)/$(MAIN)_s
	@rm $(BUILD_DIR)/$(MAIN)_d

clean_src:
	@rm -f *.o *.a *.so

run_static:
	@./$(BUILD_DIR)/$(MAIN)_s

run_dynamic:
	@./$(BUILD_DIR)/$(MAIN)_d

# ll: library.cpp main.cpp
  #
  #In this case:
  #
  #    $@ evaluates to all
  #    $< evaluates to library.cpp
  #    $^ evaluates to library.cpp main.cpp


#	LD_LIBRARY_PATH=.
#	export LD_LIBRARY_PATH

