/* Module: pnrs3260.dll
   Function: FUN_606f1830
   Address: 606f1830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_606f1830(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_606f30c8;
  puVar1 = operator_new(8);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_606f1930(puVar1);
    param_1[1] = puVar1;
    param_1[2] = 0;
    return param_1;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


