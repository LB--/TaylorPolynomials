clang++ -std=c++11 -o build/TaylorPolynomials.exe -isystem lib/SFML/include/ -isystem lib/json-parser/ -isystem lib/muParser/include/ -Llib/SFML/lib/ -Llib/muParser/lib/ -I src/ src/*.cpp -lsfml-graphics -lsfml-window -lsfml-audio -lsfml-system lib/json-parser/json.c -lmuparser
pause
