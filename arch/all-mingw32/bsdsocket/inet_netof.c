/*
    Copyright (C) 2000-2010, The AROS Development Team. All rights reserved.

    Desc:
*/

#include "bsdsocket_intern.h"

/*****************************************************************************

    NAME */

        AROS_LH1(unsigned long, Inet_NetOf,

/*  SYNOPSIS */
        AROS_LHA(unsigned long, in, D0),

/*  LOCATION */
        struct Library *, SocketBase, 32, BSDSocket)

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

    aros_print_not_implemented ("Inet_NetOf");
#warning TODO: Write BSDSocket/Inet_NetOf

    return 0;

    AROS_LIBFUNC_EXIT

} /* Inet_NetOf */
