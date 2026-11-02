/* Module: qt4plug.dll
   Function: FUN_5f56e2a0
   Address: 5f56e2a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f56e2a0(undefined1 *param_1,undefined1 *param_2,int param_3,float param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (param_4 == (float)_DAT_5f596670) {
    if (param_1 == param_2) {
      if (0 < param_3) {
        do {
          uVar1 = *param_1;
          *param_1 = param_1[1];
          param_1[1] = uVar1;
          param_1 = param_1 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
    }
    else if (0 < param_3) {
      puVar2 = param_1 + 1;
      puVar4 = param_2;
      do {
        puVar2[-1] = puVar2[(int)param_2 - (int)param_1];
        *puVar2 = *puVar4;
        puVar2 = puVar2 + 2;
        param_3 = param_3 + -1;
        puVar4 = puVar4 + 2;
      } while (param_3 != 0);
      return;
    }
  }
  else if (0 < param_3) {
    iVar5 = (int)param_1 - (int)param_2;
    do {
      iVar3 = ftol();
      if (iVar3 < -0x8000) {
        iVar3 = -0x8000;
      }
      else if (0x7fff < iVar3) {
        iVar3 = 0x7fff;
      }
      *(short *)(param_2 + iVar5) = (short)iVar3;
      param_2 = param_2 + 2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


