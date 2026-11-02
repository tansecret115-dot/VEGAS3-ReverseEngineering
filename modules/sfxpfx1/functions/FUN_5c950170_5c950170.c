/* Module: sfxpfx1.dll
   Function: FUN_5c950170
   Address: 5c950170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c950170(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5c98c330;
  puVar1[1] = DAT_5c98c334;
  puVar1[2] = DAT_5c98c338;
  puVar1[3] = DAT_5c98c33c;
  return 0;
}


