/* Module: mpgmux.dll
   Function: FUN_10001020
   Address: 10001020
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __cdecl FUN_10001020(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = _malloc(0x74);
  puVar2 = FUN_1000ab20(param_1,param_2,1);
  puVar1[0x1c] = puVar2;
  *puVar1 = &LAB_100010e0;
  puVar1[1] = &LAB_10001120;
  puVar1[2] = &LAB_10001160;
  puVar1[3] = &LAB_100011a0;
  puVar1[6] = 0;
  puVar1[4] = &LAB_10001210;
  puVar1[8] = 0;
  puVar1[5] = &LAB_10001220;
  puVar1[7] = &DAT_10001260;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 1;
  puVar1[0xd] = puVar1;
  puVar1[0x14] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x19] = 0;
  puVar1[0xe] = &LAB_10001100;
  puVar1[0xf] = &LAB_10001140;
  puVar1[0x10] = &LAB_10001180;
  puVar1[0x11] = FUN_100011c0;
  puVar1[0x12] = &LAB_10001210;
  puVar1[0x13] = &LAB_10001250;
  puVar1[0x15] = &DAT_10001260;
  puVar1[0x1b] = puVar1;
  return puVar1;
}


