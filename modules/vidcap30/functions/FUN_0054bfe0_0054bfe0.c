/* Module: vidcap30.exe
   Function: FUN_0054bfe0
   Address: 0054bfe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054bfe0(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_005270a0(param_1);
  if (*(char *)(param_1 + 0x11b) == '\0') {
    iVar6 = *(int *)(param_1 + 0xc0);
    uVar3 = *(uint *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc4);
    *(int *)(param_1 + 0xd8) = iVar6;
  }
  else {
    if ((*(byte *)(param_1 + 0x68) & 2) == 0) {
      *(uint *)(param_1 + 200) =
           ((*(int *)(param_1 + 0xc4) - DAT_005b8a6c) + -1 + DAT_005b8a88) / DAT_005b8a88;
    }
    else {
      *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0xc4);
    }
    iVar6 = *(int *)(param_1 + 0xc0);
    uVar3 = (uint)((iVar6 - (&DAT_005b8a34)[*(byte *)(param_1 + 0x11c)]) + -1 +
                  (&DAT_005b8a50)[*(byte *)(param_1 + 0x11c)]) /
            (uint)(&DAT_005b8a50)[*(byte *)(param_1 + 0x11c)];
    *(uint *)(param_1 + 0xd8) = uVar3;
    uVar3 = *(byte *)(param_1 + 0x121) * uVar3 + 7 >> 3;
  }
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar4 = (uint)*(byte *)(param_1 + 0x121);
  *(uint *)(param_1 + 0xd4) = uVar3 + 1;
  if (((uVar2 & 4) != 0) && (*(byte *)(param_1 + 0x11f) < 8)) {
    uVar4 = 8;
  }
  if ((uVar2 & 0x1000) != 0) {
    cVar1 = *(char *)(param_1 + 0x11e);
    if (cVar1 == '\x03') {
      uVar4 = (-(uint)(*(short *)(param_1 + 0x112) != 0) & 8) + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar4 < 8) {
        uVar4 = 8;
      }
      if (*(short *)(param_1 + 0x112) != 0) {
        uVar4 = uVar4 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)(param_1 + 0x112) != 0)) {
      uVar4 = (uVar4 * 4) / 3;
    }
  }
  if ((uVar2 & 0x8000) != 0) {
    cVar1 = *(char *)(param_1 + 0x11e);
    if (cVar1 == '\x03') {
      uVar4 = 0x20;
    }
    else if (cVar1 == '\0') {
      uVar4 = ((8 < uVar4) - 1 & 0xfffffff0) + 0x20;
    }
    else if (cVar1 == '\x02') {
      uVar4 = ((0x20 < uVar4) - 1 & 0xffffffe0) + 0x40;
    }
  }
  if ((uVar2 & 0x4000) != 0) {
    if (((*(short *)(param_1 + 0x112) == 0) || ((uVar2 & 0x1000) == 0)) &&
       (*(char *)(param_1 + 0x11e) != '\x04')) {
      if ((int)uVar4 < 9) {
        uVar4 = 0x18;
      }
      else if ((int)uVar4 < 0x11) {
        uVar4 = 0x30;
      }
    }
    else if ((int)uVar4 < 0x11) {
      uVar4 = 0x20;
    }
    else if ((int)uVar4 < 0x21) {
      uVar4 = 0x40;
    }
  }
  uVar5 = FUN_00549470(param_1,((iVar6 + 7U & 0xfffffff8) * uVar4 + 7 >> 3) + 1 +
                               ((int)(uVar4 + 7) >> 3));
  *(undefined4 *)(param_1 + 0xe4) = uVar5;
  uVar5 = FUN_00549470(param_1,*(int *)(param_1 + 0xd0) + 1);
  *(undefined4 *)(param_1 + 0xe0) = uVar5;
  FUN_00549500(param_1,uVar5,0,*(int *)(param_1 + 0xd0) + 1);
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x40;
  return;
}


