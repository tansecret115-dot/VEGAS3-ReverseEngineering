/* Module: vegas30.exe
   Function: FUN_005bdb60
   Address: 005bdb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_005bdb60(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = 0x27;
  param_1[2] = 0;
  param_1[2] = DAT_00647e60 & 1;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0x14] = 0;
  param_1[5] = 0x3ff00000;
  param_1[7] = 0x3ff00000;
  puVar3 = param_1 + 0x15;
  for (iVar2 = 0x2e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x15] = 0x42;
  param_1[8] = DAT_00648534;
  param_1[9] = DAT_00648530;
  param_1[10] = DAT_0064852c;
  param_1[0xb] = DAT_00648538;
  param_1[0xc] = DAT_00648544;
  param_1[0xd] = DAT_00648540;
  param_1[0xe] = DAT_0064853c;
  param_1[0xf] = DAT_00648548;
  param_1[0x10] = DAT_00648554;
  param_1[0x11] = DAT_00648550;
  param_1[0x12] = DAT_0064854c;
  uVar1 = DAT_00648558;
  param_1[0x48] = 0;
  param_1[0x13] = uVar1;
  param_1[0x49] = 0x3ff00000;
  return;
}


