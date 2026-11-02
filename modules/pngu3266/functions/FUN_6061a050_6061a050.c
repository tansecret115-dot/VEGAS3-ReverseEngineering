/* Module: pngu3266.dll
   Function: FUN_6061a050
   Address: 6061a050
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6061a050(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0xc);
  puVar1[2] = 0;
  puVar1[1] = param_1;
  *puVar1 = param_2;
  return;
}


