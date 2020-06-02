#include "udf.h"

static int version = 1;
static int release = 2;

DEFINE_EXECUTE_ON_LOADING(report_version, libname)
    {
        Message("\nLoading %s version %d.%d\n",libname,version,release);
    }