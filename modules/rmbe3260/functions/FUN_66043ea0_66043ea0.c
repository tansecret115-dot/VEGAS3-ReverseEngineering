/* Module: rmbe3260.dll
   Function: FUN_66043ea0
   Address: 66043ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66043ea0(int *param_1)

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
    FUN_66046790((int)pvVar1);
    operator_delete(pvVar1);
    param_1[8] = 0;
  }
  if (*param_1 != 0) {
    FUN_6604b140(*param_1);
    pvVar1 = (void *)*param_1;
    if (pvVar1 != (void *)0x0) {
      FUN_6604ad40((int)pvVar1);
      operator_delete(pvVar1);
    }
  }
  FUN_66044350((int)param_1);
  return;
}


