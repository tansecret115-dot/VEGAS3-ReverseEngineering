/* Module: pnrs3260.dll
   Function: FUN_606f19a0
   Address: 606f19a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606f19a0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  *param_1 = &PTR_FUN_606f3114;
  if (piVar1 != (int *)0x0) {
    FUN_606f1b00(piVar1);
    operator_delete(piVar1);
  }
  param_1[1] = 0;
  return;
}


