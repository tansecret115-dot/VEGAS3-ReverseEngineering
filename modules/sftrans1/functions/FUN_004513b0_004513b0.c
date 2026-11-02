/* Module: sftrans1.dll
   Function: FUN_004513b0
   Address: 004513b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004513b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 4;
  param_1[0x12] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xc] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 1;
  puVar1 = param_1 + 0x15;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_0055b45c;
  param_1[0xb] = &PTR_LAB_0055b450;
  param_1[0x12] = param_2;
  return;
}


