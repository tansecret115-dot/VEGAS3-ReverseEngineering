/* Module: vidcap30.exe
   Function: FUN_00556fb0
   Address: 00556fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00556fb0(undefined2 *param_1,float *param_2,uint param_3,float param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_3 != 0) {
    param_4 = param_4 * (float)_DAT_0059a178;
    uVar3 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * param_4);
      *param_1 = (short)iVar1;
      if (iVar1 < -0x8000) {
        *param_1 = 0x8000;
      }
      else if (0x7ffe < iVar1) {
        *param_1 = 0x7fff;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar3 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * param_4);
      iVar2 = (int)ROUND(param_2[1] * param_4);
      *param_1 = (short)iVar1;
      if (iVar1 < -0x8000) {
        *param_1 = 0x8000;
      }
      else if (0x7ffe < iVar1) {
        *param_1 = 0x7fff;
      }
      param_1[1] = (short)iVar2;
      if (iVar2 < -0x8000) {
        param_1[1] = 0x8000;
      }
      else if (0x7ffe < iVar2) {
        param_1[1] = 0x7fff;
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


