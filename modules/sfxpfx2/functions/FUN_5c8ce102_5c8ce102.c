/* Module: sfxpfx2.dll
   Function: FUN_5c8ce102
   Address: 5c8ce102
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5c8ce102(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = CoTaskMemAlloc(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5c8ce121(puVar1,param_1);
  }
  return puVar1;
}


