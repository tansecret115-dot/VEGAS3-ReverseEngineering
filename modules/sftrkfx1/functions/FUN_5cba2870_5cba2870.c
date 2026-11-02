/* Module: sftrkfx1.dll
   Function: FUN_5cba2870
   Address: 5cba2870
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba2870(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cc03d28;
  puVar1[1] = DAT_5cc03d2c;
  puVar1[2] = DAT_5cc03d30;
  puVar1[3] = DAT_5cc03d34;
  return 0;
}


