import json

# Supondo que o arquivo JSON chamado "faturamento.json" esteja no mesmo diretório e tenha o seguinte formato:
# {
#     "faturamento_diario": [22174.1664, 24537.6698, 26139.6134, 0.0, 0.0, 26742.6612, 0.0, 42889.2258, ...]
# }

def calcular_faturamento(faturamento_diario):
    # Filtrar dias com faturamento diferente de zero
    dias_validos = [valor for valor in faturamento_diario if valor > 0]

    if not dias_validos:
        return None, None, 0

    menor = min(dias_validos)
    maior = max(dias_validos)
    media_mensal = sum(dias_validos) / len(dias_validos)

    dias_acima_da_media = len([dia for dia in dias_validos if dia > media_mensal])

    return menor, maior, dias_acima_da_media

def main():
    # Carregar os dados do arquivo JSON
    with open('faturamento.json', 'r') as file:
        dados = json.load(file)

    faturamento_diario = dados.get("faturamento_diario", [])

    menor, maior, dias_acima_da_media = calcular_faturamento(faturamento_diario)

    if menor is not None and maior is not None:
        print(f"Menor valor de faturamento: R${menor:.2f}")
        print(f"Maior valor de faturamento: R${maior:.2f}")
        print(f"Dias com faturamento acima da média mensal: {dias_acima_da_media}")
    else:
        print("Não houve faturamento durante o mês.")

if __name__ == "__main__":
    main()
