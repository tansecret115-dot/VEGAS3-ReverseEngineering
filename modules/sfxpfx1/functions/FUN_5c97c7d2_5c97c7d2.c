/* Module: sfxpfx1.dll
   Function: FUN_5c97c7d2
   Address: 5c97c7d2
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5c97c7d2(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CoTaskMemAlloc(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5c97c7f1(puVar1,param_1);
  }
  return puVar1;
}


