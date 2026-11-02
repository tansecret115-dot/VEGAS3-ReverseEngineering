/* Module: sftrkfx1.dll
   Function: FUN_5cbbab30
   Address: 5cbbab30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbbab30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc04e80;
  param_1[3] = &PTR_FUN_5cc04e44;
  param_1[4] = &PTR_LAB_5cc04e30;
  param_1[0x28] = &PTR_LAB_5cc04dec;
  param_1[0x60] = &PTR_LAB_5cc04ddc;
  param_1[0x61] = &PTR_LAB_5cc04dbc;
  param_1[0x62] = &PTR_LAB_5cc04da4;
  param_1[99] = &PTR_LAB_5cc04d80;
  FUN_5cbbcba0((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x28)));
  FUN_5cbf2c92((int)param_1);
  return;
}


