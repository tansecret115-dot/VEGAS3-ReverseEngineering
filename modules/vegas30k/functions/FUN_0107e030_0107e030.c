/* Module: vegas30k.dll
   Function: FUN_0107e030
   Address: 0107e030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0107e030(short *param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar3 = 0;
  if (0 < param_3) {
    local_4 = param_3;
    do {
      iVar4 = (int)*param_1;
      if ((*(int *)(param_5 + iVar3 * 8) == 0) && (*(int *)(param_5 + 4 + iVar3 * 8) == 0x3ff00000))
      {
        iVar4 = iVar4 + *(short *)(param_2 + 1);
      }
      else {
        iVar2 = ftol();
        if (iVar2 < -0x8000) {
          iVar4 = iVar4 + -0x8000;
        }
        else {
          if (0x7fff < iVar2) {
            iVar2 = 0x7fff;
          }
          iVar4 = iVar4 + (short)iVar2;
        }
      }
      if (iVar4 < -0x8000) {
        sVar1 = -0x8000;
      }
      else {
        sVar1 = 0x7fff;
        if (iVar4 < 0x8000) {
          sVar1 = (short)iVar4;
        }
      }
      *param_1 = sVar1;
      iVar3 = iVar3 + 1;
      if (param_4 == iVar3) {
        iVar3 = 0;
      }
      param_2 = param_2 + 3;
      param_1 = param_1 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}


