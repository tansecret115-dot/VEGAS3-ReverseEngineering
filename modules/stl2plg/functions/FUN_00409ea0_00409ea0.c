/* Module: stl2plg.dll
   Function: FUN_00409ea0
   Address: 00409ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00409ea0(int param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  *param_2 = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[1] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[2] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[3] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[4] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[5] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[6] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[7] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[8] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[9] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[10] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0xb] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0xc] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0xd] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0xe] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0xf] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0x10] = bVar1;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x10024) + *(int *)(param_1 + 0x10020));
  *(int *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + 1;
  param_2[0x11] = bVar1 & 0xf;
  param_2[0x12] = bVar1 >> 4 & 1;
  param_2[0x14] = bVar1 >> 6;
  param_2[0x13] = bVar1 >> 5 & 1;
  *(uint *)(param_1 + 0x10024) = *(int *)(param_1 + 0x10024) + (uint)*param_2;
  return;
}


