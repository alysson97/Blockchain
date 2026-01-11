#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <httplib.h>
#include "SHA256.h"

struct BlockHeader{
  uint32_t nounce;
  std::string blockHash;
};
struct BlockData{
  int sequence;
  int timestamp;
  std::string data;
  std::string previousHash;
};
struct Block{
  BlockHeader header;
  BlockData data;
};

class Blockchain
{
  private:
    /* data */
    std::vector<Block> chain;
    const int difficulty = 4;
  public:
    Blockchain(/* args */);
    ~Blockchain();
    void addBlock(const Block& block);
    Block getBlock(int index) const;
    int getBlockCount() const;
    void printBlockchain() const;
    void clearBlockchain();
    Block createGenesisBlock();
};
