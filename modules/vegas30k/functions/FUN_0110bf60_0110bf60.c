/* Module: vegas30k.dll
   Function: FUN_0110bf60
   Address: 0110bf60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0110bf60(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_4;
  
  iVar3 = param_2;
  iVar1 = param_1;
  uVar4 = (uint)*(byte *)(param_2 + 0x3f);
  local_4 = (uint)*(byte *)(param_2 + 0xae);
  param_2 = (uint)*(byte *)(param_1 + 0x3e);
  iVar2 = (local_4 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x3e)) - local_4
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(param_1 + 0x3e) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xad);
  param_2 = (uint)*(byte *)(iVar1 + 0x3d);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x3d)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x3d) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xac);
  param_2 = (uint)*(byte *)(iVar1 + 0x3c);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x3c)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x3c) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xae);
  param_2 = (uint)*(byte *)(iVar1 + 0x46);
  uVar4 = (uint)*(byte *)(iVar3 + 0x47);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x46)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x46) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xad);
  param_2 = (uint)*(byte *)(iVar1 + 0x45);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x45)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x45) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xac);
  param_2 = (uint)*(byte *)(iVar1 + 0x44);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x44)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x44) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xae);
  param_2 = (uint)*(byte *)(iVar1 + 0x4e);
  uVar4 = (uint)*(byte *)(iVar3 + 0x4f);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x4e)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x4e) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xad);
  param_2 = (uint)*(byte *)(iVar1 + 0x4d);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x4d)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x4d) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xac);
  param_2 = (uint)*(byte *)(iVar1 + 0x4c);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x4c)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x4c) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xae);
  param_2 = (uint)*(byte *)(iVar1 + 0x56);
  uVar4 = (uint)*(byte *)(iVar3 + 0x57);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x56)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x56) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xad);
  param_2 = (uint)*(byte *)(iVar1 + 0x55);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar2 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x55)) - param_1
          ) + param_2;
  if (iVar2 < 0x100) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  *(char *)(iVar1 + 0x55) = (char)iVar2;
  param_1 = (uint)*(byte *)(iVar3 + 0xac);
  param_2 = (uint)*(byte *)(iVar1 + 0x54);
  iVar2 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar2 + (iVar2 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(iVar3 + 0x54)) - param_1
          ) + param_2;
  if (0xff < iVar3) {
    *(undefined1 *)(iVar1 + 0x54) = 0xff;
    return;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(char *)(iVar1 + 0x54) = (char)iVar3;
  return;
}


