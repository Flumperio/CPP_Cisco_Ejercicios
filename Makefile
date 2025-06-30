# Nombre del compilador
CXX = clang++

# Opciones del compilador
CXXFLAGS = -Wall -std=c++17

# Archivos fuente y objeto
SRCS = lab_2_0_5.cpp
OBJS = $(SRCS:.cpp=.o)

# Nombre del ejecutable
TARGET = programa

# Regla por defecto
all: $(TARGET)

# Cómo construir el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Cómo compilar los .cpp en .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpieza de archivos intermedios
clean:
	rm -f *.o $(TARGET)

