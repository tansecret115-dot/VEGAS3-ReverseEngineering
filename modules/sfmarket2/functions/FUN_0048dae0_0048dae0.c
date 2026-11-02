/* Module: sfmarket2.dll
   Function: FUN_0048dae0
   Address: 0048dae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0048dae0(short *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = *param_1 - param_2;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  iVar1 = 0;
  for (; iVar2 != 0; iVar2 = iVar2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  piVar5 = &DAT_004a3b88;
  *(int *)(param_3 + iVar1 * 4) = *(int *)(param_3 + iVar1 * 4) + 1;
  uVar4 = 0;
  do {
    iVar2 = (int)param_1[*piVar5];
    if (iVar2 == 0) {
      uVar4 = uVar4 + 1;
    }
    else {
      if (0xf < (int)uVar4) {
        uVar3 = uVar4 >> 4;
        uVar4 = uVar4 + uVar3 * -0x10;
        iVar1 = param_4[0xf0];
        do {
          iVar1 = iVar1 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        param_4[0xf0] = iVar1;
      }
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      iVar1 = 1;
      while (iVar2 = iVar2 >> 1, iVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = uVar4 * 0x10 + iVar1;
      uVar4 = 0;
      param_4[iVar1] = param_4[iVar1] + 1;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0x4a3c84);
  if (0 < (int)uVar4) {
    *param_4 = *param_4 + 1;
  }
  return;
}


