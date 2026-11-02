/* Module: sftrkfx1.dll
   Function: FUN_5cbbb5d0
   Address: 5cbbb5d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbbb5d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cc04d60;
  puVar1[1] = DAT_5cc04d64;
  puVar1[2] = DAT_5cc04d68;
  puVar1[3] = DAT_5cc04d6c;
  return 0;
}


