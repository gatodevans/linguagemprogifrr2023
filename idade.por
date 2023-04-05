programa {
  cadeia nome
  inteiro nascimento, idade
  const inteiro anoatual = 2023
  funcao inicio() {
    limpa()
    escreva("Seu nome: ")
    leia(nome)
    escreva("Ola ", nome, " Qual ano voce nasceu? ")
    leia(nascimento)
    idade = anoatual - nascimento
    escreva(nome, " voce tem ", idade, " anos de idade")

    
  }
}
