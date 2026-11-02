/* Module: encn3260.dll
   Function: FUN_664c1ea0
   Address: 664c1ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c1ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df800;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    FUN_664c1ae0((undefined4 *)param_1[1]);
    param_1[1] = 0;
  }
  operator_delete((void *)param_1[4]);
  return;
}


