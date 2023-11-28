
class Bebida {
public:
    Bebida(const string& nome, const string& tipo, int quantidadeNosEngradados, int quantidadeNasGarrafas)
        : nome(nome), tipo(tipo), quantidadeNosEngradados(quantidadeNosEngradados), quantidadeNasGarrafas(quantidadeNasGarrafas) {}

    string getNome() const { return nome; }
    string getTipo() const { return tipo; }
    int getQuantidadeNosEngradados() const { return quantidadeNosEngradados; }
    int getQuantidadeNasGarrafas() const { return quantidadeNasGarrafas; }

private:
    string nome;
    string tipo;
    int quantidadeNosEngradados;
    int quantidadeNasGarrafas;
};

class EngradadoDeBebidas {
public:
    Engradado(int quantidadeBebidas, int quantidadeGarrafas)
        : quantidadeBebidas(quantidadeBebidas), quantidadeGarrafas(quantidadeGarrafas) {}

    int getQuantidadeBebidas() const { return quantidadeBebidas; }
    int getQuantidadeGarrafas() const { return quantidadeGarrafas; }

private:
    int quantidadeBebidas;
    int quantidadeGarrafas;
};

class EstoqueDeBebidas {
public:
    EstoqueDeBebidas() {}

    void adicionarBebida(const Bebida& bebida) {
        bebidas.push_back(bebida);
    }

    void removerBebida(const string& nome) {
        for (auto it = bebidas.begin(); it != bebidas.end(); ++it) {
            if ((*it).getNome() == nome) {
                bebidas.erase(it);
                return;
            }
        }
    }

    bool verificacaoBebidas(const string& nome) {
        for (const auto& bebida : bebidas) {
            if (bebida.getNome() == nome) {
                return true;
            }
        }
        return false;
    }

private:
    vector<Bebida> bebidas;
};
