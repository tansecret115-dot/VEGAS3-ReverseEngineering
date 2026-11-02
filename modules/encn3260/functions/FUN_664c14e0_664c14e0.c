/* Module: encn3260.dll
   Function: FUN_664c14e0
   Address: 664c14e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c14e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df790;
  param_1[1] = &PTR_LAB_664df750;
  if ((undefined4 *)param_1[3] != (undefined4 *)0x0) {
    FUN_664c1ae0((undefined4 *)param_1[3]);
    param_1[3] = 0;
  }
  param_1[4] = 0;
  FUN_664c10e0(param_1 + 10);
  FUN_664c0ef0(param_1 + 6);
  return;
}


