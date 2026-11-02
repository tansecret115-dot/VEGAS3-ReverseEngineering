/* Module: sfs4rw.dll
   Function: FUN_00478570
   Address: 00478570
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478570(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  
  param_1[0x1c] = 0;
  FUN_00448a20(param_1);
  if (*(char *)((int)param_1 + 0x11b) == '\0') {
    iVar7 = param_1[0x30];
    uVar3 = param_1[0x34];
    param_1[0x32] = param_1[0x31];
    param_1[0x36] = iVar7;
  }
  else {
    if ((*(byte *)(param_1 + 0x1a) & 2) == 0) {
      param_1[0x32] = ((param_1[0x31] - DAT_004a6ecc) + -1 + DAT_004a6ee8) / DAT_004a6ee8;
    }
    else {
      param_1[0x32] = param_1[0x31];
    }
    iVar7 = param_1[0x30];
    uVar3 = (uint)((iVar7 - (&DAT_004a6e94)[*(byte *)(param_1 + 0x47)]) + -1 +
                  (&DAT_004a6eb0)[*(byte *)(param_1 + 0x47)]) /
            (uint)(&DAT_004a6eb0)[*(byte *)(param_1 + 0x47)];
    param_1[0x36] = uVar3;
    uVar3 = *(byte *)((int)param_1 + 0x121) * uVar3 + 7 >> 3;
  }
  uVar2 = param_1[0x1a];
  uVar4 = (uint)*(byte *)((int)param_1 + 0x121);
  param_1[0x35] = uVar3 + 1;
  if (((uVar2 & 4) != 0) && (*(byte *)((int)param_1 + 0x11f) < 8)) {
    uVar4 = 8;
  }
  if ((uVar2 & 0x1000) != 0) {
    cVar1 = *(char *)((int)param_1 + 0x11e);
    if (cVar1 == '\x03') {
      uVar4 = (-(uint)(*(short *)((int)param_1 + 0x112) != 0) & 8) + 0x18;
    }
    else if (cVar1 == '\0') {
      if (uVar4 < 8) {
        uVar4 = 8;
      }
      if (*(short *)((int)param_1 + 0x112) != 0) {
        uVar4 = uVar4 * 2;
      }
    }
    else if ((cVar1 == '\x02') && (*(short *)((int)param_1 + 0x112) != 0)) {
      uVar4 = (uVar4 * 4) / 3;
    }
  }
  if ((uVar2 & 0x8000) != 0) {
    cVar1 = *(char *)((int)param_1 + 0x11e);
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
    if (((*(short *)((int)param_1 + 0x112) == 0) || ((uVar2 & 0x1000) == 0)) &&
       (*(char *)((int)param_1 + 0x11e) != '\x04')) {
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
  pvVar5 = FUN_00475a00(param_1,((iVar7 + 7U & 0xfffffff8) * uVar4 + 7 >> 3) + 1 +
                                ((int)(uVar4 + 7) >> 3));
  param_1[0x39] = (int)pvVar5;
  puVar6 = FUN_00475a00(param_1,param_1[0x34] + 1);
  param_1[0x38] = (int)puVar6;
  FUN_00475a90(param_1,puVar6,0,param_1[0x34] + 1);
  param_1[0x19] = param_1[0x19] | 0x40;
  return;
}


