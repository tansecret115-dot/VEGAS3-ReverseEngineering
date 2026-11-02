/* Module: sfxpfx1.dll
   Function: FUN_5c94c300
   Address: 5c94c300
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c94c300(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c98c0a0;
  param_1[3] = &PTR_FUN_5c98c064;
  param_1[4] = &PTR_LAB_5c98c050;
  param_1[0x28] = &PTR_LAB_5c98c004;
  param_1[0x82c] = &PTR_LAB_5c98bff4;
  param_1[0x82d] = &PTR_LAB_5c98bfd4;
  param_1[0x82e] = &PTR_LAB_5c98bfbc;
  param_1[0x82f] = &PTR_LAB_5c98bf98;
  FUN_5c94e580((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x28)));
  FUN_5c9791c2((int)param_1);
  return;
}


