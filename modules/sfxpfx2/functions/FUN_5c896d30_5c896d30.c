/* Module: sfxpfx2.dll
   Function: FUN_5c896d30
   Address: 5c896d30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c896d30(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c8dcb20;
  param_1[3] = &PTR_FUN_5c8dcae4;
  param_1[4] = &PTR_LAB_5c8dcad0;
  param_1[0x28] = &PTR_LAB_5c8dca84;
  param_1[0xc4] = &PTR_LAB_5c8dca74;
  param_1[0xc5] = &PTR_LAB_5c8dca54;
  param_1[0xc6] = &PTR_LAB_5c8dca3c;
  param_1[199] = &PTR_LAB_5c8dca18;
  FUN_5c899010((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x28)));
  FUN_5c8caaf2((int)param_1);
  return;
}


