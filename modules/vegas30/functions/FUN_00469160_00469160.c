/* Module: vegas30.exe
   Function: FUN_00469160
   Address: 00469160
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00469160(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xbc8) != 0) {
    iVar1 = FUN_005b87b0(*(int *)(param_1 + 0xbc8));
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0xbc8) == 0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
      }
      if (*piVar2 != 0) {
        if ((DAT_0064761c & 0x800) != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0xadc) == 1) {
          uVar3 = FUN_0052d940(param_1);
          return uVar3;
        }
        if ((((*(int **)(param_1 + 0xcd0) == (int *)0x0) || (**(int **)(param_1 + 0xcd0) < 1)) &&
            (*(int *)(param_1 + 0xb78) == 0)) && (*(int *)(param_1 + 0xb7c) == 0)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}


