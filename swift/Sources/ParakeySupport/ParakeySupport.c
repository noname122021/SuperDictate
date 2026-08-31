#include "ParakeySupport.h"

mach_port_t parakey_current_task_port(void) {
    return mach_task_self_;
}
