/* Module: encn3260.dll
   Function: FUN_664d10f0
   Address: 664d10f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d10f0(int *param_1)

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
        FUN_664d0e00(piVar2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    operator_delete((void *)(iVar1 + -4));
  }
  return;
}


