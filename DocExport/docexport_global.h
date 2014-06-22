#ifndef DOCEXPORT_GLOBAL_H
#define DOCEXPORT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DOCEXPORT_LIBRARY)
#  define DOCEXPORTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define DOCEXPORTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DOCEXPORT_GLOBAL_H