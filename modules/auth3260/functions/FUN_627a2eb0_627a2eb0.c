/* Module: auth3260.dll
   Function: FUN_627a2eb0
   Address: 627a2eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627a2eb0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_627a7ba8;
  param_1[4] = &PTR_LAB_627a7b90;
  param_1[5] = &PTR_LAB_627a7b78;
  param_1[6] = &PTR_LAB_627a7b68;
  param_1[7] = &PTR_LAB_627a7b50;
  param_1[8] = &PTR_LAB_627a7b38;
  param_1[9] = &PTR_LAB_627a7b20;
  thunk_FUN_627a6080(param_1 + 0x18);
  thunk_FUN_627a6080(param_1 + 0x17);
  FUN_627a19d0();
  FUN_627a1840(param_1 + 0x10);
  thunk_FUN_627a6080(param_1 + 0xf);
  thunk_FUN_627a6080(param_1 + 0xe);
  thunk_FUN_627a6080(param_1 + 0xd);
  thunk_FUN_627a6080(param_1 + 0xc);
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xb] = 0;
  }
  *param_1 = &PTR_FUN_627a7970;
  return;
}


