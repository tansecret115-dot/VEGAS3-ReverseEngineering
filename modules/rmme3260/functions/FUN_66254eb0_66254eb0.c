/* Module: rmme3260.dll
   Function: FUN_66254eb0
   Address: 66254eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66254eb0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_6626cbe0;
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete((void *)param_1[1]);
  }
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  return;
}


