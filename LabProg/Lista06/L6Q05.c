//L6-Q5:

#include <stdio.h>

struct Professor {
    char* nome;
    int age;
    float wage;
};

struct Disciplina {
    char* nomeDisciplina;
    int horasAulas;
    struct Professor *prof;
};

int main() { 

    return 0;

}
