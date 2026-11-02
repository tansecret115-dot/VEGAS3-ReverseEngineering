/* Module: aviplug.dll
   Function: FUN_5f951850
   Address: 5f951850
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f951850(int param_1,int param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  FUN_5f94fbb0(param_4);
  puVar4 = param_5;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar3 = 400000;
  if (param_1 == 0) {
    uVar3 = 0x51615;
  }
  param_5[10] = uVar3;
  param_5[0xb] = 0;
  param_5[0xc] = 0x28;
  *(short *)((int)param_5 + 0x3e) = (short)param_2;
  param_5[0x10] = 0;
  *(undefined2 *)(param_5 + 0xf) = 1;
  switch(param_3) {
  case 1000:
    param_5[0xd] = 0x2d0;
    iVar2 = (-(uint)(param_1 != 0) & 0x60) + 0x1e0;
    break;
  case 0x3e9:
    param_5[0xd] = 0x168;
    iVar2 = (-(uint)(param_1 != 0) & 0x30) + 0xf0;
    break;
  case 0x3ea:
    param_5[0xd] = 0xb4;
    iVar2 = (-(uint)(param_1 != 0) & 0x18) + 0x78;
    break;
  case 0x3eb:
    param_5[0xd] = 0x58;
    iVar2 = (-(uint)(param_1 != 0) & 0x10) + 0x3c;
    break;
  default:
    goto switchD_5f9518b7_default;
  }
  param_5[0xe] = iVar2;
  uVar1 = (uint)*(ushort *)((int)param_5 + 0x3e) * param_5[0xd] + 0x1f;
  param_5[0x11] = ((int)((uVar1 & 0xffffffe0) + ((int)uVar1 >> 0x1f & 7U)) >> 3) * param_5[0xe];
  *param_4 = DAT_5f9eebb8;
  param_4[1] = DAT_5f9eebbc;
  param_4[2] = DAT_5f9eebc0;
  param_4[3] = DAT_5f9eebc4;
  if (param_2 == 0x10) {
    param_4[4] = DAT_5f9eebc8;
    param_4[5] = DAT_5f9eebcc;
    param_4[6] = DAT_5f9eebd0;
    uVar3 = DAT_5f9eebd4;
  }
  else if (param_2 == 0x18) {
    param_4[4] = DAT_5f9eebd8;
    param_4[5] = DAT_5f9eebdc;
    param_4[6] = DAT_5f9eebe0;
    uVar3 = DAT_5f9eebe4;
  }
  else {
    if (param_2 != 0x20) {
switchD_5f9518b7_default:
      FUN_5f94fbb0(param_4);
      for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_5 = 0;
        param_5 = param_5 + 1;
      }
      return 0x80070057;
    }
    param_4[4] = DAT_5f9eebe8;
    param_4[5] = DAT_5f9eebec;
    param_4[6] = DAT_5f9eebf0;
    uVar3 = DAT_5f9eebf4;
  }
  param_4[7] = uVar3;
  param_4[8] = 1;
  param_4[9] = 0;
  param_4[10] = param_5[0x11];
  param_4[0xb] = DAT_5f9eeb68;
  param_4[0xc] = DAT_5f9eeb6c;
  param_4[0xd] = DAT_5f9eeb70;
  uVar3 = DAT_5f9eeb74;
  param_4[0x11] = param_5;
  param_4[0x10] = 0x58;
  param_4[0xe] = uVar3;
  return 0;
}


