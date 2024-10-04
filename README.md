## Installing and running the project:

### Installing
1- Clone this repository
```
git clone git@github.com:enverbey/42CommonCore.git ft_irc
```

2- Go to the folder you clone
```
cd ft_irc
```

3- Change the branch
```
git checkout ft_irc
```
### Running
1- Compile the project
```
make
```

2- Run the project *./ircserv [Port id] [Password]*
```
./ircserv 4242 123
```
## Connect with terminal for Linux and Mac
1- Connect to the server with nc (Netcat)
```
nc localhost 4242 
```
2- Authenticate with the server
```
PASS 123
```
3- Register with a nickname and user details
```
NICK enver
USER enver 0 * enveryilmaz
```
At this point, you'll be connected to the IRC server and ready to communicate.

---
My partner in this project is [Burak Ortakuz](https://github.com/BurakOrtakuz).

---

## Useful links
The IRC protocol I referenced in the project : https://modern.ircdocs.horse

Hexchat download link for MAC : https://mac.filehorse.com/download-hexchat/
