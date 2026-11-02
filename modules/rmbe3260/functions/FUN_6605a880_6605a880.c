/* Module: rmbe3260.dll
   Function: FUN_6605a880
   Address: 6605a880
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605a880(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_66068c28;
  param_1[4] = &PTR_LAB_66068bf8;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
    param_1[5] = 0;
  }
  FUN_6605ad90((int)param_1);
  FUN_6605adf0((int)param_1);
  FUN_6605c430(param_1 + 0x11);
  FUN_6605c430(param_1 + 0xc);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


