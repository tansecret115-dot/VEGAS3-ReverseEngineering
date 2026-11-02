/* Module: wmfplug2.dll
   Function: FUN_0044dfc0
   Address: 0044dfc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044dfc0(undefined2 *param_1,float *param_2,uint param_3,float param_4)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    fVar1 = param_4 * (float)_DAT_00482c28;
    uVar3 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar2 = (int)ROUND(*param_2 * fVar1);
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      if (0x7fff < iVar2) {
        iVar2 = 0x7fff;
      }
      *param_1 = (short)iVar2;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar3 == 0) {
        return;
      }
    }
    do {
      iVar2 = (int)ROUND(*param_2 * fVar1);
      if (0x7fff < (int)ROUND(*param_2 * fVar1)) {
        iVar2 = 0x7fff;
      }
      iVar4 = (int)ROUND(param_2[1] * fVar1);
      if (0x7fff < (int)ROUND(param_2[1] * fVar1)) {
        iVar4 = 0x7fff;
      }
      if (iVar2 < -0x8000) {
        iVar2 = -0x8000;
      }
      *param_1 = (short)iVar2;
      if (iVar4 < -0x8000) {
        iVar4 = -0x8000;
      }
      param_1[1] = (short)iVar4;
      param_1 = param_1 + 2;
      param_2 = param_2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


