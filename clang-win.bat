clang++ -std=c++11 -o build/TaylorPolynomials.exe -isystem lib/SFML/include/ -isystem lib/json-parser/ -Llib/SFML/lib/ -I src/ src/*.cpp -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system lib/json-parser/json.c
pause
