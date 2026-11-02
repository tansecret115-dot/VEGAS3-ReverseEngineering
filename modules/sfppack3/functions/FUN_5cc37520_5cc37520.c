/* Module: sfppack3.dll
   Function: FUN_5cc37520
   Address: 5cc37520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cc37520(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5cc87e08;
  puVar1[1] = DAT_5cc87e0c;
  puVar1[2] = DAT_5cc87e10;
  puVar1[3] = DAT_5cc87e14;
  return 0;
}


