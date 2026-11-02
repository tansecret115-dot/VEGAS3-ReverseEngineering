/* Module: pnrs3260.dll
   Function: FUN_606f1ad0
   Address: 606f1ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_606f1ad0(undefined4 *param_1)

{
  void *this;
  undefined4 *puVar1;
  
  this = operator_new(0xe0);
  if (this != (void *)0x0) {
    puVar1 = FUN_606f1d30(this,0x7f,0);
    *param_1 = puVar1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}


