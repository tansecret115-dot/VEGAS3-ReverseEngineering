/* Module: sfppack1.dll
   Function: FUN_5ce008a3
   Address: 5ce008a3
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5ce008a3(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CoTaskMemAlloc(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5ce008c2(puVar1,param_1);
  }
  return puVar1;
}


