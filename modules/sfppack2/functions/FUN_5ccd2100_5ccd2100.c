/* Module: sfppack2.dll
   Function: FUN_5ccd2100
   Address: 5ccd2100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccd2100(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd51380;
  param_1[3] = &PTR_LAB_5cd51344;
  param_1[4] = &PTR_LAB_5cd51330;
  param_1[0x26] = &PTR_LAB_5cd51240;
  param_1[0x2d4] = &PTR_LAB_5cd51230;
  param_1[0x2d5] = &PTR_LAB_5cd51210;
  param_1[0x2d6] = &PTR_LAB_5cd511f8;
  FUN_5ccd5060((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x26)));
  FUN_5cd3e6f2((int)param_1);
  return;
}


