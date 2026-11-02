/* Module: oggplug.dll
   Function: FUN_004084e0
   Address: 004084e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004084e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x330) == 0) {
    local_4 = FUN_004140e0((int *)(param_1 + 0x330),4,-1,-1,0x80000002);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x228)) {
      do {
        pcVar1 = *(char **)(*(int *)(param_1 + 0x220) + iVar3 * 4);
        iVar2 = FUN_00402b30(pcVar1,&local_8);
        if (iVar2 != 0) {
          FUN_00408430(*(int **)(param_1 + 0x330),iVar2,pcVar1 + local_8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x228));
    }
    return local_4;
  }
  return 0;
}


