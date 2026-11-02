/* Module: rmto3260.dll
   Function: FUN_662ff7b0
   Address: 662ff7b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ff7b0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_663083e8;
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


