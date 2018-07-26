#include <eosiolib/eosio.hpp>

class counter_contract:eosio::contract{
  public:
    counter_contract(account_name self):eosio::contract(self){}
    void increase(){
      eosio::print("INCREASE => ",value++);
    }
    void decrease(){
      eosio::print("DECREASE => ",value--);
    }
  private:
    uint64_t value;
};

EOSIO_ABI(counter_contract,(increase)(decrease))
