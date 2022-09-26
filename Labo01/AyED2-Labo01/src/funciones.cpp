#include <vector>
#include "algobot.h"

using namespace std;

// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    set<int> sin_repetidos;
    for(int x:s){
        sin_repetidos.insert(x);
    }
    vector<int> res;
    for (int x:sin_repetidos) {
        res.push_back(x);
    }
    return res;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    return vector<int>();
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    return true;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set<int> set_a;
    for (int x:a){
        set_a.insert(x);
    }
    set<int> set_b;
    for (int x:b){
        set_b.insert(x);
    }
    return set_a == set_b;
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    map<int, int>res;
    vector<int> sinRepetidos = quitar_repetidos(s);
    int cantApariciones = 0;
    for (int i = 0; i < sinRepetidos.size(); ++i) {
        for (int j = 0; j < s.size(); ++j) {
            if (sinRepetidos[i] == s[j]){
                cantApariciones++;
            }
        }
        res[sinRepetidos[i]] = cantApariciones;
        cantApariciones = 0;
    }
    return res;
}

// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    map<int, int>rep = contar_apariciones(s);
    vector<int> res;
    for (int i=0; i < rep.size(); i++) {
        if (rep[i] == 1){
            res.push_back(i);
        }
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    set<int> res;
    if (a.size() > b.size()){
        for (int x:a ) {
            if (b.count(x) == 1 ){
                res.insert(x);
            }
        }
    }else
        for (int x:b ) {
            if (a.count(x) == 1 ){
                res.insert(x);
            }
        }
    return res;
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    return map<int, set<int>>();
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    return vector<char>();
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}
