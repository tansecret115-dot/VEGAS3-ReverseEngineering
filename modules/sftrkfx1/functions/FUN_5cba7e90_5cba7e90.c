/* Module: sftrkfx1.dll
   Function: FUN_5cba7e90
   Address: 5cba7e90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba7e90(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cc04310;
  puVar1[1] = DAT_5cc04314;
  puVar1[2] = DAT_5cc04318;
  puVar1[3] = DAT_5cc0431c;
  return 0;
}


