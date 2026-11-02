/* Module: aviplug.dll
   Function: FUN_5f967ee0
   Address: 5f967ee0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f967ee0(int *param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = param_1[4];
  DAT_5f9f41a8 = 0x80 << ((byte)iVar3 & 0x1f);
  DAT_5f9f41ac = (uint)(param_1[6] != 0) << ((byte)iVar3 - 1 & 0x1f);
  DAT_5f9f41b0 = iVar3 - param_1[5];
  pcVar2 = FUN_5f967e40;
  DAT_5f9f41b8 = DAT_5f9f41b0 + 2;
  DAT_5f9f41b4 = DAT_5f9f41ac << 2;
  if (param_1[7] == 0) {
    pcVar2 = FUN_5f967e80;
  }
  DAT_5f9f41bc = (*pcVar2)(DAT_5f9da578,DAT_5f9da57c,iVar3);
  DAT_5f9f41c0 = (*pcVar2)(DAT_5f9da580,DAT_5f9da584,param_1[4]);
  DAT_5f9f41c4 = (*pcVar2)(DAT_5f9da588,DAT_5f9da58c,param_1[4]);
  DAT_5f9f41c8 = (*pcVar2)(DAT_5f9da590,DAT_5f9da594,param_1[4]);
  DAT_5f9f41cc = (*pcVar2)(DAT_5f9da598,DAT_5f9da59c,param_1[4]);
  DAT_5f9f41d0 = (*pcVar2)(DAT_5f9da5a0,DAT_5f9da5a4,param_1[4]);
  DAT_5f9f41d4 = (*pcVar2)(DAT_5f9da5a8,DAT_5f9da5ac,param_1[4]);
  DAT_5f9f41d8 = (*pcVar2)(DAT_5f9da5b0,DAT_5f9da5b4,param_1[4]);
  DAT_5f9f41dc = (*pcVar2)(DAT_5f9da5b8,DAT_5f9da5bc,param_1[4]);
  DAT_5f9f41e4 = param_1[1];
  DAT_5f9f41ec = *param_1 + DAT_5f9f41e4;
  DAT_5f9f41e8 = 0 << ((char)DAT_5f9f41ec - 1U & 0x1f);
  bVar1 = (char)*param_1 + (char)DAT_5f9f41e4;
  if (param_1[2] == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1 << (bVar1 - 1 & 0x1f);
  }
  DAT_5f9f41e0 = (0x80 << (bVar1 & 0x1f)) + iVar3;
  pcVar2 = FUN_5f967e40;
  if (param_1[3] == 0) {
    pcVar2 = FUN_5f967e80;
  }
  DAT_5f9f41f0 = (*pcVar2)(DAT_5f9da5c0,DAT_5f9da5c4,DAT_5f9f41e4);
  DAT_5f9f41f4 = (*pcVar2)(DAT_5f9da5c8,DAT_5f9da5cc,param_1[1]);
  DAT_5f9f41f8 = (*pcVar2)(DAT_5f9da5d0,DAT_5f9da5d4,param_1[1]);
  DAT_5f9f41fc = (*pcVar2)(DAT_5f9da5d8,DAT_5f9da5dc,param_1[1]);
  _DAT_5f9f4200 = DAT_5f9f41fc & 0xffff;
  _DAT_5f9f4204 = 0;
  _DAT_5f9f4208 = DAT_5f9f41f0 & 0xffff;
  _DAT_5f9f420c = -DAT_5f9f41f8 & 0xffffU | DAT_5f9f41f4 * -0x10000;
  _DAT_5f9f4214 = 0x2020;
  _DAT_5f9f4210 = 0x20202020;
  return;
}


