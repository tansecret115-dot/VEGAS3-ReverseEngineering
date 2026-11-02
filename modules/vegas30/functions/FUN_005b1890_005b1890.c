/* Module: vegas30.exe
   Function: FUN_005b1890
   Address: 005b1890
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005b1890(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_005b1870(1);
  *(int *)(param_1 + 0x834) = iVar1;
  if (iVar1 != 0) {
    puVar3 = param_2;
    puVar4 = (undefined4 *)(iVar1 + 0x14);
    for (iVar2 = 0x208; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar1 = FUN_005b1870(2);
    *(int *)(param_1 + 0x838) = iVar1;
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)(iVar1 + 0x14);
      for (iVar2 = 0x208; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      return 0;
    }
  }
  return 0x8007000e;
}


