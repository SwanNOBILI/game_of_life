@echo off

rem Crée un dossier build s'il n'existe pas
if not exist build (
    mkdir build
)
cd build

rem Génère les fichiers Make avec CMake
echo Génération des fichiers Make avec CMake...
cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=build ..
if errorlevel 1 (
    echo.
    echo Erreur lors de la génération avec CMake.
    exit /b
)

rem Compile le projet
echo Compilation du projet...
cmake --build .
if errorlevel 1 (
    echo.
    echo Erreur lors de la compilation du projet.
    exit /b
)

rem Vider le terminal
cls

rem Exécute l'exécutable
bin\MonProjet.exe

rem Passe à la ligne
echo.

rem Retourne au dossier racine
cd ..