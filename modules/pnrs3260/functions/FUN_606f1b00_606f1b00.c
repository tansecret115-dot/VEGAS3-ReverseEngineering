/* Module: pnrs3260.dll
   Function: FUN_606f1b00
   Address: 606f1b00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606f1b00(int *param_1)

{
  void *pvVar1;
  
  FUN_606f1ce0(param_1);
  pvVar1 = (void *)*param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_606f1d90(pvVar1);
    operator_delete(pvVar1);
  }
  *param_1 = 0;
  return;
}


