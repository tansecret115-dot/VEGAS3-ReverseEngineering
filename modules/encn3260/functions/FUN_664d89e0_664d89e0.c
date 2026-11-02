/* Module: encn3260.dll
   Function: FUN_664d89e0
   Address: 664d89e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d89e0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664e00f8;
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete((void *)param_1[8]);
    param_1[8] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    operator_delete((void *)param_1[9]);
    param_1[9] = 0;
  }
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_664d8ca0((int)param_1);
  }
  FUN_664d64b0(param_1);
  return;
}


