/* Module: encn3260.dll
   Function: FUN_664c59c0
   Address: 664c59c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664c59c0(undefined4 *param_1)

{
  void *pvVar1;
  
  FUN_664c4cf0(param_1);
  *param_1 = &PTR_FUN_664dfa78;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined4 *)((int)param_1 + 0x36) = 1;
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  param_1[0x1c] = 0;
  pvVar1 = operator_new(0x7fa6);
  *(void **)((int)param_1 + 0x2e) = pvVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  return param_1;
}


