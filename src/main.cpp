#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>
#include <thread>

// Protótipos;
void v();
void i();
void c();
void e();
void n();
void t();

int main(){
    system("clear");
    std::cout << std::endl; 
    v();
    i();
    c();
    e();
    n();
    t();
    e();
    return 0;
}

// Imprime a letra V;
void v(){
    std::string espacos{"     "}; // 5 espaços;
    std::vector<std::string> letraV;
    for(int i{}; i < 5; i++){
        std::string temp = espacos;
        temp.append(i,' '); // Adiciona i*' ' ao final de temp;
        temp.push_back('*');
        letraV.push_back(temp);
    }

    espacos.append(2, ' ');
    for(int i{}; i < 4; i++){
        letraV[i].append(espacos);
        letraV[i].push_back('*');
        espacos.erase(0,2); // Remove 2 elementos a partir da posição 0; 
    }


    for(auto it : letraV){
        for(size_t c{}; c < it.length(); c++){
            std:: cout << it.at(c) << std::flush; // Imprime a letra atual e força o envio do buffer para o terminal, garantindo a impressão imediata;
            std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Pausa a execução do programa por 50 milissegundos entre uma letra e outra;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Imprime a letra I;
void i(){
    std::string espacos{"         *"}; // 10 caracteres;
    for(int i{}; i < 5; i++){
        for(size_t c{}; c < espacos.length(); c++){
            std::cout << espacos.at(c) << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        std::cout << std::endl;
    
    }
    std::cout << std::endl;
}

// Imprime a letra C;
void c(){
    std::string espacos{"     "}; // 5 espaços;

    for(int i{}; i < 6; i++){
        for(size_t c{}; c < espacos.length(); c++){
            std::cout << espacos.at(c) << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        if(i == 0 || i == 5){
            std::string temp = "   * * **";
            for(size_t c{}; c < temp.length(); c++){
                std::cout << temp.at(c) << std::flush;
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
            }
            std::cout << std::endl;
        }else if(i == 1 || i == 4) std::cout << " *" << std::endl;
        else std::cout << "*" << std::endl;
    }
    std::cout << std::endl;
}

// Imprime a letra E;
void e(){
    std::string espacos{"     "}; // 5 espaços;
    for(int i{}; i < 5; i++){
        for(size_t c{}; c < espacos.length(); c++){
            std::cout << espacos.at(c) << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        if(i == 0 || i == 2 || i == 4){
            std::string temp = {"* * * * *"}; // 9 caracteres;
            for(size_t c{}; c < temp.length(); c++){
                std::cout << temp.at(c) << std::flush;
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
            }
            std::cout << std::endl;
        }else std::cout << '*' << std::endl;
        
    }
    std::cout << std::endl;
}

// Imprime a letra N;
void n(){
    std::string espacos{"     "}; // 5 caracteres;
    std::vector<std::string> letraN;
    
    int cont{1}; // Ajudará a formar a barra que liga as barras verticais da letra N;
    for(int i{}; i < 5; i++){
        std::string temp = espacos;
        temp.push_back('*');
        letraN.push_back(temp);
        
        if(i > 0 && i < 4){
            letraN[i].append(cont, ' ');
            letraN[i].push_back('*');
            cont += 2;
        }

        letraN[i].append((13-letraN[i].size()), ' ');
        letraN[i].push_back('*');

    }

    for(auto it : letraN){
        for(size_t c{}; c < it.length(); c++){
            std::cout << it.at(c) << std::flush;
            std::this_thread::sleep_for(std::chrono::milliseconds(50));
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

// Imprime a letra T;
void t(){
    std::string barra{"     * * * * *"};
    for(size_t c{}; c < barra.length(); c++){
        std::cout << barra.at(c) << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(50));
    }
    std::cout << std::endl;
    i();
} 