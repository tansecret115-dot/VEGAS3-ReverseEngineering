/* Module: stl2plg.dll
   Function: FUN_00447fc0
   Address: 00447fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00447fc0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_4;
  
  uVar2 = param_2;
  uVar1 = param_1;
  uVar4 = (uint)*(byte *)(param_2 + 0x3f);
  local_4 = (uint)*(byte *)(param_2 + 0xae);
  param_2 = (uint)*(byte *)(param_1 + 0x3e);
  iVar3 = (local_4 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x3e)) - local_4
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(param_1 + 0x3e) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xad);
  param_2 = (uint)*(byte *)(uVar1 + 0x3d);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x3d)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x3d) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xac);
  param_2 = (uint)*(byte *)(uVar1 + 0x3c);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x3c)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x3c) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xae);
  param_2 = (uint)*(byte *)(uVar1 + 0x46);
  uVar4 = (uint)*(byte *)(uVar2 + 0x47);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x46)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x46) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xad);
  param_2 = (uint)*(byte *)(uVar1 + 0x45);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x45)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x45) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xac);
  param_2 = (uint)*(byte *)(uVar1 + 0x44);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x44)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x44) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xae);
  param_2 = (uint)*(byte *)(uVar1 + 0x4e);
  uVar4 = (uint)*(byte *)(uVar2 + 0x4f);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x4e)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x4e) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xad);
  param_2 = (uint)*(byte *)(uVar1 + 0x4d);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x4d)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x4d) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xac);
  param_2 = (uint)*(byte *)(uVar1 + 0x4c);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x4c)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x4c) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xae);
  param_2 = (uint)*(byte *)(uVar1 + 0x56);
  uVar4 = (uint)*(byte *)(uVar2 + 0x57);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x56)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x56) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xad);
  param_2 = (uint)*(byte *)(uVar1 + 0x55);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x55)) - param_1
          ) + param_2;
  if (iVar3 < 0x100) {
    if (iVar3 < 0) {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 0xff;
  }
  *(char *)(uVar1 + 0x55) = (char)iVar3;
  param_1 = (uint)*(byte *)(uVar2 + 0xac);
  param_2 = (uint)*(byte *)(uVar1 + 0x54);
  iVar3 = (param_1 - param_2) * uVar4;
  iVar3 = ((((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8) + (uint)*(byte *)(uVar2 + 0x54)) - param_1
          ) + param_2;
  if (0xff < iVar3) {
    *(undefined1 *)(uVar1 + 0x54) = 0xff;
    return;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  *(char *)(uVar1 + 0x54) = (char)iVar3;
  return;
}


