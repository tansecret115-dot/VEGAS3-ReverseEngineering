/* Module: rmbe3260.dll
   Function: FUN_6604b5f0
   Address: 6604b5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6604b5f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068670;
  if ((void *)param_1[10] != (void *)0x0) {
    operator_delete((void *)param_1[10]);
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete((void *)param_1[0xc]);
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete((void *)param_1[6]);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[6] = 0;
  FUN_6604b590(param_1);
  return;
}


