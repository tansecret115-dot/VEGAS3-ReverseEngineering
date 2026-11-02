/* Module: sfppack2.dll
   Function: FUN_5cd006f0
   Address: 5cd006f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cd006f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cd54060;
  puVar1[1] = DAT_5cd54064;
  puVar1[2] = DAT_5cd54068;
  puVar1[3] = DAT_5cd5406c;
  return 0;
}


