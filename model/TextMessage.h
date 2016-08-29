#include <iostream>
#include "Session.h"

using namespace std;

#ifndef PIZZA_TIME_TEXTMESSAGE_H
#define PIZZA_TIME_TEXTMESSAGE_H

/**
 * The TextMessage will be used for standard messages as sent by chat participants; i.e. users
 */
namespace model {
    class TextMessage {
    private:
        string handle;
        string message_contents;
        Session session;

    public:
        TextMessage(string new_handle, string new_message_contents, Session new_session);

        string getHandle() const;

        void setHandle(string new_handle);

        string getMessageContents() const;

        void setMessageContents(string new_message_contents);

        Session getSession() const;

        void setSession(Session new_session);

        string toString() const;
    };
}

#endif //PIZZA_TIME_TEXTMESSAGE_H
