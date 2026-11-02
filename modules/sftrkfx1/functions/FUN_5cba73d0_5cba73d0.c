/* Module: sftrkfx1.dll
   Function: FUN_5cba73d0
   Address: 5cba73d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cba73d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + 0x28;
  *param_1 = &PTR_LAB_5cc044ec;
  param_1[3] = &PTR_LAB_5cc044b0;
  param_1[4] = &PTR_LAB_5cc0449c;
  *puVar1 = &PTR_LAB_5cc0439c;
  param_1[0x108] = &PTR_LAB_5cc0438c;
  param_1[0x109] = &PTR_LAB_5cc0436c;
  param_1[0x10a] = &PTR_LAB_5cc04354;
  param_1[0x10b] = &PTR_LAB_5cc04330;
  thunk_FUN_5cbb56c0((int)puVar1);
  FUN_5cbb5520((undefined4 *)(-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1));
  FUN_5cbf2c92((int)param_1);
  return;
}


