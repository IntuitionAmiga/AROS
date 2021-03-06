/*
    Copyright (C) 1995-2017, The AROS Development Team. All rights reserved.

    Desc: Emit one character via raw IO
*/

#include "exec_intern.h"

/*****i***********************************************************************

    NAME */
#include <proto/exec.h>

	AROS_LH1(void, RawPutChar,

/*  SYNOPSIS */
	AROS_LHA(UBYTE, chr, D0),

/*  LOCATION */
	struct ExecBase *, SysBase, 86, Exec)

/*  FUNCTION
	Emits a single character into low-level debug output stream

    INPUTS
	chr - The character to emit

    RESULT
	None.

    NOTES
	This function is for very low level debugging only.

	Zero bytes are ignored by this function.

    EXAMPLE

    BUGS

    SEE ALSO
	RawIOInit(), RawPutChar(), RawMayGetChar()

    INTERNALS

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

    /* Don't write 0 bytes */
    if (KernelBase && chr)
	KrnPutChar(chr);

    AROS_LIBFUNC_EXIT
} /* RawPutChar */
