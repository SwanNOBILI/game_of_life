# Version minimale de CMake
cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(MonProjet)

# Spécifie le standard C++ à utiliser
set(CMAKE_CXX_STANDARD 11)

# Dossier de destination pour les fichiers compilés
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Inclure le dossier include/ pour les headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Ajouter les fichiers sources du projet
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Créer l'exécutable
add_executable(MonProjet ${SOURCES})

# Configurer SFML
find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)
if (SFML_FOUND)
    target_link_libraries(MonProjet sfml-graphics sfml-window sfml-system)
else()
    message(FATAL_ERROR "SFML n'a pas été trouvé dans ${SFML_DIR}")
endif()