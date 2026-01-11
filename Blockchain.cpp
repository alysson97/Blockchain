#include "headers/Blockchain.h"

Blockchain::Blockchain(/* args */)
{
  // usa o membro da classe difficulty
  createGenesisBlock();
}

Block Blockchain::createGenesisBlock()
{
  Block genesisBlock;
  genesisBlock.data.sequence = 0;
  genesisBlock.data.timestamp = static_cast<int>(time(nullptr));
  genesisBlock.data.data = "Genesis Block";
  genesisBlock.data.previousHash = "";
  genesisBlock.header.nounce = 0;
  // Gera o hash SHA256 do conteúdo do bloco gênesis
  std::string input = std::to_string(genesisBlock.data.sequence) +
                      std::to_string(genesisBlock.data.timestamp) +
                      genesisBlock.data.data +
                      genesisBlock.data.previousHash +
                      std::to_string(genesisBlock.header.nounce);
  SHA256 sha256;
  sha256.update(input);
  auto digest = sha256.digest();
  genesisBlock.header.blockHash = SHA256::toString(digest);
  return genesisBlock;
}

Blockchain::~Blockchain()
{
  // Limpa a memória ou recursos alocados, se necessário
}