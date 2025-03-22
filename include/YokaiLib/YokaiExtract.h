#ifndef YOKAI_EXTRACT_H
#define YOKAI_EXTRACT_H
#include "YokaiType.h"
#include <stdio.h>
#ifdef __cplusplus
Yokai extractFromSave_YL(FILE* orFile);
extern "C"
{
#endif //__cplusplus
Yokai_t extractFromSave_YL(FILE* orFile);
#ifdef __cplusplus
}
#endif //__cplusplus
#endif //YOKAI_EXTRACT_H