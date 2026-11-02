/* Module: aviplug.dll
   Function: FUN_5f931aa0
   Address: 5f931aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f931aa0(undefined4 *param_1)

{
  param_1[1] = &PTR_LAB_5f9d7774;
  param_1[2] = &PTR_LAB_5f9d7758;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_5f9d7714;
  param_1[1] = &PTR_LAB_5f9d76f0;
  param_1[2] = &PTR_LAB_5f9d76d4;
  DAT_5f9f416c = DAT_5f9f416c & 0xfffffff7 | 0x17;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return param_1;
}


