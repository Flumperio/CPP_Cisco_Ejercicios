# Nombre del compilador  :wq
CXX = clang++

# Opciones del compilador
CXXFLAGS = -Wall -g -std=c++17

# Archivos fuente y objeto
SRCS = lab_4_4_10.cpp
OBJS = $(SRCS:.cpp=.o)

# Nombre del ejecutable
TARGET = program.out

# Regla por defecto
all: $(TARGET)

# Regla para debug
debug: $(OBJS)
	$(CXX) -g -o $(TARGET) $(OBJS)

# Cómo construir el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Cómo compilar los .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza de archivos intermedios
clean:
	rm -f *.o $(TARGET) *.exe

