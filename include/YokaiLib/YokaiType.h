#ifndef YOKAI_TYPE_H
#define YOKAI_TYPE_H
#include <stdint.h>
typedef uint16_t YK_id_t;
#ifdef __cplusplus
class Yokai
{
    public:
        YK_id_t id;
        char nickname[8];
        uint8_t level;
        int IV_A[5];
        int IV_B_1[5];
        int IV_B_2[5];
        int EV[5];
        int rawEV;
};
extern "C"
{
#endif //__cplusplus
typedef struct YokaiS
{
    YK_id_t id;
    char nickname[8];
    uint8_t level;
    int IV_A[5];
    int IV_B_1[5];
    int IV_B_2[5];
    int EV[5];
    int rawEV;
}Yokai_t;
#ifdef __cplusplus
}
#endif //__cplusplus
#endif //YOKAI_TYPE_H