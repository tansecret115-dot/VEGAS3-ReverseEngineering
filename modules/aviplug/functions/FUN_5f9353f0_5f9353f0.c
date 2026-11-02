/* Module: aviplug.dll
   Function: FUN_5f9353f0
   Address: 5f9353f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f9353f0(undefined4 *param_1)

{
  param_1[1] = &PTR_LAB_5f9d7774;
  param_1[2] = &PTR_LAB_5f9d7b90;
  param_1[3] = &PTR_LAB_5f9d7b7c;
  param_1[4] = &PTR_LAB_5f9d7b68;
  param_1[5] = &PTR_LAB_5f9d7b58;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *param_1 = &PTR_FUN_5f9d7ad4;
  param_1[1] = &PTR_LAB_5f9d7ab0;
  param_1[2] = &PTR_LAB_5f9d7a9c;
  param_1[3] = &PTR_LAB_5f9d7a88;
  param_1[4] = &PTR_LAB_5f9d7a74;
  param_1[5] = &PTR_LAB_5f9d7a64;
  DAT_5f9f4194 = DAT_5f9f4194 & 0xffffffe7 | 0x527;
  param_1[0xd] = 0;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return param_1;
}


