#include <iostream>

using namespace std;

void apresentarMenu() {
	string menu = "";
	menu += "|-----------------------|\n";
	menu += "|          Menu         |\n";
	menu += "|-----------------------|\n";
	menu += "| 1. Cadastrar Usuario  |\n";
	menu += "| 2. Listar Usuario     |\n";
	menu += "| 0. Sair               |\n";
	menu += "|                       |\n";
	menu += "|-----------------------|\n";
	menu += "\n";
	menu += "Digite uma opcao: ";
	cout << menu;
}

int obterOpcao() {
	int opcao = -1;
	cin >> opcao;
    return opcao;
}

void limparTela() {
	system("cls");
}

void apresentarTelaDeCadastro(string nomes[10], string emails[10], int idades[10], int codigos[10], int posicao){
	string cadastro = "";
	cadastro += "|------------------------|\n";
	cadastro += "|    Cadastrar Usuario   |\n";
	cadastro += "|------------------------|\n";
	cadastro += "\n";
	cout << cadastro;
	cout << " Nome: ";
	cin >> nomes[posicao]; // só funiconou porque não é dado espaços
	cout << " Idade: ";
	cin >> idades[posicao];
	cout << " E-mail: ";
	cin >> emails[posicao];
	cout << " Codigo: ";
	cin >> codigos[posicao];
}

void apresentarCadastroEfetuado() {
	string cadastroEfetuado = "";
	cadastroEfetuado += "|------------------------|\n";
	cadastroEfetuado += "|                        |\n";
	cadastroEfetuado += "|                        |\n";
	cadastroEfetuado += "|                        |\n";
	cadastroEfetuado += "|   Cadastro Efetuado!   |\n";
	cadastroEfetuado += "|                        |\n";
	cadastroEfetuado += "|                        |\n";
	cadastroEfetuado += "|                        |\n";
	cadastroEfetuado += "|------------------------|\n";
	cout << cadastroEfetuado;
	system("pause");
}

void listarUsuarios(string nomes[10], string emails[10], int idades[10], int codigos[10], int posicao){
	for (int i = 0; i < posicao; i++ ){
		cout << "--------------------------";
		cout << "\nNome: " << nomes[i];
		cout << "\nidade: " << idades[i];
		cout << "\nE-mail: " << emails[i];
		cout << "\nCodigo: " << codigos[i] << endl;
	}
	system("pause");
}

int main() {
	string nomes[10], emails[10];
	int idades[10], codigos[10], posicao = 0;


	int opcao = 0;
	do {
		apresentarMenu();
		opcao = obterOpcao();
		limparTela();
		switch (opcao){
		case 0:
			break;
		case 1:
			apresentarTelaDeCadastro(nomes, emails, idades, codigos, posicao);
			limparTela();
			apresentarCadastroEfetuado();
			posicao = posicao + 1;
			break;
		case 2:
			listarUsuarios(nomes, emails, idades, codigos, posicao);
			break;
		default:
			cout << "Opcao invalida! ";
			system("pause");
		}
		limparTela();
	} while(opcao != 0);


	return 0;

}


