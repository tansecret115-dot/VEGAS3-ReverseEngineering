/* Module: sfppack1.dll
   Function: FUN_5cdb2250
   Address: 5cdb2250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cdb2250(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5ce12b58;
  param_1[3] = &PTR_FUN_5ce12b1c;
  param_1[4] = &PTR_LAB_5ce12b08;
  param_1[0x26] = &PTR_LAB_5ce12ab0;
  param_1[0x72] = &PTR_LAB_5ce12aa0;
  param_1[0x73] = &PTR_LAB_5ce12a80;
  param_1[0x74] = &PTR_LAB_5ce12a68;
  FUN_5cdb5b90((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x26)));
  FUN_5cdff872((int)param_1);
  return;
}


