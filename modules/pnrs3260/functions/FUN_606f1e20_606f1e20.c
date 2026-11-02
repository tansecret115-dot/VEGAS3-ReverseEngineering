/* Module: pnrs3260.dll
   Function: FUN_606f1e20
   Address: 606f1e20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606f1e20(void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0xc)) {
    do {
      if (*(int *)(*(int *)((int)param_1 + 8) + iVar1 * 4) != 0) {
        FUN_606f2070(param_1,iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)param_1 + 0xc));
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  FUN_606f1ed0((int)param_1);
  return;
}


