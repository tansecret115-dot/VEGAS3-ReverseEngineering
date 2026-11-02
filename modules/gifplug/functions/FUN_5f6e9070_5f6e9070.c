/* Module: gifplug.dll
   Function: FUN_5f6e9070
   Address: 5f6e9070
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f6e9070(int param_1,int param_2)

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
    *(ushort *)(param_1 + 0x40) =
         (short)(((uint)*(ushort *)(param_2 + 0x40) - (uint)*(ushort *)(param_1 + 0x40)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x3e) =
         (short)(((uint)*(ushort *)(param_2 + 0x3e) - (uint)*(ushort *)(param_1 + 0x3e)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x3e);
    *(ushort *)(param_1 + 0x3c) =
         (short)(((uint)*(ushort *)(param_2 + 0x3c) - (uint)*(ushort *)(param_1 + 0x3c)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x3c);
    *(ushort *)(param_1 + 0x42) =
         (short)(((uint)*(ushort *)(param_2 + 0x42) - (uint)*(ushort *)(param_1 + 0x42)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x42);
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x40);
    uVar2 = *(ushort *)(param_2 + 0x3e);
    uVar3 = (uint)uVar2;
    if (uVar2 < uVar1) {
      uVar3 = (uint)*(ushort *)(param_2 + 0x3c);
      if (*(ushort *)(param_2 + 0x3c) < uVar1) {
LAB_5f6e9196:
        uVar3 = (uint)uVar1;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x3c);
      if (uVar2 <= uVar1) goto LAB_5f6e9196;
    }
    uVar3 = uVar3 + 1;
    *(ushort *)(param_1 + 0x40) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x40) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x40)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x3e) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3e) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x3e)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x3e);
    *(ushort *)(param_1 + 0x3c) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x3c) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x3c)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x3c);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x48) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x46) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x44) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_2 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    *(ushort *)(param_1 + 0x48) =
         (short)(((uint)*(ushort *)(param_2 + 0x48) - (uint)*(ushort *)(param_1 + 0x48)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x48);
    *(ushort *)(param_1 + 0x46) =
         (short)(((uint)*(ushort *)(param_2 + 0x46) - (uint)*(ushort *)(param_1 + 0x46)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x46);
    *(ushort *)(param_1 + 0x44) =
         (short)(((uint)*(ushort *)(param_2 + 0x44) - (uint)*(ushort *)(param_1 + 0x44)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x4a) =
         (short)(((uint)*(ushort *)(param_2 + 0x4a) - (uint)*(ushort *)(param_1 + 0x4a)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x4a);
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x48);
    uVar2 = *(ushort *)(param_2 + 0x46);
    uVar3 = (uint)uVar2;
    if (uVar2 < uVar1) {
      uVar3 = (uint)*(ushort *)(param_2 + 0x44);
      if (*(ushort *)(param_2 + 0x44) < uVar1) {
LAB_5f6e9370:
        uVar3 = (uint)uVar1;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x44);
      if (uVar2 <= uVar1) goto LAB_5f6e9370;
    }
    uVar3 = uVar3 + 1;
    *(ushort *)(param_1 + 0x48) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x48) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x48)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x48);
    *(ushort *)(param_1 + 0x46) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x46) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x46)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x46);
    *(ushort *)(param_1 + 0x44) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x44) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x44)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x44);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x4e) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x4c) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_2 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    *(ushort *)(param_1 + 0x50) =
         (short)(((uint)*(ushort *)(param_2 + 0x50) - (uint)*(ushort *)(param_1 + 0x50)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0x4e) =
         (short)(((uint)*(ushort *)(param_2 + 0x4e) - (uint)*(ushort *)(param_1 + 0x4e)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x4e);
    *(ushort *)(param_1 + 0x4c) =
         (short)(((uint)*(ushort *)(param_2 + 0x4c) - (uint)*(ushort *)(param_1 + 0x4c)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x4c);
    *(ushort *)(param_1 + 0x52) =
         (short)(((uint)*(ushort *)(param_2 + 0x52) - (uint)*(ushort *)(param_1 + 0x52)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x52);
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x50);
    uVar2 = *(ushort *)(param_2 + 0x4e);
    uVar3 = (uint)uVar2;
    if (uVar2 < uVar1) {
      uVar3 = (uint)*(ushort *)(param_2 + 0x4c);
      if (*(ushort *)(param_2 + 0x4c) < uVar1) {
LAB_5f6e9542:
        uVar3 = (uint)uVar1;
      }
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0x4c);
      if (uVar2 <= uVar1) goto LAB_5f6e9542;
    }
    uVar3 = uVar3 + 1;
    *(ushort *)(param_1 + 0x50) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x50) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x50)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x50);
    *(ushort *)(param_1 + 0x4e) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x4e) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x4e)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x4e);
    *(ushort *)(param_1 + 0x4c) =
         (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x4c) * (ulonglong)uVar3) / 0xffff) &
                  0xffff) - (uint)*(ushort *)(param_1 + 0x4c)) * (uint)*(ushort *)(param_2 + 0xaa)
                >> 0x10) + *(ushort *)(param_1 + 0x4c);
  }
  uVar3 = (uint)*(ushort *)(param_2 + 0x58) - (uint)*(ushort *)(param_2 + 0xa0);
  uVar6 = (int)uVar3 >> 0x1f;
  uVar4 = (uint)*(ushort *)(param_2 + 0x56) - (uint)*(ushort *)(param_2 + 0x9e);
  uVar7 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(ushort *)(param_2 + 0x54) - (uint)*(ushort *)(param_2 + 0x9c);
  uVar8 = (int)uVar5 >> 0x1f;
  if (*(int *)(param_2 + 0xa4) <
      (int)(((uVar3 ^ uVar6) - uVar6) + ((uVar4 ^ uVar7) - uVar7) + ((uVar5 ^ uVar8) - uVar8))) {
    *(ushort *)(param_1 + 0x58) =
         (short)(((uint)*(ushort *)(param_2 + 0x58) - (uint)*(ushort *)(param_1 + 0x58)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x58);
    *(ushort *)(param_1 + 0x56) =
         (short)(((uint)*(ushort *)(param_2 + 0x56) - (uint)*(ushort *)(param_1 + 0x56)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x56);
    *(ushort *)(param_1 + 0x54) =
         (short)(((uint)*(ushort *)(param_2 + 0x54) - (uint)*(ushort *)(param_1 + 0x54)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x54);
    *(ushort *)(param_1 + 0x5a) =
         (short)(((uint)*(ushort *)(param_2 + 0x5a) - (uint)*(ushort *)(param_1 + 0x5a)) *
                 (uint)*(ushort *)(param_2 + 0xa8) >> 0x10) + *(ushort *)(param_1 + 0x5a);
    return;
  }
  uVar1 = *(ushort *)(param_2 + 0x58);
  uVar2 = *(ushort *)(param_2 + 0x56);
  uVar3 = (uint)uVar2;
  if (uVar2 < uVar1) {
    uVar3 = (uint)*(ushort *)(param_2 + 0x54);
    if (uVar1 <= *(ushort *)(param_2 + 0x54)) goto LAB_5f6e971a;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 0x54);
    if (uVar1 < uVar2) goto LAB_5f6e971a;
  }
  uVar3 = (uint)uVar1;
LAB_5f6e971a:
  uVar3 = uVar3 + 1;
  *(ushort *)(param_1 + 0x58) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x58) * (ulonglong)uVar3) / 0xffff) &
                0xffff) - (uint)*(ushort *)(param_1 + 0x58)) * (uint)*(ushort *)(param_2 + 0xaa) >>
              0x10) + *(ushort *)(param_1 + 0x58);
  *(ushort *)(param_1 + 0x56) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x56) * (ulonglong)uVar3) / 0xffff) &
                0xffff) - (uint)*(ushort *)(param_1 + 0x56)) * (uint)*(ushort *)(param_2 + 0xaa) >>
              0x10) + *(ushort *)(param_1 + 0x56);
  *(ushort *)(param_1 + 0x54) =
       (short)((((uint)(((ulonglong)*(ushort *)(param_1 + 0x54) * (ulonglong)uVar3) / 0xffff) &
                0xffff) - (uint)*(ushort *)(param_1 + 0x54)) * (uint)*(ushort *)(param_2 + 0xaa) >>
              0x10) + *(ushort *)(param_1 + 0x54);
  return;
}


