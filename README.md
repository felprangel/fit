# fit - Uma implementação de Git em C

**fit** (File Integration Tool) é um sistema de controle de versão simples, inspirado no [Git](https://git-scm.com/), desenvolvido em linguagem C como projeto final do curso [CS50](https://cs50.harvard.edu/), e também influenciado pelas ideias estudadas na disciplina de Sistemas Distribuídos da faculdade.

## 🎯 Objetivo

O projeto tem como objetivo explorar conceitos fundamentais de controle de versão, estruturas de dados, persistência e versionamento de arquivos. Além disso, serve como prática e consolidação de conhecimentos adquiridos ao longo do curso, como:

- Manipulação de arquivos em C
- Estruturas de dados como listas ligadas
- Hashing e verificação de integridade
- Comandos similares aos do Git (como `fit init`, `fit add`, `fit commit`, etc.)

## ⚙️ Funcionalidades

- `fit init` – Inicializa um novo repositório fit.
- `fit add <arquivo>` – Adiciona arquivos à staging area.
- `fit commit -m "<mensagem>"` – Cria um commit com uma mensagem descritiva.
- `fit status` – Mostra alterações em relação ao último commit.

## 🧠 Conceitos aplicados

- **Listas ligadas**: usadas para gerenciar a staging area e o histórico de commits.
- **Hashing**: utilizado para identificar versões de arquivos de maneira única.
- **Manipulação de arquivos binários**: para salvar o estado do repositório.
- **Distribuição e consistência**: ideias inspiradas na disciplina de Sistemas Distribuídos, como versionamento descentralizado e repositórios locais.

## 🧪 Como compilar e executar

1. Clone o repositório:

   ```bash
   git clone https://github.com/felprangel/fit.git
   cd fit
   ```

2. Compile o projeto:

   ```bash
   make
   ```

3. Use o binário:

   ```bash
   ./fit init
   ./fit add exemplo.txt
   ./fit commit -m "Primeiro commit"
   ```

> ⚠️ É necessário ter o `gcc` e o `make` instalados.
