/* Module: sfppack3.dll
   Function: FUN_5cc782b4
   Address: 5cc782b4
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cc782b4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CoTaskMemAlloc(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5cc782d3(puVar1,param_1);
  }
  return puVar1;
}


