/* Module: sftrkfx1.dll
   Function: FUN_5cbb8300
   Address: 5cbb8300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cbb8300(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_5cc04b28;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[10] = 1;
  param_1[0xc] = 1;
  param_1[0xb] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *param_1 = &PTR_LAB_5cc04af0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  puVar2 = param_1 + 0x14;
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = param_1 + 0x3b;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x3a] = 0;
  return param_1;
}


