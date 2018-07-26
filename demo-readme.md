### EOS智能合约与DApp开发入门

EOS智能合约与DApp开发入门，并最终完成一个基于React和 EOS的便签DApp。

#### 终端使用建议
- 1#终端用于nodeos运行
- 2#终端用于keosd运行
- 3#终端用于cleos和DApp代码运行

#### 预置代码运行
进入章节代码目录，参考其README文件中的说明。

#### nodeos异常退出的处理
如果需要保留历史数据，清除可逆块，然后重放交易：

```
~$ rm ~/.local/share/eosio/nodeos/data/blocks/reversible
~$ nodeos --replay-blockchain
```

#### 如果不需要保留历史数据，直接清除全部区块文件：

```
~$ rm ~/.local/share/eosio/nodeos/data
~$ nodeos
```
