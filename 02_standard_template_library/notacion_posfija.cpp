/*
* author: DEL CARPIO MARTINEZ, Damaris
*/

#include<bits/stdc++.h>

using namespace std;

int realizarOperacion(int a, int b, char operador) {
    switch (operador) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            return 0;
    }
}

int evaluarExpresionPosfija(int n, string input[]) {
    stack<int> pila;

    for (int i = 0; i < n; i++) {
        if (input[i] == "+" || input[i] == "-" || input[i] == "*" || input[i] == "/") {
            int b = pila.top();
            pila.pop();
            int a = pila.top();
            pila.pop();
            pila.push(realizarOperacion(a, b, input[i][0]));
        } else {
            int valor;
            stringstream(input[i]) >> valor;
            pila.push(valor);
        }
    }

    return pila.top();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    string input[n];
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int resultado = evaluarExpresionPosfija(n, input);
    cout << resultado << endl;

    return 0;
}
