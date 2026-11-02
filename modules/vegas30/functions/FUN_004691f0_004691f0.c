/* Module: vegas30.exe
   Function: FUN_004691f0
   Address: 004691f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004691f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((DAT_0064761c & 0x800) == 0) {
    if (*(int *)(param_1 + 0xbc8) != 0) {
      iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      if (iVar1 != 0) {
        if (*(int *)(param_1 + 0xbc8) == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
        }
        if ((*piVar2 != 0) && (*(int *)(param_1 + 0xb78) != 0 || *(int *)(param_1 + 0xb7c) != 0)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


