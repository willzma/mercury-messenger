#include <iostream>
#include "session.h"

using namespace std;

#ifndef PIZZA_TIME_TEXTMESSAGE_H
#define PIZZA_TIME_TEXTMESSAGE_H

/**
 * The TextMessage will be used for standard messages as sent by chat participants; i.e. users
 */
namespace model {
    class text_message {
    private:
        string handle;
        string message_contents;
        session message_session;

    public:
        text_message(string new_handle, string new_message_contents, session new_session);

        string getHandle() const;

        void setHandle(string new_handle);

        string getMessageContents() const;

        void setMessageContents(string new_message_contents);

        session getSession() const;

        void setSession(session new_session);

        string toString() const;
    };
}

#endif //PIZZA_TIME_TEXTMESSAGE_H
