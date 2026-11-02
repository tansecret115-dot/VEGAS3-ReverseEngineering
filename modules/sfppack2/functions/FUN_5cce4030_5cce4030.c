/* Module: sfppack2.dll
   Function: FUN_5cce4030
   Address: 5cce4030
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cce4030(int param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *local_8;
  
  iVar1 = FUN_5cce3ee0((int)param_4);
  iVar2 = MulDiv(param_6,100,10);
  iVar2 = iVar2 / 2;
  iVar5 = iVar1 - iVar2;
  param_6 = iVar2 + iVar1;
  if (iVar5 < iVar1) {
    local_8 = (int *)(param_2 + param_6 * 4);
    param_4 = (int *)(param_2 + iVar5 * 4);
    iVar4 = iVar5;
    do {
      iVar3 = MulDiv(iVar4 - iVar5,1000,iVar2);
      iVar3 = MulDiv(param_5,*(int *)(param_1 + iVar3 * 4),0xfa);
      if (0 < iVar4) {
        *param_4 = *param_4 + iVar3;
      }
      if (param_6 < param_3) {
        *local_8 = *local_8 + iVar3;
      }
      iVar4 = iVar4 + 1;
      param_4 = param_4 + 1;
      param_6 = param_6 + -1;
      local_8 = local_8 + -1;
    } while (iVar4 < iVar1);
  }
  iVar2 = MulDiv(param_5,*(int *)(param_1 + 0xf9c),0xfa);
  *(int *)(param_2 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + iVar2;
  return;
}


