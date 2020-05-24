typedef struct PolyNode *Polynomial;
struct PolyNode{
    int coef;
    int expon;
    Polynomial link;
};

int main(){
    Polynomial P1,P2,PP,PS;

    P1 = ReadPoly();
    P2 = ReadPoly();
    PP = Mult(P1,P2);
    PrintPoly(PP);
    PS = Add(P1,P2);
    PrintPoly(PS);

    return 0;
}