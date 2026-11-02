/* Module: sftrans1.dll
   Function: FUN_005245a0
   Address: 005245a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005245a0(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  short local_10;
  short local_c;
  short local_8;
  
  uVar2 = (uint)*(byte *)(param_2 + 0x3e) - (uint)*(byte *)(param_2 + 0xae);
  uVar7 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x3d) - (uint)*(byte *)(param_2 + 0xad);
  uVar8 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(byte *)(param_2 + 0x3c) - (uint)*(byte *)(param_2 + 0xac);
  uVar9 = (int)uVar4 >> 0x1f;
  if ((int)*(short *)(param_2 + 0xb0) <
      (int)(((uVar2 ^ uVar7) - uVar7) + ((uVar3 ^ uVar8) - uVar8) + ((uVar4 ^ uVar9) - uVar9))) {
    bVar6 = *(byte *)(param_2 + 0x3e);
    bVar1 = *(byte *)(param_2 + 0x3d);
    if (bVar1 < bVar6) {
      bVar1 = *(byte *)(param_2 + 0x3c);
      if (bVar1 < bVar6) {
LAB_00524619:
        bVar1 = bVar6;
      }
    }
    else {
      bVar6 = *(byte *)(param_2 + 0x3c);
      if (bVar1 <= bVar6) goto LAB_00524619;
    }
    bVar6 = *(byte *)(param_1 + 0x3e);
    uVar2 = bVar1 + 1;
    bVar1 = *(byte *)(param_1 + 0x3d);
    if (bVar1 < bVar6) {
      bVar1 = *(byte *)(param_1 + 0x3c);
      if (*(byte *)(param_1 + 0x3c) < bVar6) {
        bVar1 = bVar6;
      }
    }
    else if (bVar1 <= *(byte *)(param_1 + 0x3c)) {
      bVar1 = *(byte *)(param_1 + 0x3c);
    }
    uVar3 = bVar1 + 1;
    local_8 = (short)(((ulonglong)bVar6 * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_8 - (uint)*(byte *)(param_2 + 0x3e)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x3e) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x3e);
    local_c = (short)(((ulonglong)*(byte *)(param_1 + 0x3d) * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_c - (uint)*(byte *)(param_2 + 0x3d)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x3d) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x3d);
    local_10 = (short)(((ulonglong)*(byte *)(param_1 + 0x3c) * (ulonglong)uVar3) / (ulonglong)uVar2)
    ;
    iVar5 = ((int)local_10 - (uint)*(byte *)(param_2 + 0x3c)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x3c) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x3c);
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x46) - (uint)*(byte *)(param_2 + 0xae);
  uVar7 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x45) - (uint)*(byte *)(param_2 + 0xad);
  uVar8 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(byte *)(param_2 + 0x44) - (uint)*(byte *)(param_2 + 0xac);
  uVar9 = (int)uVar4 >> 0x1f;
  if ((int)*(short *)(param_2 + 0xb0) <
      (int)(((uVar2 ^ uVar7) - uVar7) + ((uVar3 ^ uVar8) - uVar8) + ((uVar4 ^ uVar9) - uVar9))) {
    bVar6 = *(byte *)(param_2 + 0x46);
    bVar1 = *(byte *)(param_2 + 0x45);
    if (bVar1 < bVar6) {
      bVar1 = *(byte *)(param_2 + 0x44);
      if (bVar1 < bVar6) {
LAB_00524782:
        bVar1 = bVar6;
      }
    }
    else {
      bVar6 = *(byte *)(param_2 + 0x44);
      if (bVar1 <= bVar6) goto LAB_00524782;
    }
    bVar6 = *(byte *)(param_1 + 0x46);
    uVar2 = bVar1 + 1;
    bVar1 = *(byte *)(param_1 + 0x45);
    if (bVar1 < bVar6) {
      bVar1 = *(byte *)(param_1 + 0x44);
      if (*(byte *)(param_1 + 0x44) < bVar6) {
        bVar1 = bVar6;
      }
    }
    else if (bVar1 <= *(byte *)(param_1 + 0x44)) {
      bVar1 = *(byte *)(param_1 + 0x44);
    }
    uVar3 = bVar1 + 1;
    local_10 = (short)(((ulonglong)bVar6 * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_10 - (uint)*(byte *)(param_2 + 0x46)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x46) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x46);
    local_c = (short)(((ulonglong)*(byte *)(param_1 + 0x45) * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_c - (uint)*(byte *)(param_2 + 0x45)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x45) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x45);
    local_8 = (short)(((ulonglong)*(byte *)(param_1 + 0x44) * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_8 - (uint)*(byte *)(param_2 + 0x44)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x44) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x44);
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x4e) - (uint)*(byte *)(param_2 + 0xae);
  uVar7 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x4d) - (uint)*(byte *)(param_2 + 0xad);
  uVar8 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(byte *)(param_2 + 0x4c) - (uint)*(byte *)(param_2 + 0xac);
  uVar9 = (int)uVar4 >> 0x1f;
  if ((int)*(short *)(param_2 + 0xb0) <
      (int)(((uVar2 ^ uVar7) - uVar7) + ((uVar3 ^ uVar8) - uVar8) + ((uVar4 ^ uVar9) - uVar9))) {
    bVar6 = *(byte *)(param_2 + 0x4e);
    bVar1 = *(byte *)(param_2 + 0x4d);
    if (bVar1 < bVar6) {
      bVar1 = *(byte *)(param_2 + 0x4c);
      if (bVar1 < bVar6) {
LAB_005248e9:
        bVar1 = bVar6;
      }
    }
    else {
      bVar6 = *(byte *)(param_2 + 0x4c);
      if (bVar1 <= bVar6) goto LAB_005248e9;
    }
    bVar6 = *(byte *)(param_1 + 0x4e);
    uVar2 = bVar1 + 1;
    bVar1 = *(byte *)(param_1 + 0x4d);
    if (bVar1 < bVar6) {
      bVar1 = *(byte *)(param_1 + 0x4c);
      if (*(byte *)(param_1 + 0x4c) < bVar6) {
        bVar1 = bVar6;
      }
    }
    else if (bVar1 <= *(byte *)(param_1 + 0x4c)) {
      bVar1 = *(byte *)(param_1 + 0x4c);
    }
    uVar3 = bVar1 + 1;
    local_10 = (short)(((ulonglong)bVar6 * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_10 - (uint)*(byte *)(param_2 + 0x4e)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x4e) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x4e);
    local_c = (short)(((ulonglong)*(byte *)(param_1 + 0x4d) * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_c - (uint)*(byte *)(param_2 + 0x4d)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x4d) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x4d);
    local_8 = (short)(((ulonglong)*(byte *)(param_1 + 0x4c) * (ulonglong)uVar3) / (ulonglong)uVar2);
    iVar5 = ((int)local_8 - (uint)*(byte *)(param_2 + 0x4c)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(param_1 + 0x4c) =
         (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x4c);
  }
  uVar2 = (uint)*(byte *)(param_2 + 0x56) - (uint)*(byte *)(param_2 + 0xae);
  uVar7 = (int)uVar2 >> 0x1f;
  uVar3 = (uint)*(byte *)(param_2 + 0x55) - (uint)*(byte *)(param_2 + 0xad);
  uVar8 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(byte *)(param_2 + 0x54) - (uint)*(byte *)(param_2 + 0xac);
  uVar9 = (int)uVar4 >> 0x1f;
  if ((int)(((uVar2 ^ uVar7) - uVar7) + ((uVar3 ^ uVar8) - uVar8) + ((uVar4 ^ uVar9) - uVar9)) <=
      (int)*(short *)(param_2 + 0xb0)) {
    return;
  }
  bVar6 = *(byte *)(param_2 + 0x56);
  bVar1 = *(byte *)(param_2 + 0x55);
  if (bVar1 < bVar6) {
    bVar1 = *(byte *)(param_2 + 0x54);
    if (bVar6 <= bVar1) goto LAB_00524a54;
  }
  else {
    bVar6 = *(byte *)(param_2 + 0x54);
    if (bVar6 < bVar1) goto LAB_00524a54;
  }
  bVar1 = bVar6;
LAB_00524a54:
  bVar6 = *(byte *)(param_1 + 0x56);
  uVar2 = bVar1 + 1;
  bVar1 = *(byte *)(param_1 + 0x55);
  if (bVar1 < bVar6) {
    bVar1 = *(byte *)(param_1 + 0x54);
    if (*(byte *)(param_1 + 0x54) < bVar6) {
      bVar1 = bVar6;
    }
  }
  else if (bVar1 <= *(byte *)(param_1 + 0x54)) {
    bVar1 = *(byte *)(param_1 + 0x54);
  }
  uVar3 = bVar1 + 1;
  local_10 = (short)(((ulonglong)bVar6 * (ulonglong)uVar3) / (ulonglong)uVar2);
  iVar5 = ((int)local_10 - (uint)*(byte *)(param_2 + 0x56)) * (uint)*(byte *)(param_2 + 0xb3);
  *(byte *)(param_1 + 0x56) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x56);
  local_c = (short)(((ulonglong)*(byte *)(param_1 + 0x55) * (ulonglong)uVar3) / (ulonglong)uVar2);
  iVar5 = ((int)local_c - (uint)*(byte *)(param_2 + 0x55)) * (uint)*(byte *)(param_2 + 0xb3);
  *(byte *)(param_1 + 0x55) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x55);
  local_8 = (short)(((ulonglong)*(byte *)(param_1 + 0x54) * (ulonglong)uVar3) / (ulonglong)uVar2);
  iVar5 = ((int)local_8 - (uint)*(byte *)(param_2 + 0x54)) * (uint)*(byte *)(param_2 + 0xb3);
  *(byte *)(param_1 + 0x54) =
       (char)(iVar5 + (iVar5 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_2 + 0x54);
  return;
}


