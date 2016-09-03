#include "text_message.h"

using namespace std;

namespace model {
    text_message::text_message(string new_handle, string new_message_contents, session new_session) {
        handle = new_handle;
        message_contents = new_message_contents;
        message_session = new_session;
    }

    string text_message::getHandle() const { return handle; }
    void text_message::setHandle(string new_handle) { handle = new_handle; }

    string text_message::getMessageContents() const { return message_contents; }
    void text_message::setMessageContents(string new_message_contents) { message_contents = new_message_contents; }

    session text_message::getSession() const { return message_session; }
    void text_message::setSession(session new_session) { message_session = new_session; }

    string text_message::toString() const { return handle + ": " + message_contents; }
}
