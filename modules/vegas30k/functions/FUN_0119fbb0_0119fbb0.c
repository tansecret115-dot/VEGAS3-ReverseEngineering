/* Module: vegas30k.dll
   Function: FUN_0119fbb0
   Address: 0119fbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0119fbb0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_011eaa80;
  FUN_01199570();
  piVar1 = (int *)param_1[0x12e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  iVar2 = param_1[400];
  param_1[0x12e] = 0;
  while (iVar2 != 0) {
    piVar1 = *(int **)param_1[400];
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)((int *)param_1[400])[1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    else {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (*(void **)(param_1[400] + 0x10) != (void *)0x0) {
      free(*(void **)(param_1[400] + 0x10));
    }
    iVar2 = *(int *)((int)param_1[400] + 0x34);
    free((void *)param_1[400]);
    param_1[400] = iVar2;
  }
  if (param_1[0x19b] != 0) {
    FUN_011b23e0();
    (**(code **)(*(int *)param_1[0x19b] + 8))((int *)param_1[0x19b]);
  }
  param_1[0x19b] = 0;
  FUN_011992f0();
  return;
}


