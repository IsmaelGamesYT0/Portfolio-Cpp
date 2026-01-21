# C++ Portfolio 🧠⚙️

Este repositório é meu portfólio em **C++**, reunindo estudos e projetos práticos:
- ✅ Algoritmos e resolução de problemas
- ✅ Estruturas de dados
- ✅ Projetos pequenos e úteis
- ✅ Boas práticas (organização, build, documentação)

> Objetivo: evoluir do básico ao avançado com código claro, versionado e bem documentado.

---

## 📦 Como compilar (CMake)

### Requisitos
- CMake 3.16+
- Compilador C++ (GCC/Clang/MSVC)
- C++17+

### Build (Linux/macOS/WSL)
```bash
mkdir -p build
cmake -S . -B build
cmake --build build
```

### Rodar

Depois do build, os executáveis ficam em build/ (varia conforme gerador).
Exemplo: ./build/hello

### Organização

- src/hello → programa inicial e testes rápidos

- src/algorithms → algoritmos (busca, ordenação, etc.)

- src/data_structures → estruturas de dados (listas, pilhas, filas, etc.)

- tests/ → testes automatizados (em breve)

- docs/ → anotações/roadmap

### Projetos / Módulos

- hello/: “Hello, world” + base de CLI

- algorithms/: exemplos de implementação e explicação no código

- data_structures/: implementações do zero, com comentários e cuidados

### Roadmap

- Confira: docs/roadmap.md

### Licença

Este projeto está sob a licença GNU 3.0. Veja:https://github.com/IsmaelGamesYT0/Portfolio-Cpp/blob/main/LICENSE
