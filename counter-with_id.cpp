#include <eosiolib/eosio.hpp>

class counter_contract:eosio::contract{
  public:
    counter_contract(account_name self):eosio::contract(self){}
    void increase(account_name actor){
      eosio::require_auth(actor);
      eosio::print(eosio::name{actor} , " INCREASE => ",value++);
    }
    void decrease(account_name actor){
      eosio::print(eosio::name{actor} , " DECREASE => ",value--);
    }
  private:
    uint64_t value;
};

EOSIO_ABI(counter_contract,(increase)(decrease))
