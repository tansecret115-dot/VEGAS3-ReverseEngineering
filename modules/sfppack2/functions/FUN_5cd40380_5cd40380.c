/* Module: sfppack2.dll
   Function: FUN_5cd40380
   Address: 5cd40380
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cd40380(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CoTaskMemAlloc(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5cd4039f(puVar1,param_1);
  }
  return puVar1;
}


