/* Module: sfppack1.dll
   Function: FUN_5cdc6080
   Address: 5cdc6080
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdc6080(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce13e68;
  param_1[3] = &PTR_FUN_5ce13e2c;
  param_1[4] = &PTR_LAB_5ce13e18;
  param_1[0x28] = &PTR_LAB_5ce13cd4;
  param_1[0xd2] = &PTR_LAB_5ce13cc4;
  param_1[0xd3] = &PTR_LAB_5ce13ca4;
  param_1[0xd4] = &PTR_LAB_5ce13c8c;
  param_1[0xd5] = &PTR_LAB_5ce13c68;
  FUN_5cdcb630((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x28)));
  FUN_5cdff872((int)param_1);
  return;
}


