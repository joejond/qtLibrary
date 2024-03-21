#ifndef TEST_LIB_BARU_GLOBAL_H
#define TEST_LIB_BARU_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TEST_LIB_BARU_LIBRARY)
#  define TEST_LIB_BARU_EXPORT Q_DECL_EXPORT
#else
#  define TEST_LIB_BARU_EXPORT Q_DECL_IMPORT
#endif

#endif // TEST_LIB_BARU_GLOBAL_H
