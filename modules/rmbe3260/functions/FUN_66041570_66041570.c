/* Module: rmbe3260.dll
   Function: FUN_66041570
   Address: 66041570
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66041570(int *param_1)

{
  *param_1 = (int)&PTR_FUN_66068120;
  FUN_66042120(param_1);
  if (*(int **)((int)param_1 + 0xaa) != (int *)0x0) {
    FUN_66043a80(*(int **)((int)param_1 + 0xaa));
    *(undefined4 *)((int)param_1 + 0xaa) = 0;
  }
  if (*(void **)((int)param_1 + 0x3a) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x3a));
  }
  if (*(void **)((int)param_1 + 0xc6) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xc6));
    *(undefined4 *)((int)param_1 + 0xc6) = 0;
  }
  if (*(void **)((int)param_1 + 0xde) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xde));
    *(undefined4 *)((int)param_1 + 0xde) = 0;
  }
  FUN_6605b770((int *)((int)param_1 + 0xe6));
  FUN_6603ec00(param_1);
  return;
}


