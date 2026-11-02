/* Module: vidcap30.exe
   Function: FUN_00557090
   Address: 00557090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00557090(undefined2 *param_1,float *param_2,uint param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 != 0) {
    param_4 = param_4 * (float)_DAT_0059a178;
    uVar2 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * param_4);
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      *param_1 = (short)iVar1;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar2 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * param_4);
      if (0x7fff < (int)ROUND(*param_2 * param_4)) {
        iVar1 = 0x7fff;
      }
      iVar3 = (int)ROUND(param_2[1] * param_4);
      if (0x7fff < (int)ROUND(param_2[1] * param_4)) {
        iVar3 = 0x7fff;
      }
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      *param_1 = (short)iVar1;
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      param_1[1] = (short)iVar3;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


