/* Module: vidcap30.exe
   Function: FUN_00443800
   Address: 00443800
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00443800(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x10) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = **(int **)(param_1 + 0x10);
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (uVar1 != 0) {
        return;
      }
      iVar2 = FUN_004437e0(param_1,iVar3);
      uVar1 = *(uint *)(iVar2 + 0x38) >> 5 & 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}


