/* Module: sftrans1.dll
   Function: FUN_00422360
   Address: 00422360
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_00422360(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0;
  puVar2 = param_1;
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  *(undefined1 *)((int)param_1 + 0x15) = 1;
  return param_1;
}


