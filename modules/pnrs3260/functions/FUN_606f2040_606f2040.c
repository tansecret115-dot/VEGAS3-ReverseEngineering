/* Module: pnrs3260.dll
   Function: FUN_606f2040
   Address: 606f2040
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_606f2040(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  puVar1[2] = 0;
  puVar1[1] = param_1;
  *puVar1 = param_2;
  return;
}


