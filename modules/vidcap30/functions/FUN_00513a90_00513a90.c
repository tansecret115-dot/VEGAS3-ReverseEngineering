/* Module: vidcap30.exe
   Function: FUN_00513a90
   Address: 00513a90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00513a90(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar2 = FUN_00511920(param_1,param_2,&param_2);
  if (iVar2 != 0) {
    if (param_2 < *(int *)(param_1 + 0xac) - 1U) {
      iVar2 = param_2 * 0x1c;
      do {
        param_2 = param_2 + 1;
        iVar1 = iVar2 + 0x1c;
        puVar5 = (undefined4 *)(iVar2 + *(int *)(param_1 + 0xbc));
        iVar2 = iVar2 + 0x1c;
        puVar4 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0xbc));
        for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
      } while (param_2 < *(int *)(param_1 + 0xac) - 1U);
    }
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
    return 1;
  }
  return 0;
}


