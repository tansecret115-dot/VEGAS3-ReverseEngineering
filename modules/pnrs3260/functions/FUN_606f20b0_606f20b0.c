/* Module: pnrs3260.dll
   Function: FUN_606f20b0
   Address: 606f20b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_606f20b0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  piVar2 = operator_new(8);
  piVar2[1] = -1;
  *piVar2 = 0;
  iVar3 = 0;
  if (*(int *)(param_1 + 0xc) < 1) {
    operator_delete(piVar2);
    return (int *)0x0;
  }
  piVar4 = *(int **)(param_1 + 8);
  do {
    if (*piVar4 != 0) {
      iVar1 = (*(int **)(param_1 + 8))[iVar3];
      piVar2[1] = iVar3;
      *piVar2 = iVar1;
      return piVar2;
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < *(int *)(param_1 + 0xc));
  operator_delete(piVar2);
  return (int *)0x0;
}


