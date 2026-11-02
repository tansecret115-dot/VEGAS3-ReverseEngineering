/* Module: vegas30.exe
   Function: FUN_005f2a80
   Address: 005f2a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_005f2a80(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x160);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    if (0 < *piVar1) {
      while (param_2 != *(int *)(piVar1[2] + piVar1[1] * iVar3)) {
        iVar3 = iVar3 + 1;
        if (*piVar1 <= iVar3) {
          return uVar2;
        }
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}


