#ifndef CALCULADORA_H
#define CALCULADORA_H
class calculadora
{
    public:
        calculadora();
        float suma(int x, int y);
        float multiplicacion(int x, int y);
        float resta(int x, int y);
        float division(int x, int y);
        virtual ~calculadora();
    protected:
    private:
};
#endif // CALCULADORA_H
