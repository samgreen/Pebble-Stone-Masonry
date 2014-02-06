inline char * APP_MSG_ERROR_STRING(AppMessageResult result) {

  switch (result) {
    //! All good, operation was successful.
    case APP_MSG_OK: return "Okay";
    
    //! The other end did not confirm receiving the sent data with an (n)ack in time.
    case APP_MSG_SEND_TIMEOUT: return "Send Timeout";

    //! The other end rejected the sent data, with a "nack" reply.
    case APP_MSG_SEND_REJECTED: return "Rejected";

    //! The other end was not connected.
    case APP_MSG_NOT_CONNECTED: return "Not Connected";

    //! The local application was not running.
    case APP_MSG_APP_NOT_RUNNING: return "Application is not running";

    //! The function was called with invalid arguments.
    case APP_MSG_INVALID_ARGS: return "Invalid arguments";

    //! There are pending (in or outbound) messages that need to be processed first before
    //! new ones can be received or sent.
    case APP_MSG_BUSY: return "Busy";

    //! The buffer was too small to contain the incoming message.
    case APP_MSG_BUFFER_OVERFLOW: return "Buffer Overflow";

    //! The resource had already been released.
    case APP_MSG_ALREADY_RELEASED: return "Already Released";

    //! The callback node was already registered, or its ListNode has not been initialized.
    case APP_MSG_CALLBACK_ALREADY_REGISTERED: return "Callback Already Registered";

    //! The callback could not be deregistered, because it had not been registered before.
    case APP_MSG_CALLBACK_NOT_REGISTERED: return "Callback Never Registered";

    //! The support library did not have sufficient application memory to perform the requested operation.
    case APP_MSG_OUT_OF_MEMORY: return "Out of Memory";

    //! App message was closed
    case APP_MSG_CLOSED: return "Closed";

    //! An internal OS error prevented APP_MSG from completing an operation
    case APP_MSG_INTERNAL_ERROR: return "Internal (OS) Error";
  }
}

inline char * APP_MSG_ERROR_STRING_VERBOSE(AppMessageResult result) {

  switch (result) {
    case APP_MSG_OK:                            return "Okay";
    case APP_MSG_SEND_TIMEOUT:                  return "The other end did not confirm receiving the sent data with an (n)ack in time.";
    case APP_MSG_SEND_REJECTED:                 return "The other end rejected the sent data, with a \"nack\" reply.";
    case APP_MSG_NOT_CONNECTED:                 return "The other end was not connected.";
    case APP_MSG_APP_NOT_RUNNING:               return "The local application was not running.";
    case APP_MSG_INVALID_ARGS:                  return "The function was called with invalid arguments.";
    case APP_MSG_BUSY:                          return "There are pending (in or outbound) messages that need to be processed first before new ones can be received or sent.";
    case APP_MSG_BUFFER_OVERFLOW:               return "The buffer was too small to contain the incoming message.";
    case APP_MSG_ALREADY_RELEASED:              return "The resource had already been released.";
    case APP_MSG_CALLBACK_ALREADY_REGISTERED:   return " The callback node was already registered, or its ListNode has not been initialized.";
    case APP_MSG_CALLBACK_NOT_REGISTERED:       return "The callback could not be deregistered, because it had not been registered before.";
    case APP_MSG_OUT_OF_MEMORY:                 return "The support library did not have sufficient application memory to perform the requested operation.";
    case APP_MSG_CLOSED:                        return "App message was closed.";
    case APP_MSG_INTERNAL_ERROR:                return "An internal OS error prevented APP_MSG from completing an operation.";
  }
}