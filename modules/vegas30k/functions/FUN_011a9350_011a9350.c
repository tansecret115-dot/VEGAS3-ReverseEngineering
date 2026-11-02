/* Module: vegas30k.dll
   Function: FUN_011a9350
   Address: 011a9350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_011a9350(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_LAB_011eb038;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[9] = 2;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0xe] = 20000000;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 1;
  puVar2 = param_1 + 0x1a8;
  for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x199] = 0;
  param_1[0x19a] = param_3;
  (**(code **)(*param_3 + 4))(param_3);
  param_1[0x19b] = 0;
  param_1[0x1fc] = param_3;
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 4))(param_3);
  }
  param_1[0x19c] = 0;
  param_1[0x12] = 0;
  param_1[0x19d] = 0;
  param_1[0x12a] = 0;
  param_1[0x180] = 1;
  param_1[0x198] = 4;
  param_1[0x19f] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x197] = 1;
  param_1[0x1a3] = 0;
  param_1[0x19e] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x129] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1c6] = 10000000;
  param_1[0x1c7] = 0;
  param_1[0x1c8] = 20000000;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 5000000;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  param_1[0x1ce] = 0xffffffff;
  param_1[0x1d0] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1da] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1de] = 0;
  param_1[0x1e0] = 0;
  param_1[0x1e2] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e8] = 0xffffffff;
  param_1[0x1ea] = 0xffffffff;
  param_1[0x1ec] = 0;
  param_1[0x1d2] = 10000;
  param_1[0x1ee] = 0;
  param_1[0x1f0] = 0;
  param_1[8] = 0x20;
  param_1[0x1cd] = 0;
  param_1[0x1cf] = 0xffffffff;
  param_1[0x1d1] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1db] = 0;
  param_1[0x1dd] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e9] = 0xffffffff;
  param_1[0x1eb] = 0xffffffff;
  param_1[0x1ed] = 0;
  param_1[0x1d4] = 0xffffffff;
  param_1[0x1d3] = 0;
  param_1[0x185] = 0xffffffff;
  param_1[0x186] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[0x10] = 0;
  param_1[0x1ef] = 0x3ff00000;
  param_1[0x1f1] = 0x3ff00000;
  param_1[0x1f2] = 0;
  param_1[499] = 0;
  param_1[500] = 0xffffffff;
  param_1[0x1f5] = 1;
  *(undefined2 *)(param_1 + 299) = 1;
  *(undefined2 *)((int)param_1 + 0x4ae) = 2;
  param_1[300] = 0xac44;
  *(undefined2 *)((int)param_1 + 0x4ba) = 0x10;
  *(undefined2 *)(param_1 + 0x12e) = 4;
  param_1[0x12d] = 0x2b110;
  *(undefined2 *)(param_1 + 0x12f) = 0;
  *(undefined2 *)(param_1 + 0x134) = 1;
  *(undefined2 *)((int)param_1 + 0x4d2) = 2;
  param_1[0x135] = 0xac44;
  *(undefined2 *)((int)param_1 + 0x4de) = 0x10;
  *(undefined2 *)(param_1 + 0x137) = 4;
  param_1[0x136] = 0x2b110;
  *(undefined2 *)(param_1 + 0x138) = 0;
  param_1[0x201] = 0xffffffff;
  return param_1;
}


