/* Module: sfppack2.dll
   Function: FUN_5ccdc640
   Address: 5ccdc640
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5ccdc640(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cd51e6c;
  param_1[3] = &PTR_FUN_5cd51e30;
  param_1[4] = &PTR_LAB_5cd51e1c;
  param_1[0x26] = &PTR_LAB_5cd51dc0;
  param_1[0x7c] = &PTR_LAB_5cd51db0;
  param_1[0x7d] = &PTR_LAB_5cd51d90;
  param_1[0x7e] = &PTR_LAB_5cd51d78;
  FUN_5ccdfad0((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 0x26)));
  FUN_5cd3e6f2((int)param_1);
  return;
}


