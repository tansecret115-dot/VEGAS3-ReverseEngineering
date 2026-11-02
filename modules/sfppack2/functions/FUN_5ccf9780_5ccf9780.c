/* Module: sfppack2.dll
   Function: FUN_5ccf9780
   Address: 5ccf9780
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccf9780(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd53c9c;
  param_1[3] = &PTR_LAB_5cd53c60;
  param_1[4] = &PTR_LAB_5cd53c4c;
  param_1[0x26] = &PTR_LAB_5cd53bd8;
  param_1[0x88] = &PTR_LAB_5cd53bc8;
  param_1[0x89] = &PTR_LAB_5cd53ba8;
  param_1[0x8a] = &PTR_LAB_5cd53b90;
  FUN_5ccfcf80((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x26)));
  FUN_5cd3e6f2((int)param_1);
  return;
}


