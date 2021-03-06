/*
    Copyright (C) 2002-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/debug.h>
#include <stdio.h>

#include "security_intern.h"
#include <libraries/mufs.h>

/*****************************************************************************

    NAME */
	AROS_LH1(BOOL, secAddMonitor,

/*  SYNOPSIS */
	/* (monitor) */
	AROS_LHA(struct secMonitor *, monitor, A0),

/*  LOCATION */
	struct SecurityBase *, secBase, 28, Security)

/*  FUNCTION

    INPUTS


    RESULT


    NOTES


    EXAMPLE

    BUGS

    SEE ALSO


    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_LIBFUNC_INIT

    D(bug( DEBUG_NAME_STR " %s()\n", __func__);)

    return 0;

    AROS_LIBFUNC_EXIT

} /* secAddMonitor */

