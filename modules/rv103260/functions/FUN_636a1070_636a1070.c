/* Module: rv103260.dll
   Function: FUN_636a1070
   Address: 636a1070
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_636a1070(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_636a7090;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 0x32) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 2;
  param_1[0x1e] = 0;
  param_1[0x1a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x65] = 0;
  param_1[0x5d] = 0x1f;
  param_1[0x5e] = 7;
  param_1[0x5f] = 0x3f4ccccd;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar2 = param_1 + 0x29;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[100] = 0;
  return param_1;
}


