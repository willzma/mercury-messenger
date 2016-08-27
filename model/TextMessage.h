#include <iostream>
#include "Session.h"

#ifndef PIZZA_TIME_TEXTMESSAGE_H
#define PIZZA_TIME_TEXTMESSAGE_H

/**
 * The TextMessage will be used for standard messages as sent by chat participants; i.e. users
 * <p>
 * this class is functionally equivalent to a Java interface, by way of virtual methods
 */
class TextMessage {
    private:
        std::string handle;
        std::string message_contents;

    public:
        TextMessage(std::string new_handle, std::string new_message_contents);
        std::string getHandle() const;
        void setHandle();
        std::string getMessageContents() const;
        void setMessageContents();
        Session getSession() const;
        void setSession();
        std::string toString() const;
};

#endif //PIZZA_TIME_TEXTMESSAGE_H
