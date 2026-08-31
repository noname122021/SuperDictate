// mach_task_self_ is a C global the CommandLineTools Swift 6.0 toolchain
// can't reference from Swift (strict concurrency: shared mutable state).
// Expose it through a plain C function instead, mirroring FluidAudio's
// MachTaskSelfWrapper.
#ifndef ParakeySupport_h
#define ParakeySupport_h

#include <mach/mach.h>

mach_port_t parakey_current_task_port(void);

#endif /* ParakeySupport_h */
