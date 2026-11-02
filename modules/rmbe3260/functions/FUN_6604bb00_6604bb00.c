/* Module: rmbe3260.dll
   Function: FUN_6604bb00
   Address: 6604bb00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604bb00(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068688;
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_6604b590(param_1);
  return;
}


