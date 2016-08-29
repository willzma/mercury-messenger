#include "TextMessage.h"

using namespace std;

namespace model {
    TextMessage::TextMessage(string new_handle, string new_message_contents, Session new_session) {
        handle = new_handle;
        message_contents = new_message_contents;
        session = new_session;
    }

    string TextMessage::getHandle() const { return handle; }
    void TextMessage::setHandle(string new_handle) { handle = new_handle; }

    string TextMessage::getMessageContents() const { return message_contents; }
    void TextMessage::setMessageContents(string new_message_contents) { message_contents = new_message_contents; }

    Session TextMessage::getSession() const { return session; }
    void TextMessage::setSession(Session new_session) { session = new_session; }

    string TextMessage::toString() const { return handle + ": " + message_contents; }
}
