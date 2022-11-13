set(PROJECT_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp"
)

# set(PROJECT_INCLUDE
# )

add_executable(${PROJECT_NAME}
    ${PROJECT_SOURCES}) #${PROJECT_INCLUDE})



target_include_directories(${PROJECT_NAME} PRIVATE "${PROJECT_SOURCE_DIR}/data_types/include")

