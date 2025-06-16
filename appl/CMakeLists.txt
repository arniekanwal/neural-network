# Set the project name
project(appl)

add_executable(${PROJECT_NAME} nn.cpp)

# Link the static library from lib/
# This will cause the include directories for that target to be added to this project
target_link_libraries(${PROJECT_NAME} 
    neural-network
)