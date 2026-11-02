/* Module: rmto3260.dll
   Function: FUN_662feea0
   Address: 662feea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662feea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_663083b8;
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
  FUN_662fdc70(param_1);
  return;
}


