/* Module: vegas30k.dll
   Function: FUN_011b52f0
   Address: 011b52f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011b52f0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = 0;
    if (0 < *piVar1) {
      do {
        if (*(int *)(piVar1[1] * iVar2 + 8 + piVar1[2]) == 0) {
          return piVar1[1] * iVar2 + piVar1[2];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *piVar1);
    }
  }
  return 0;
}


