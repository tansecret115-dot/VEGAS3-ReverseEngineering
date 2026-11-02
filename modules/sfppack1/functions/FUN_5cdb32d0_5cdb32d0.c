/* Module: sfppack1.dll
   Function: FUN_5cdb32d0
   Address: 5cdb32d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cdb32d0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = _DAT_5ce12a38;
  puVar1[1] = DAT_5ce12a3c;
  puVar1[2] = DAT_5ce12a40;
  puVar1[3] = DAT_5ce12a44;
  return 0;
}


