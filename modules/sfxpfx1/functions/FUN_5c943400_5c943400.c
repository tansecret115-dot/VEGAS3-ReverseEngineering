/* Module: sfxpfx1.dll
   Function: FUN_5c943400
   Address: 5c943400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c943400(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  *param_2 = 1;
  puVar1 = CoTaskMemAlloc(0x10);
  param_2[1] = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x8007000e;
  }
  *puVar1 = DAT_5c98b530;
  puVar1[1] = DAT_5c98b534;
  puVar1[2] = DAT_5c98b538;
  puVar1[3] = DAT_5c98b53c;
  return 0;
}


