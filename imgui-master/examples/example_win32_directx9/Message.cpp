#include <string>
#include <stdio.h>
#include <stdlib.h>
class Message {

    char associatedUser[64];
    char subject[128];
    char body[256];

public:
    Message(char * subject, char * body, char * associatedUser) {
        memcpy(this->associatedUser, associatedUser, 64);
        memcpy(this->subject, subject, 128);
        memcpy(this->body, body, 256);
    }

    char* getSubject() {
        return this->subject;
    }

    char* getBody() {
        return this->body;
    }

    char* getAssociatedUser() {
        return this->associatedUser;
    }
};
