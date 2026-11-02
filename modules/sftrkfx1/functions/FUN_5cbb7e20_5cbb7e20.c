/* Module: sftrkfx1.dll
   Function: FUN_5cbb7e20
   Address: 5cbb7e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbb7e20(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cc04970;
  puVar1[1] = DAT_5cc04974;
  puVar1[2] = DAT_5cc04978;
  puVar1[3] = DAT_5cc0497c;
  return 0;
}


