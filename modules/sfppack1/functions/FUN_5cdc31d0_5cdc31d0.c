/* Module: sfppack1.dll
   Function: FUN_5cdc31d0
   Address: 5cdc31d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc31d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5ce13870;
  puVar1[1] = DAT_5ce13874;
  puVar1[2] = DAT_5ce13878;
  puVar1[3] = DAT_5ce1387c;
  return 0;
}


