
#OVERWRITES FOR ALLEGRA TESTNET

socket="db-launchpad/node.socket"

genesisfile="configuration-testnet/launchpad-shelley-genesis.json"           #Shelley-Genesis path
genesisfile_byron="configuration-testnet/launchpad-byron-genesis.json"       #Byron-Genesis path

cardanocli="./cardano-cli"      #Path to your cardano-cli you wanna use
cardanonode="./cardano-node"    #Path to your cardano-node you wanna use

magicparam="--testnet-magic 3" #choose "--mainnet" for mainnet or for example "--testnet-magic 42" for a testnet
addrformat="--testnet-magic 3"  #choose "--mainnet" for mainnet address format or like "--testnet-magic 42" for testnet address format

itn_jcli="./jcli" #only needed if you wanna include your itn witness for your pool-ticker

byronToShelleyEpochs=2 #208 for the mainnet, 74 for the public testnet, 1 for allegra testnet, 2 für launchpad

minNodeVersion="1.24.2"



