#ifndef CLIENT_H_
#define CLIENT_H_

class CLIENT{
private:
    char static ServerName;
    int static ClientNum;
public:
    void static ChangeServerName(char Name);
    int static GetClientNum();
};

#endif