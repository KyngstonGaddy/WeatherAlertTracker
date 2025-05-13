cmake_minimum_required(VERSION 3.5...3.27)
project(Real_Time_API_Capstone_Project)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include(FetchContent)

FetchContent_Declare(
        json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.11.2
)
FetchContent_MakeAvailable(json)

find_package(CURL REQUIRED)


add_executable(weather_market_app
        src/main.cpp
        src/weatherAPI.cpp
        src/ConfigManager.cpp
        src/WeatherAlerts.cpp
        src/WeatherHeap.cpp
        src/WeatherPriority.cpp
        src/Benchmarks.cpp
)

target_include_directories(weather_market_app PRIVATE
        ${CURL_INCLUDE_DIRS}
        ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/src
)

# Link libraries to the executable
target_link_libraries(weather_market_app
        CURL::libcurl
        nlohmann_json::nlohmann_json
)