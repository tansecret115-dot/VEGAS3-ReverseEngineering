/* Module: aviplug.dll
   Function: FUN_5f951740
   Address: 5f951740
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f951740(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_5f94fbb0(param_2);
  puVar3 = param_3;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = 400000;
  if (param_1 == 0) {
    uVar1 = 0x51615;
  }
  param_3[10] = uVar1;
  param_3[0xb] = 0;
  param_3[0xc] = 0x28;
  *(undefined2 *)((int)param_3 + 0x3e) = 0x18;
  param_3[0x10] = 0x64737664;
  *(undefined2 *)(param_3 + 0xf) = 1;
  param_3[0xd] = 0x2d0;
  if (param_1 == 0) {
    param_3[0xe] = 0x1e0;
    param_3[0x11] = 120000;
  }
  else {
    param_3[0xe] = 0x240;
    param_3[0x11] = 0x23280;
  }
  *param_2 = DAT_5f9eebb8;
  param_2[1] = DAT_5f9eebbc;
  param_2[2] = DAT_5f9eebc0;
  param_2[3] = DAT_5f9eebc4;
  param_2[4] = DAT_5f9eeba8;
  param_2[5] = DAT_5f9eebac;
  param_2[6] = DAT_5f9eebb0;
  uVar1 = DAT_5f9eebb4;
  param_2[8] = 1;
  param_2[9] = 0;
  param_2[7] = uVar1;
  param_2[10] = param_3[0x11];
  param_2[0xb] = DAT_5f9eeb68;
  param_2[0xc] = DAT_5f9eeb6c;
  param_2[0xd] = DAT_5f9eeb70;
  uVar1 = DAT_5f9eeb74;
  param_2[0x11] = param_3;
  param_2[0x10] = 0x58;
  param_2[0xe] = uVar1;
  return;
}


