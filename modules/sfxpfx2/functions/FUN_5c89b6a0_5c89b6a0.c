/* Module: sfxpfx2.dll
   Function: FUN_5c89b6a0
   Address: 5c89b6a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c89b6a0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5c8dcfd0;
  param_1[3] = &PTR_FUN_5c8dcf94;
  param_1[4] = &PTR_LAB_5c8dcf80;
  param_1[0x28] = &PTR_LAB_5c8dcf3c;
  param_1[0xea] = &PTR_LAB_5c8dcf2c;
  param_1[0xeb] = &PTR_LAB_5c8dcf0c;
  param_1[0xec] = &PTR_LAB_5c8dcef4;
  param_1[0xed] = &PTR_LAB_5c8dced0;
  FUN_5c89d910((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x28)));
  FUN_5c8caaf2((int)param_1);
  return;
}


