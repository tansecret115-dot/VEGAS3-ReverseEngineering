/* Module: auth3260.dll
   Function: FUN_627a1f50
   Address: 627a1f50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627a1f50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[0x19];
  *param_1 = &PTR_FUN_627a7a08;
  param_1[4] = &PTR_LAB_627a79f0;
  param_1[5] = &PTR_LAB_627a79d8;
  param_1[6] = &PTR_LAB_627a79c8;
  param_1[7] = &PTR_LAB_627a79b8;
  param_1[8] = &PTR_LAB_627a79a8;
  param_1[9] = &PTR_LAB_627a7998;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x19] = 0;
  }
  piVar1 = (int *)param_1[0x1a];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1a] = 0;
  }
  piVar1 = (int *)param_1[0x1b];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1b] = 0;
  }
  FUN_627a19d0();
  FUN_627a1840(param_1 + 0x11);
  thunk_FUN_627a6080(param_1 + 0x10);
  thunk_FUN_627a6080(param_1 + 0xf);
  thunk_FUN_627a6080(param_1 + 0xe);
  thunk_FUN_627a6080(param_1 + 0xd);
  thunk_FUN_627a6080(param_1 + 0xc);
  thunk_FUN_627a6080(param_1 + 0xb);
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[10] = 0;
  }
  *param_1 = &PTR_FUN_627a7970;
  return;
}


