/* Module: sfxpfx2.dll
   Function: FUN_5c89c200
   Address: 5c89c200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c89c200(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5c8dceb0;
  puVar1[1] = DAT_5c8dceb4;
  puVar1[2] = DAT_5c8dceb8;
  puVar1[3] = DAT_5c8dcebc;
  return 0;
}


