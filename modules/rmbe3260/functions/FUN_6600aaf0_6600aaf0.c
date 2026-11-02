/* Module: rmbe3260.dll
   Function: FUN_6600aaf0
   Address: 6600aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6600aaf0(undefined4 *param_1)

{
  int *piVar1;
  int local_10;
  void *local_c;
  byte *local_8;
  
  *param_1 = &PTR_FUN_66064660;
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 0x18))();
    if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x13])(1);
    }
    param_1[0x13] = 0;
  }
  if (param_1[0x23] != 0) {
    do {
      piVar1 = (int *)FUN_6605c4d0(param_1 + 0x1f);
      if (piVar1 != (int *)0x0) {
        FUN_6605b770(piVar1);
        operator_delete(piVar1);
      }
    } while (param_1[0x23] != 0);
  }
  if (param_1[0x16] != 0) {
    local_8 = (byte *)0x0;
    local_c = (void *)0x0;
    local_10 = -1;
    do {
      FUN_6605cd60(param_1 + 0x14,&local_10,&local_8,&local_c);
      FUN_6605cb80(param_1 + 0x14,local_8);
      local_8 = (byte *)0x0;
      operator_delete(local_c);
    } while (local_10 != 0);
  }
  FUN_6605c430(param_1 + 0x1f);
  FUN_6605b770(param_1 + 0x1c);
  thunk_FUN_6605c880(param_1 + 0x14);
  FUN_66014800(param_1);
  return;
}


