/* Module: stl2plg.dll
   Function: FUN_004025b0
   Address: 004025b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_004025b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 1;
  param_1[2] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0x3ff00000;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_00464674;
  puVar2 = param_1 + 4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[4] = 0x40;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  param_1[9] = 0;
  param_1[0xb] = 0x3ff00000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}


