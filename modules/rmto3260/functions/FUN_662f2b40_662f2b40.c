/* Module: rmto3260.dll
   Function: FUN_662f2b40
   Address: 662f2b40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f2b40(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4);
    piVar2 = (int *)(iVar1 + iVar3 * 8);
    if (-1 < iVar3 + -1) {
      do {
        piVar2 = piVar2 + -2;
        FUN_662f2850(piVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    operator_delete((void *)(iVar1 + -4));
  }
  return;
}


