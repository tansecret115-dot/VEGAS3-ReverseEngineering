/* Module: vegas30k.dll
   Function: FUN_01199130
   Address: 01199130
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_01199130(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = &PTR_LAB_011ea8d0;
  param_1[1] = 0;
  param_1[0xb] = param_2;
  param_1[10] = 5;
  param_1[9] = 0;
  param_1[0x10] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3ff00000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3ff00000;
  param_1[0x18] = param_1[0x14];
  param_1[0x19] = param_1[0x15];
  param_1[0x1b] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  puVar1 = param_1 + 0x44;
  iVar2 = 0x10;
  do {
    puVar1[-0x20] = 0;
    puVar1[-0x1f] = 0x3ff00000;
    *puVar1 = 0;
    puVar1[1] = 0x3ff00000;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  param_1[100] = 0;
  param_1[0xfe] = 0;
  param_1[0x182] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  iVar2 = param_1[0xb];
  param_1[0x162] = 0;
  param_1[0x164] = 0;
  param_1[0x166] = 0;
  param_1[0x168] = 0;
  param_1[0x185] = 0;
  param_1[0x163] = 0;
  param_1[0x165] = 0;
  param_1[0x167] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16e] = 0;
  param_1[0x171] = 0;
  param_1[0x160] = 0;
  param_1[0xc] = *(undefined4 *)(iVar2 + 0x684);
  *(int *)(iVar2 + 0x684) = *(int *)(iVar2 + 0x684) + 1;
  param_1[0x156] = 0;
  param_1[8] = 0;
  param_1[0x157] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  param_1[0x134] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x12e] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x149] = 0xffffffff;
  param_1[0x109] = 0x400;
  param_1[0x10a] = 0x200;
  param_1[0x133] = 0x400;
  param_1[0x12f] = 0x20;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x128));
  return param_1;
}


