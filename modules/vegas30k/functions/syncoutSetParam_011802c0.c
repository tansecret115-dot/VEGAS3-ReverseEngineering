/* Module: vegas30k.dll
   Function: syncoutSetParam
   Address: 011802c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* __stdcall syncoutSetParam,12 */

void syncoutSetParam(int param_1,undefined4 param_2,int param_3)

{
                    /* 0x1802c0  1446  _syncoutSetParam@12 */
  if (param_1 != 0) {
    switch(param_2) {
    case 0:
      if (param_3 != 0) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
        return;
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
      return;
    case 1:
      *(int *)(param_1 + 0x28) = param_3;
      return;
    case 2:
      *(int *)(param_1 + 0x2c) = param_3;
      return;
    case 3:
      *(int *)(param_1 + 0x38) = param_3;
      return;
    case 4:
      *(int *)(param_1 + 0x3c) = param_3;
      return;
    case 5:
      *(int *)(param_1 + 0x40) = param_3;
      return;
    case 6:
      *(int *)(param_1 + 0x44) = param_3;
      return;
    case 7:
      *(int *)(param_1 + 0x48) = param_3;
      return;
    case 8:
      *(int *)(param_1 + 0x4c) = param_3;
      return;
    case 10:
      *(int *)(param_1 + 0x5c) = param_3;
      return;
    case 0xb:
      if (param_3 != 0) {
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
        return;
      }
      *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
      return;
    case 0xc:
      *(int *)(param_1 + 0x58) = param_3;
    }
  }
  return;
}


