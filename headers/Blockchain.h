#include <iostream>
#include <cstdint>
#include <string>

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
public:
  Blockchain(/* args */);
  ~Blockchain();
};
