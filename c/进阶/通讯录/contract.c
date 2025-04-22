#include "contract.h"
void InitContract(Contract *pc)
{
    pc->count = 0;
    memset(pc->data, 0, sizeof(pc->data));
}