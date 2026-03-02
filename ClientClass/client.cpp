#include "client.h"

void CLIENT::ChangeServerName(char Name){
    CLIENT::ServerName = Name;
    CLIENT::ClientNum ++;

}
int CLIENT::GetClientNum(){
    return CLIENT::ClientNum;

}
