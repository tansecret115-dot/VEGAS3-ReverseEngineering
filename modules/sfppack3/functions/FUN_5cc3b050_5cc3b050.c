/* Module: sfppack3.dll
   Function: FUN_5cc3b050
   Address: 5cc3b050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc3b050(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cc88278;
  puVar1[1] = DAT_5cc8827c;
  puVar1[2] = DAT_5cc88280;
  puVar1[3] = DAT_5cc88284;
  return 0;
}


