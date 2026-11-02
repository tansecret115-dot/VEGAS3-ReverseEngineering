/* Module: mp3plug.dll
   Function: FUN_5f6889f0
   Address: 5f6889f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6889f0(ushort *param_1,byte *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  int local_4;
  
  uVar2 = (*param_1 ^ ((ushort)(param_2[1] >> 5) | (ushort)*param_2 << 3)) & 0x7ff ^ *param_1;
  *param_1 = uVar2;
  uVar1 = (ushort)(((param_2[1] & 0x18) >> 3) << 0xb);
  *param_1 = uVar1 | uVar2 & 0xe7ff;
  uVar4 = (param_2[1] >> 1 & 3) << 0xd;
  *param_1 = uVar4 | uVar1 | uVar2 & 0x87ff;
  *param_1 = uVar4 | uVar1 | uVar2 & 0x7ff | (ushort)param_2[1] << 0xf;
  uVar4 = (byte)((byte)param_1[1] ^ param_2[2] >> 4) & 0xf ^ param_1[1];
  param_1[1] = uVar4;
  uVar1 = (ushort)(((param_2[2] & 0xc) >> 2) << 4);
  param_1[1] = uVar1 | uVar4 & 0xffcf;
  uVar5 = (param_2[2] >> 1 & 1) << 6;
  param_1[1] = uVar5 | uVar1 | uVar4 & 0xff8f;
  uVar2 = (param_2[2] & 1) << 7;
  param_1[1] = uVar2 | uVar5 | uVar1 | uVar4 & 0xff0f;
  local_4 = 0x1a;
  param_1[1] = (ushort)(param_2[3] >> 6) << 8 | uVar2 | uVar5 | uVar1 | uVar4 & 0xfc0f;
  uVar3 = FUN_5f688990((int)param_2,2,&local_4);
  uVar1 = param_1[1];
  uVar2 = (ushort)((uVar3 & 3) << 10);
  param_1[1] = uVar2 | uVar1 & 0xf3ff;
  if ((uVar1 & 0x300) == 0) {
    param_1[1] = uVar2 | uVar1 & 0xf0ff;
  }
  uVar3 = FUN_5f688990((int)param_2,1,&local_4);
  param_1[1] = (ushort)((uVar3 & 1) << 0xc) | param_1[1] & 0xefff;
  uVar3 = FUN_5f688990((int)param_2,1,&local_4);
  param_1[1] = (ushort)((uVar3 & 1) << 0xd) | param_1[1] & 0xdfff;
  uVar3 = FUN_5f688990((int)param_2,2,&local_4);
  param_1[1] = (ushort)(uVar3 << 0xe) | param_1[1] & 0x3fff;
  return;
}


