/* Module: rmto3260.dll
   Function: FUN_662f6860
   Address: 662f6860
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f6860(int *param_1)

{
  void *pvVar1;
  
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete((void *)param_1[0x10]);
    param_1[0x10] = 0;
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if (*(void **)((int)param_1 + 0x466) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x466));
    *(undefined4 *)((int)param_1 + 0x466) = 0;
  }
  if ((param_1[7] != 0) && (pvVar1 = (void *)param_1[8], pvVar1 != (void *)0x0)) {
    FUN_662f8f10((int)pvVar1);
    operator_delete(pvVar1);
    param_1[8] = 0;
  }
  if (*param_1 != 0) {
    FUN_662fec20(*param_1);
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      FUN_662fe820((int)pvVar1);
      operator_delete(pvVar1);
    }
  }
  FUN_662f6cb0((int)param_1);
  return;
}


