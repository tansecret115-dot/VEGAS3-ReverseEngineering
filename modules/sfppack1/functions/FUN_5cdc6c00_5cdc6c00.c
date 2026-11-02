/* Module: sfppack1.dll
   Function: FUN_5cdc6c00
   Address: 5cdc6c00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc6c00(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5ce13c48;
  puVar1[1] = DAT_5ce13c4c;
  puVar1[2] = DAT_5ce13c50;
  puVar1[3] = DAT_5ce13c54;
  return 0;
}


