/* Module: vegas30k.dll
   Function: FUN_0103d0d0
   Address: 0103d0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_0103d0d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x3a0) < 2) {
    return (undefined1 *)0x1;
  }
  iVar5 = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  iVar2 = *(int *)(param_1 + 0x39c);
  iVar4 = 0;
  while( true ) {
    iVar3 = iVar2;
    if (iVar3 == 0) {
      return &DAT_80070057;
    }
    if (iVar1 == iVar3) break;
    iVar5 = iVar5 + 1;
    iVar2 = *(int *)(iVar3 + 0x224);
    iVar4 = iVar3;
  }
  if (param_3 < 0) {
    param_3 = iVar5 + param_3;
    if (param_3 < 0) {
      return &DAT_80070057;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(iVar3 + 0x224);
    }
    else {
      *(undefined4 *)(iVar4 + 0x224) = *(undefined4 *)(iVar3 + 0x224);
    }
    iVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x39c);
  }
  else {
    if (*(int *)(param_1 + 0x3a0) <= iVar5 + param_3) {
      return &DAT_80070057;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(iVar3 + 0x224);
      iVar2 = *(int *)(iVar3 + 0x224);
    }
    else {
      *(undefined4 *)(iVar4 + 0x224) = *(undefined4 *)(iVar3 + 0x224);
      iVar2 = *(int *)(iVar3 + 0x224);
    }
  }
  for (; iVar5 = iVar2, param_3 != 0; param_3 = param_3 + -1) {
    iVar2 = *(int *)(iVar5 + 0x224);
    iVar4 = iVar5;
  }
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x39c) = iVar1;
    *(int *)(iVar1 + 0x224) = iVar5;
    return (undefined1 *)0x0;
  }
  *(int *)(iVar4 + 0x224) = iVar1;
  *(int *)(iVar1 + 0x224) = iVar5;
  return (undefined1 *)0x0;
}


