/* Module: rmme3260.dll
   Function: FUN_66267e70
   Address: 66267e70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66267e70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626d558;
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
    FUN_66268130((int)param_1);
  }
  FUN_662661b0(param_1);
  return;
}


