/* Module: pngu3266.dll
   Function: FUN_60619d20
   Address: 60619d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_60619d20(void *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)((int)param_1 + 0xc)) {
    do {
      if (*(int *)(*(int *)((int)param_1 + 8) + iVar1 * 4) != 0) {
        FUN_6061a080(param_1,iVar1);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)param_1 + 0xc));
  }
  operator_delete(*(void **)((int)param_1 + 8));
  FUN_60619e70((int)param_1);
  return;
}


