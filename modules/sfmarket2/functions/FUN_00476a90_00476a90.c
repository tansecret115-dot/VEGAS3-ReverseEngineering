/* Module: sfmarket2.dll
   Function: FUN_00476a90
   Address: 00476a90
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00476a90(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x40) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x3e) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x3c) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_2 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    uVar1 = *(ushort *)(param_2 + 0x40);
    uVar2 = *(ushort *)(param_2 + 0x3e);
    if (uVar2 < uVar1) {
      uVar2 = *(ushort *)(param_2 + 0x3c);
      if (uVar2 < uVar1) {
LAB_00476b15:
        uVar2 = uVar1;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x3c);
      if (uVar2 <= *(ushort *)(param_2 + 0x3c)) goto LAB_00476b15;
    }
    uVar1 = *(ushort *)(param_1 + 0x40);
    uVar3 = uVar2 + 1;
    uVar2 = *(ushort *)(param_1 + 0x3e);
    if (uVar2 < uVar1) {
      uVar2 = *(ushort *)(param_1 + 0x3c);
      if (*(ushort *)(param_1 + 0x3c) < uVar1) {
        uVar2 = uVar1;
      }
    }
    else if (uVar2 <= *(ushort *)(param_1 + 0x3c)) {
      uVar2 = *(ushort *)(param_1 + 0x3c);
    }
    uVar4 = uVar2 + 1;
    *(ushort *)(param_1 + 0x40) =
         (short)((((uint)(((ulonglong)uVar1 * (ulonglong)uVar4) / (ulonglong)uVar3) & 0xffff) -
                 (uint)*(ushort *)(param_2 + 0x40)) * (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) +
         *(ushort *)(param_2 + 0x40);
    *(ushort *)(param_1 + 0x3e) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3e) * (ulonglong)uVar4) /
                         (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x3e)) *
                 (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x3e);
    *(ushort *)(param_1 + 0x3c) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3c) * (ulonglong)uVar4) /
                         (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x3c)) *
                 (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x3c);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x48) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x46) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x44) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_2 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    uVar1 = *(ushort *)(param_2 + 0x48);
    uVar2 = *(ushort *)(param_2 + 0x46);
    if (uVar2 < uVar1) {
      uVar2 = *(ushort *)(param_2 + 0x44);
      if (uVar2 < uVar1) {
LAB_00476c90:
        uVar2 = uVar1;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x44);
      if (uVar2 <= *(ushort *)(param_2 + 0x44)) goto LAB_00476c90;
    }
    uVar1 = *(ushort *)(param_1 + 0x48);
    uVar3 = uVar2 + 1;
    uVar2 = *(ushort *)(param_1 + 0x46);
    if (uVar2 < uVar1) {
      uVar2 = *(ushort *)(param_1 + 0x44);
      if (*(ushort *)(param_1 + 0x44) < uVar1) {
        uVar2 = uVar1;
      }
    }
    else if (uVar2 <= *(ushort *)(param_1 + 0x44)) {
      uVar2 = *(ushort *)(param_1 + 0x44);
    }
    uVar4 = uVar2 + 1;
    *(ushort *)(param_1 + 0x48) =
         (short)((((uint)(((ulonglong)uVar1 * (ulonglong)uVar4) / (ulonglong)uVar3) & 0xffff) -
                 (uint)*(ushort *)(param_2 + 0x48)) * (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) +
         *(ushort *)(param_2 + 0x48);
    *(ushort *)(param_1 + 0x46) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x46) * (ulonglong)uVar4) /
                         (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x46)) *
                 (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x46);
    *(ushort *)(param_1 + 0x44) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x44) * (ulonglong)uVar4) /
                         (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x44)) *
                 (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x44);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x4e) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x4c) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_2 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    uVar1 = *(ushort *)(param_2 + 0x50);
    uVar2 = *(ushort *)(param_2 + 0x4e);
    if (uVar2 < uVar1) {
      uVar2 = *(ushort *)(param_2 + 0x4c);
      if (uVar2 < uVar1) {
LAB_00476e09:
        uVar2 = uVar1;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x4c);
      if (uVar2 <= *(ushort *)(param_2 + 0x4c)) goto LAB_00476e09;
    }
    uVar1 = *(ushort *)(param_1 + 0x50);
    uVar3 = uVar2 + 1;
    uVar2 = *(ushort *)(param_1 + 0x4e);
    if (uVar2 < uVar1) {
      uVar2 = *(ushort *)(param_1 + 0x4c);
      if (*(ushort *)(param_1 + 0x4c) < uVar1) {
        uVar2 = uVar1;
      }
    }
    else if (uVar2 <= *(ushort *)(param_1 + 0x4c)) {
      uVar2 = *(ushort *)(param_1 + 0x4c);
    }
    uVar4 = uVar2 + 1;
    *(ushort *)(param_1 + 0x50) =
         (short)((((uint)(((ulonglong)uVar1 * (ulonglong)uVar4) / (ulonglong)uVar3) & 0xffff) -
                 (uint)*(ushort *)(param_2 + 0x50)) * (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) +
         *(ushort *)(param_2 + 0x50);
    *(ushort *)(param_1 + 0x4e) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x4e) * (ulonglong)uVar4) /
                         (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x4e)) *
                 (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x4e);
    *(ushort *)(param_1 + 0x4c) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x4c) * (ulonglong)uVar4) /
                         (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x4c)) *
                 (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x4c);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x58) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x56) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x54) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if ((int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8)) <=
      *(int *)(param_2 + 0xa4)) {
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x58);
  uVar2 = *(ushort *)(param_2 + 0x56);
  if (uVar2 < uVar1) {
    uVar2 = *(ushort *)(param_2 + 0x54);
    if (uVar1 <= uVar2) goto LAB_00476f86;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x54);
    if (*(ushort *)(param_2 + 0x54) < uVar2) goto LAB_00476f86;
  }
  uVar2 = uVar1;
LAB_00476f86:
  uVar1 = *(ushort *)(param_1 + 0x58);
  uVar3 = uVar2 + 1;
  uVar2 = *(ushort *)(param_1 + 0x56);
  if (uVar2 < uVar1) {
    uVar2 = *(ushort *)(param_1 + 0x54);
    if (*(ushort *)(param_1 + 0x54) < uVar1) {
      uVar2 = uVar1;
    }
  }
  else if (uVar2 <= *(ushort *)(param_1 + 0x54)) {
    uVar2 = *(ushort *)(param_1 + 0x54);
  }
  uVar4 = uVar2 + 1;
  *(ushort *)(param_1 + 0x58) =
       (short)((((uint)(((ulonglong)uVar1 * (ulonglong)uVar4) / (ulonglong)uVar3) & 0xffff) -
               (uint)*(ushort *)(param_2 + 0x58)) * (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) +
       *(ushort *)(param_2 + 0x58);
  *(ushort *)(param_1 + 0x56) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x56) * (ulonglong)uVar4) /
                       (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x56)) *
               (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x56);
  *(ushort *)(param_1 + 0x54) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x54) * (ulonglong)uVar4) /
                       (ulonglong)uVar3) & 0xffff) - (uint)*(ushort *)(param_2 + 0x54)) *
               (uint)*(ushort *)(param_2 + 0xaa) >> 0x10) + *(ushort *)(param_2 + 0x54);
  return;
}


