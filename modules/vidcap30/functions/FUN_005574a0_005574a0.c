/* Module: vidcap30.exe
   Function: FUN_005574a0
   Address: 005574a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005574a0(undefined2 *param_1,double *param_2,uint param_3,float param_4)

{
  int iVar1;
  int iVar2;
  double dVar3;
  uint uVar4;
  
  if (param_3 != 0) {
    dVar3 = (double)(param_4 * (float)_DAT_0059a178);
    uVar4 = param_3 >> 1;
    if ((param_3 & 1) != 0) {
      iVar1 = (int)ROUND(*param_2 * dVar3);
      *param_1 = (short)iVar1;
      if (iVar1 < -0x8000) {
        *param_1 = 0x8000;
      }
      else if (0x7ffe < iVar1) {
        *param_1 = 0x7fff;
      }
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
      if (uVar4 == 0) {
        return;
      }
    }
    do {
      iVar1 = (int)ROUND(*param_2 * dVar3);
      iVar2 = (int)ROUND(param_2[1] * dVar3);
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
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


