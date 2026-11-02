/* Module: aviplug.dll
   Function: FUN_5f954e20
   Address: 5f954e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5f954e20(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
            undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  FUN_5f94fbb0(param_5);
  puVar4 = param_6;
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar3 = 400000;
  if (param_2 == 0) {
    uVar3 = 0x51615;
  }
  param_6[10] = uVar3;
  param_6[0xb] = 0;
  param_6[0xc] = 0x28;
  *(short *)((int)param_6 + 0x3e) = (short)param_3;
  param_6[0x10] = 0;
  *(undefined2 *)(param_6 + 0xf) = 1;
  switch(param_4) {
  case 1000:
    param_6[0xd] = 0x2d0;
    iVar2 = (-(uint)(param_2 != 0) & 0x60) + 0x1e0;
    break;
  case 0x3e9:
    param_6[0xd] = 0x168;
    iVar2 = (-(uint)(param_2 != 0) & 0x30) + 0xf0;
    break;
  case 0x3ea:
    param_6[0xd] = 0xb4;
    iVar2 = (-(uint)(param_2 != 0) & 0x18) + 0x78;
    break;
  case 0x3eb:
    param_6[0xd] = 0x58;
    iVar2 = (-(uint)(param_2 != 0) & 0x10) + 0x3c;
    break;
  default:
    goto switchD_5f954e87_default;
  }
  param_6[0xe] = iVar2;
  uVar1 = (uint)*(ushort *)((int)param_6 + 0x3e) * param_6[0xd] + 0x1f;
  param_6[0x11] = ((int)((uVar1 & 0xffffffe0) + ((int)uVar1 >> 0x1f & 7U)) >> 3) * param_6[0xe];
  *param_5 = DAT_5f9eebb8;
  param_5[1] = DAT_5f9eebbc;
  param_5[2] = DAT_5f9eebc0;
  param_5[3] = DAT_5f9eebc4;
  if (param_3 == 0x10) {
    param_5[4] = DAT_5f9eebc8;
    param_5[5] = DAT_5f9eebcc;
    param_5[6] = DAT_5f9eebd0;
    uVar3 = DAT_5f9eebd4;
  }
  else if (param_3 == 0x18) {
    param_5[4] = DAT_5f9eebd8;
    param_5[5] = DAT_5f9eebdc;
    param_5[6] = DAT_5f9eebe0;
    uVar3 = DAT_5f9eebe4;
  }
  else {
    if (param_3 != 0x20) {
switchD_5f954e87_default:
      FUN_5f94fbb0(param_5);
      for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_6 = 0;
        param_6 = param_6 + 1;
      }
      return 0x80070057;
    }
    param_5[4] = DAT_5f9eebe8;
    param_5[5] = DAT_5f9eebec;
    param_5[6] = DAT_5f9eebf0;
    uVar3 = DAT_5f9eebf4;
  }
  param_5[7] = uVar3;
  param_5[8] = 1;
  param_5[9] = 0;
  param_5[10] = param_6[0x11];
  param_5[0xb] = DAT_5f9eeb68;
  param_5[0xc] = DAT_5f9eeb6c;
  param_5[0xd] = DAT_5f9eeb70;
  uVar3 = DAT_5f9eeb74;
  param_5[0x11] = param_6;
  param_5[0x10] = 0x58;
  param_5[0xe] = uVar3;
  return 0;
}


