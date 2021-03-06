/*
    Copyright (C) 2018-2020, The AROS Development Team. All rights reserved.
*/

#include <exec/types.h>
#include <proto/locale.h>

#define CATCOMP_ARRAY
#include "strings.h"

#define CATALOG_NAME     "System/Tools/InstallAROS.catalog"
#include "catalogs/catalog_version.h"

/*** Variables **************************************************************/
struct Catalog *catalog;


/*** Functions **************************************************************/
/* Main *********************************************************************/
CONST_STRPTR _(ULONG id)
{
    if (LocaleBase != NULL && catalog != NULL)
    {
	return GetCatalogStr(catalog, id, CatCompArray[id].cca_Str);
    }
    else
    {
	return (CONST_STRPTR)CatCompArray[id].cca_Str;
    }
}

/* Setup ********************************************************************/
BOOL Locale_Initialize(void)
{
    if (LocaleBase != NULL)
    {
        catalog = OpenCatalog
        (
            NULL, CATALOG_NAME, OC_Version, CATALOG_VERSION, TAG_DONE
        );
    }
    else
    {
        catalog = NULL;
    }

    return TRUE;
}

void Locale_Deinitialize(void)
{
    if(LocaleBase != NULL && catalog != NULL) CloseCatalog(catalog);
}


