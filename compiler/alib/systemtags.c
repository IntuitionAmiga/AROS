/*
    (C) 2000 AROS - The Amiga Research OS
    $Id$

    Desc: Varargs version of dos.library/SystemTagList()
    Lang: english
*/
#define AROS_TAGRETURNTYPE LONG
#include <utility/tagitem.h>

/*****************************************************************************

    NAME */
#define NO_INLINE_STDARG /* turn off inline def */
#include <proto/dos.h>

	LONG SystemTags (

/*  SYNOPSIS */
	STRPTR command,
	Tag tag1,
	...)

/*  FUNCTION
        This is the varargs version of dos.library/SystemTagList().
        For information see dos.library/SystemTagList().

    INPUTS

    RESULT

    NOTES

    EXAMPLE

    BUGS

    SEE ALSO
        dos/SystemTagList()

    INTERNALS

    HISTORY

*****************************************************************************/
{
    AROS_SLOWSTACKTAGS_PRE(tag1)
    SystemTagList (command, AROS_SLOWSTACKTAGS_ARG(tag1));
    AROS_SLOWSTACKTAGS_POST
} /* SystemTags */
