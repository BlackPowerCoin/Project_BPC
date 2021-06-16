const uint64_t MONEY_SUPPLY = UINT64_C(196319801890);
const unsigned EMISSION_SPEED_FACTOR =21;
const uint64_t DIFFICULTY_TARGET = 72;
const int P2P_DEFAULT_PORT = 123;
const int RPC_DEFAULT_PORT = 1094;
const std::initializer_list<const char*> SEED_NODES = {
  "111.11.11.11:123",
  "222.22.22.22:1094",
  "111.11.11.11:1094",
  "222.22.22.22:123"
};
const uint64_t MINIMUM_FEE = 400000;
const size_t CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE = 80000;
const uint64_t CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 0x234b; // addresses start with "b"
const char GENESIS_COINBASE_TX_HEX[] = "";
BlackPowerCoind --print-genesis-tx
const char GENESIS_COINBASE_TX_HEX[] = "013c01ff0001ffff...785a33d9ebdba68b0";
