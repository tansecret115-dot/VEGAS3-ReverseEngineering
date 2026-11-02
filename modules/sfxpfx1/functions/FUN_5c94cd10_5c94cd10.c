/* Module: sfxpfx1.dll
   Function: FUN_5c94cd10
   Address: 5c94cd10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c94cd10(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5c98bf78;
  puVar1[1] = DAT_5c98bf7c;
  puVar1[2] = DAT_5c98bf80;
  puVar1[3] = DAT_5c98bf84;
  return 0;
}


