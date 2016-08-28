#include "TextMessage.h"

using namespace std;

TextMessage::TextMessage(string new_handle, string new_message_contents) {
    handle = new_handle;
    message_contents = new_message_contents;
}
