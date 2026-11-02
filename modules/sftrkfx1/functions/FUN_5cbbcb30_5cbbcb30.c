/* Module: sftrkfx1.dll
   Function: FUN_5cbbcb30
   Address: 5cbbcb30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5cbbcb30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_5cc05014;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  param_1[7] = 1;
  param_1[9] = 1;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_LAB_5cc04fd0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar2 = param_1 + 0x16;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x37] = 0;
  return param_1;
}


