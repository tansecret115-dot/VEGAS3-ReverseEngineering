/* Module: rmme3260.dll
   Function: FUN_662694c0
   Address: 662694c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662694c0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626d1c8;
  param_1[1] = &PTR_LAB_6626d1b0;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete((void *)param_1[3]);
  }
  return;
}


