/* Module: aviplug.dll
   Function: FUN_5f9cbd50
   Address: 5f9cbd50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f9cbd50(undefined4 *param_1,undefined4 *param_2,int param_3,float param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_4 == (float)_DAT_5f9d7c98) {
    if (param_1 != param_2) {
      for (uVar2 = (uint)(param_3 * 3) >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
      for (uVar2 = param_3 * 3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        param_2 = (undefined4 *)((int)param_2 + 1);
        param_1 = (undefined4 *)((int)param_1 + 1);
      }
      return;
    }
  }
  else if (0 < param_3) {
    do {
      iVar1 = ftol();
      if (iVar1 < -0x800000) {
        iVar3 = -0x800000;
      }
      else {
        iVar3 = 0x7fffff;
        if (iVar1 < 0x800000) {
          iVar3 = iVar1;
        }
      }
      *(short *)param_1 = (short)iVar3;
      param_3 = param_3 + -1;
      *(char *)((int)param_1 + 2) = (char)((uint)iVar3 >> 0x10);
      param_1 = (undefined4 *)((int)param_1 + 3);
    } while (param_3 != 0);
  }
  return;
}


