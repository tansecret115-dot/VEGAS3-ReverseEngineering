/* Module: rmme3260.dll
   Function: FUN_66268690
   Address: 66268690
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66268690(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626d588;
  param_1[1] = &PTR_LAB_6626d578;
  if (param_1[7] != 0) {
    FUN_662687a0((int)param_1);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete((void *)param_1[8]);
    param_1[8] = 0;
  }
  return;
}


