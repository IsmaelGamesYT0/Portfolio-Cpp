#include <iostream>
#include <string>

// Dicas e comentários

// Para criar uma váriavel é necessário informar o TIPO e um NOME, seguindo o exemplo abaixo!
	// int idade;
	// Também é possível atribuir um valor para a à váriavel, seguindo o exemplo abaixo!
	// int idade = 18;
	
	// int vidas = 0; // 10,25
	// char letra = 'B'; // [20] OBS: 'char' recebe somente um caractere, mas usando [] com um número dentro,
	// ele irá permitir a quantidade de caracteres inserida que no caso foi [20].
	// double decimal = 5.234; // 2.499999
	// float decimal2 = 5.4; // 2.5
	// bool vivo; // true = 1
	// bool morto; // false = 0
	// string texto = oi; // OBS: 'string' não tem a mesma limitação do 'char'.
	// std::cout << // Usado para imprimir algo na tela.
	// std::cin >> // Usado para ler o que o usúario digitar.

int main() {
	
	// Seção das váriaveis
	
	char nome [50];
	int vidas;
	char letra;
	double numero;
	
// ---------------------------------------------------------------------------

    // Seção das entradas e leituras.
    
    std::cout << "Digite seu nome: ";
	std::cin >> nome;
	system("cls");
	
	std::cout << "Quantas vidas voce tem: ";
    std::cin >> vidas;
	system("cls");
    
    std::cout << "Digite uma letra:";
    std::cin >> letra;
	system("cls");
    
    std::cout << "Digite um numero decimal separado por ponto'.' ";
    std::cin >> numero;
	system("cls");
    
	
// ---------------------------------------------------------------------------
	
	// Seção dos prints, para mostrar na tela as informações obtidas anteriormente.
	
	std::cout << "Oi " << nome << " Seja Bem-vindo!\n";
	system("pause");
	system("cls");
	
	std::cout << "Voce tem " << vidas << " vidas\n";
	system("pause");
	system("cls");
	
	std::cout << "A letra que voce digitou foi: " << letra << "\n";
	system("pause");
	system("cls");
	
	std::cout << "O numero que você inseriu foi: " << numero << "\n";
	system("pause");
	system("cls");
	
	std::cout << "Obrigado por usar meu programa, volte sempre!\n";
	system("pause");
	system("cls");
    
	
	return 0;
}
