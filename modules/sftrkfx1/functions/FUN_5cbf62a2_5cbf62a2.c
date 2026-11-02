/* Module: sftrkfx1.dll
   Function: FUN_5cbf62a2
   Address: 5cbf62a2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cbf62a2(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CoTaskMemAlloc(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5cbf62c1(puVar1,param_1);
  }
  return puVar1;
}


