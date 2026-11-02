/* Module: rmbe3260.dll
   Function: FUN_660100c0
   Address: 660100c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660100c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66064a20;
  if ((void *)param_1[0x33] != (void *)0x0) {
    operator_delete((void *)param_1[0x33]);
    param_1[0x33] = 0;
  }
  if ((void *)param_1[0x34] != (void *)0x0) {
    operator_delete((void *)param_1[0x34]);
    param_1[0x34] = 0;
  }
  FUN_660159e0(param_1);
  return;
}


