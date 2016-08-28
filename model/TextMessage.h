#include <iostream>
#include "Session.h"

using namespace std;

#ifndef PIZZA_TIME_TEXTMESSAGE_H
#define PIZZA_TIME_TEXTMESSAGE_H

/**
 * The TextMessage will be used for standard messages as sent by chat participants; i.e. users
 * <p>
 * this class is functionally equivalent to a Java interface, by way of virtual methods
 */
class TextMessage {
    private:
        string handle;
        string message_contents;

    public:
        TextMessage(string new_handle, string new_message_contents);
        string getHandle() const;
        void setHandle();
        string getMessageContents() const;
        void setMessageContents();
        Session getSession() const;
        void setSession();
        string toString() const;
};

#endif //PIZZA_TIME_TEXTMESSAGE_H
