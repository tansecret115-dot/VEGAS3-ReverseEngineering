/* Module: vegas30k.dll
   Function: FUN_011b53c0
   Address: 011b53c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011b53c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)(param_1 + 0x10);
  iVar2 = param_2;
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    if (0 < *piVar1) {
      while (iVar2 = piVar1[1] * iVar3 + piVar1[2],
            *(int *)(piVar1[1] * iVar3 + piVar1[2]) != param_2) {
        iVar3 = iVar3 + 1;
        if (*piVar1 <= iVar3) {
          return 0;
        }
      }
    }
  }
  return iVar2;
}


