/* Module: sfppack1.dll
   Function: FUN_5cdb89b0
   Address: 5cdb89b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdb89b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce13408;
  param_1[3] = &PTR_FUN_5ce133cc;
  param_1[4] = &PTR_LAB_5ce133b8;
  param_1[0x26] = &PTR_LAB_5ce13348;
  param_1[0xfe] = &PTR_LAB_5ce13338;
  param_1[0xff] = &PTR_LAB_5ce13318;
  param_1[0x100] = &PTR_LAB_5ce13300;
  FUN_5cdbc750((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x26)));
  FUN_5cdff872((int)param_1);
  return;
}


