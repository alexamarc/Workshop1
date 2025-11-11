# Copilot Instructions for Geometry Project

## Project Overview
This is a C++ project implementing basic geometric shapes (Circle and Rectangle) with two different approaches:
1. Modern C++ class-based implementation (`geometry.h` and `geometry.cpp`)
2. C-style struct-based implementation (`main.cpp`)

## Code Structure

### Class-Based Implementation
- Located in `geometry.h` and `geometry.cpp`
- Uses C++ namespaces (`geometry` namespace)
- Implements shapes as classes with proper encapsulation
- Methods are const-correct where appropriate
- Uses member initialization lists in constructors

### Struct-Based Implementation
- Located in `main.cpp`
- Uses C-style structs and functions
- Demonstrates pointer manipulation for position setting
- Contains TODO comments for missing implementations

## Key Patterns and Conventions

### Geometry Conventions
- Coordinates are represented using doubles for x and y
- Circle position is defined by its center point
- Rectangle position is defined by its top-left corner
- Dimensions (radius, width, height) are stored as doubles

### Method Patterns
1. Position Setting:
   - Class version: `void set_pos(double x, double y)`
   - Struct version: `void set_pos(Shape* s, double x, double y)`

2. Calculations:
   - Perimeter and area calculations use `M_PI` from `<cmath>`
   - All calculation methods return `const double`

## Integration Points
- Both implementations can coexist but are not interoperable
- `<cmath>` library is required for π constant (`M_PI`)

## Common Tasks

### Adding New Shapes
1. For class-based implementation:
   - Add new class declaration in `geometry.h`
   - Implement methods in `geometry.cpp`
   - Follow const-correctness pattern
   - Use the `geometry` namespace

2. For struct-based implementation:
   - Add struct definition in `main.cpp`
   - Implement related functions with pointer-based position setting
   - Follow the existing naming conventions

### Testing
The project uses direct console output for testing:
```cpp
Circle c{0, 0, 1};
std::cout << perimeter(c) << std::endl;
```

## Areas for Improvement
- Implement missing TODOs for area calculations
- Add error handling for invalid dimensions
- Consider adding unit tests
- Consider consolidating the two implementations into one consistent approach