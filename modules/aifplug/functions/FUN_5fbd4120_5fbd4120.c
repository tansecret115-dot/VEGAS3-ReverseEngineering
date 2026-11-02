/* Module: aifplug.dll
   Function: FUN_5fbd4120
   Address: 5fbd4120
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5fbd4120(int *param_1,int *param_2,undefined4 *param_3)

{
  BOOL BVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  
  BVar1 = IsBadWritePtr(param_3,4);
  if (BVar1 != 0) {
    return 0x80004002;
  }
  *param_3 = 0;
  iVar2 = 4;
  bVar5 = true;
  piVar3 = &DAT_5fbfeaa0;
  piVar4 = param_2;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (!bVar5) {
    iVar2 = 4;
    bVar5 = true;
    piVar3 = &DAT_5fbfea90;
    piVar4 = param_2;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *piVar3 == *piVar4;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      iVar2 = 4;
      bVar5 = true;
      piVar3 = &DAT_5fc05498;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *piVar3 == *param_2;
        piVar3 = piVar3 + 1;
        param_2 = param_2 + 1;
      } while (bVar5);
      if (!bVar5) {
        return 0x80004002;
      }
    }
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}


