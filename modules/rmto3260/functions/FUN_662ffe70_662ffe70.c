/* Module: rmto3260.dll
   Function: FUN_662ffe70
   Address: 662ffe70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ffe70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66308418;
  FUN_663004c0();
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete((void *)param_1[4]);
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_662fdc70(param_1);
  return;
}


