/* Module: encn3260.dll
   Function: FUN_664d64b0
   Address: 664d64b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d64b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664e0010;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete((void *)param_1[2]);
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  return;
}


