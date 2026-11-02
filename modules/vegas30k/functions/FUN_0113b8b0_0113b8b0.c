/* Module: vegas30k.dll
   Function: FUN_0113b8b0
   Address: 0113b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113b8b0(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  iVar2 = 4;
  bVar5 = true;
  *param_3 = 0;
  uVar1 = 0x80004002;
  piVar3 = param_2;
  piVar4 = &DAT_011dab80;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    *param_3 = param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = param_2;
  piVar4 = &DAT_011ed320;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    *param_3 = param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = param_2;
  piVar4 = &DAT_011ed330;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    *param_3 = param_1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return 0;
  }
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_011ed380;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *param_2 == *piVar3;
    param_2 = param_2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar5);
  if (bVar5) {
    if (param_1 != 0) {
      *param_3 = param_1 + 4;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return 0;
    }
    uVar1 = 0;
    *param_3 = 0;
    iRam00000008 = iRam00000008 + 1;
  }
  return uVar1;
}


