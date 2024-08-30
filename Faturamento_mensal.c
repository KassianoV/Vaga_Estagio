#include <stdio.h>

int main() {
    double sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    double total = sp + rj + mg + es + outros;

    double p_sp = (sp / total) * 100;
    double p_rj = (rj / total) * 100;
    double p_mg = (mg / total) * 100;
    double p_es = (es / total) * 100;
    double p_outros = (outros / total) * 100;

    printf("SP: %.2f%%\n", p_sp);
    printf("RJ: %.2f%%\n", p_rj);
    printf("MG: %.2f%%\n", p_mg);
    printf("ES: %.2f%%\n", p_es);
    printf("Outros: %.2f%%\n", p_outros);

    return 0;
}
