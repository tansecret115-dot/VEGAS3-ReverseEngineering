/* Module: vegas30k.dll
   Function: FUN_011a1660
   Address: 011a1660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011a1660(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int **)(param_1 + 0x438) == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(param_1 + 0x438);
    }
    iVar3 = 0;
    iVar1 = param_1;
    if (0 < iVar2) {
      do {
        iVar1 = FUN_011b4120();
        if (iVar1 < 0) {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  else {
    iVar1 = FUN_011b4120();
  }
  if (-1 < iVar1) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffffb;
  }
  return;
}


