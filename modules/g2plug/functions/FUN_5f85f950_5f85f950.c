/* Module: g2plug.dll
   Function: FUN_5f85f950
   Address: 5f85f950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f85f950(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 local_c;
  undefined2 local_8;
  
  iVar8 = param_2;
  iVar3 = param_1;
  uVar4 = (uint)*(byte *)(param_2 + 0x3e) - (uint)*(byte *)(param_2 + 0xae);
  uVar10 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(byte *)(param_2 + 0x3d) - (uint)*(byte *)(param_2 + 0xad);
  uVar11 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(byte *)(param_2 + 0x3c) - (uint)*(byte *)(param_2 + 0xac);
  uVar12 = (int)uVar6 >> 0x1f;
  if ((int)*(short *)(param_2 + 0xb0) <
      (int)(((uVar4 ^ uVar10) - uVar10) + ((uVar5 ^ uVar11) - uVar11) + ((uVar6 ^ uVar12) - uVar12))
     ) {
    iVar7 = ((uint)*(byte *)(param_2 + 0x3e) - (uint)*(byte *)(param_1 + 0x3e)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(param_1 + 0x3e) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3e);
    iVar7 = ((uint)*(byte *)(param_2 + 0x3d) - (uint)*(byte *)(param_1 + 0x3d)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(param_1 + 0x3d) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3d);
    iVar7 = ((uint)*(byte *)(param_2 + 0x3c) - (uint)*(byte *)(param_1 + 0x3c)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(param_1 + 0x3c) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3c);
    iVar7 = ((uint)*(byte *)(param_2 + 0x3f) - (uint)*(byte *)(param_1 + 0x3f)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(param_1 + 0x3f) =
         (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(param_1 + 0x3f);
  }
  else {
    bVar9 = *(byte *)(param_2 + 0x3e);
    bVar2 = *(byte *)(param_2 + 0x3d);
    uVar4 = (uint)bVar2;
    if (bVar2 < bVar9) {
      uVar4 = (uint)*(byte *)(param_2 + 0x3c);
      if (*(byte *)(param_2 + 0x3c) < bVar9) {
LAB_5f85fa6e:
        uVar4 = (uint)bVar9;
      }
    }
    else {
      bVar9 = *(byte *)(param_2 + 0x3c);
      if (bVar2 <= bVar9) goto LAB_5f85fa6e;
    }
    uVar4 = uVar4 + 1;
    bVar9 = *(byte *)(param_1 + 0x3d);
    bVar2 = *(byte *)(param_1 + 0x3c);
    pbVar1 = (byte *)(param_1 + 0x3e);
    param_1._0_2_ = (short)(((ulonglong)*(byte *)(param_1 + 0x3e) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)(short)param_1 - (uint)*pbVar1) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(iVar3 + 0x3e) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *pbVar1;
    local_8 = (short)(((ulonglong)bVar9 * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)local_8 - (uint)*(byte *)(iVar3 + 0x3d)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(iVar3 + 0x3d) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x3d)
    ;
    local_c = (short)(((ulonglong)bVar2 * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)local_c - (uint)*(byte *)(iVar3 + 0x3c)) * (uint)*(byte *)(param_2 + 0xb3);
    *(byte *)(iVar3 + 0x3c) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x3c)
    ;
  }
  uVar4 = (uint)*(byte *)(param_2 + 0x46) - (uint)*(byte *)(param_2 + 0xae);
  uVar10 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(byte *)(param_2 + 0x45) - (uint)*(byte *)(param_2 + 0xad);
  uVar11 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(byte *)(param_2 + 0x44) - (uint)*(byte *)(param_2 + 0xac);
  uVar12 = (int)uVar6 >> 0x1f;
  if ((int)*(short *)(param_2 + 0xb0) <
      (int)(((uVar4 ^ uVar10) - uVar10) + ((uVar5 ^ uVar11) - uVar11) + ((uVar6 ^ uVar12) - uVar12))
     ) {
    iVar7 = ((uint)*(byte *)(param_2 + 0x46) - (uint)*(byte *)(iVar3 + 0x46)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(iVar3 + 0x46) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x46)
    ;
    iVar7 = ((uint)*(byte *)(param_2 + 0x45) - (uint)*(byte *)(iVar3 + 0x45)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(iVar3 + 0x45) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x45)
    ;
    iVar7 = ((uint)*(byte *)(param_2 + 0x44) - (uint)*(byte *)(iVar3 + 0x44)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(iVar3 + 0x44) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x44)
    ;
    iVar7 = ((uint)*(byte *)(param_2 + 0x47) - (uint)*(byte *)(iVar3 + 0x47)) *
            (uint)*(byte *)(param_2 + 0xb2);
    *(byte *)(iVar3 + 0x47) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x47)
    ;
  }
  else {
    bVar9 = *(byte *)(param_2 + 0x46);
    bVar2 = *(byte *)(param_2 + 0x45);
    uVar4 = (uint)bVar2;
    if (bVar2 < bVar9) {
      uVar4 = (uint)*(byte *)(param_2 + 0x44);
      if (*(byte *)(param_2 + 0x44) < bVar9) {
LAB_5f85fc40:
        uVar4 = (uint)bVar9;
      }
    }
    else {
      bVar9 = *(byte *)(param_2 + 0x44);
      if (bVar2 <= bVar9) goto LAB_5f85fc40;
    }
    uVar4 = uVar4 + 1;
    param_2._0_2_ = (short)(((ulonglong)*(byte *)(iVar3 + 0x46) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)(short)param_2 - (uint)*(byte *)(iVar3 + 0x46)) * (uint)*(byte *)(iVar8 + 0xb3);
    *(byte *)(iVar3 + 0x46) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x46)
    ;
    local_c = (short)(((ulonglong)*(byte *)(iVar3 + 0x45) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)local_c - (uint)*(byte *)(iVar3 + 0x45)) * (uint)*(byte *)(iVar8 + 0xb3);
    *(byte *)(iVar3 + 0x45) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x45)
    ;
    local_8 = (short)(((ulonglong)*(byte *)(iVar3 + 0x44) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)local_8 - (uint)*(byte *)(iVar3 + 0x44)) * (uint)*(byte *)(iVar8 + 0xb3);
    *(byte *)(iVar3 + 0x44) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x44)
    ;
  }
  uVar4 = (uint)*(byte *)(iVar8 + 0x4e) - (uint)*(byte *)(iVar8 + 0xae);
  uVar10 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(byte *)(iVar8 + 0x4d) - (uint)*(byte *)(iVar8 + 0xad);
  uVar11 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(byte *)(iVar8 + 0x4c) - (uint)*(byte *)(iVar8 + 0xac);
  uVar12 = (int)uVar6 >> 0x1f;
  if ((int)*(short *)(iVar8 + 0xb0) <
      (int)(((uVar4 ^ uVar10) - uVar10) + ((uVar5 ^ uVar11) - uVar11) + ((uVar6 ^ uVar12) - uVar12))
     ) {
    iVar7 = ((uint)*(byte *)(iVar8 + 0x4e) - (uint)*(byte *)(iVar3 + 0x4e)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x4e) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4e)
    ;
    iVar7 = ((uint)*(byte *)(iVar8 + 0x4d) - (uint)*(byte *)(iVar3 + 0x4d)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x4d) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4d)
    ;
    iVar7 = ((uint)*(byte *)(iVar8 + 0x4c) - (uint)*(byte *)(iVar3 + 0x4c)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x4c) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4c)
    ;
    iVar7 = ((uint)*(byte *)(iVar8 + 0x4f) - (uint)*(byte *)(iVar3 + 0x4f)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x4f) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4f)
    ;
  }
  else {
    bVar9 = *(byte *)(iVar8 + 0x4e);
    bVar2 = *(byte *)(iVar8 + 0x4d);
    uVar4 = (uint)bVar2;
    if (bVar2 < bVar9) {
      uVar4 = (uint)*(byte *)(iVar8 + 0x4c);
      if (*(byte *)(iVar8 + 0x4c) < bVar9) {
LAB_5f85fe0a:
        uVar4 = (uint)bVar9;
      }
    }
    else {
      bVar9 = *(byte *)(iVar8 + 0x4c);
      if (bVar2 <= bVar9) goto LAB_5f85fe0a;
    }
    uVar4 = uVar4 + 1;
    param_2._0_2_ = (short)(((ulonglong)*(byte *)(iVar3 + 0x4e) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)(short)param_2 - (uint)*(byte *)(iVar3 + 0x4e)) * (uint)*(byte *)(iVar8 + 0xb3);
    *(byte *)(iVar3 + 0x4e) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4e)
    ;
    local_c = (short)(((ulonglong)*(byte *)(iVar3 + 0x4d) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)local_c - (uint)*(byte *)(iVar3 + 0x4d)) * (uint)*(byte *)(iVar8 + 0xb3);
    *(byte *)(iVar3 + 0x4d) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4d)
    ;
    local_8 = (short)(((ulonglong)*(byte *)(iVar3 + 0x4c) * (ulonglong)uVar4) / 0xff);
    iVar7 = ((int)local_8 - (uint)*(byte *)(iVar3 + 0x4c)) * (uint)*(byte *)(iVar8 + 0xb3);
    *(byte *)(iVar3 + 0x4c) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x4c)
    ;
  }
  uVar4 = (uint)*(byte *)(iVar8 + 0x56) - (uint)*(byte *)(iVar8 + 0xae);
  uVar10 = (int)uVar4 >> 0x1f;
  uVar5 = (uint)*(byte *)(iVar8 + 0x55) - (uint)*(byte *)(iVar8 + 0xad);
  uVar11 = (int)uVar5 >> 0x1f;
  uVar6 = (uint)*(byte *)(iVar8 + 0x54) - (uint)*(byte *)(iVar8 + 0xac);
  uVar12 = (int)uVar6 >> 0x1f;
  if ((int)*(short *)(iVar8 + 0xb0) <
      (int)(((uVar4 ^ uVar10) - uVar10) + ((uVar5 ^ uVar11) - uVar11) + ((uVar6 ^ uVar12) - uVar12))
     ) {
    iVar7 = ((uint)*(byte *)(iVar8 + 0x56) - (uint)*(byte *)(iVar3 + 0x56)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x56) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x56)
    ;
    iVar7 = ((uint)*(byte *)(iVar8 + 0x55) - (uint)*(byte *)(iVar3 + 0x55)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x55) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x55)
    ;
    iVar7 = ((uint)*(byte *)(iVar8 + 0x54) - (uint)*(byte *)(iVar3 + 0x54)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x54) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x54)
    ;
    iVar8 = ((uint)*(byte *)(iVar8 + 0x57) - (uint)*(byte *)(iVar3 + 0x57)) *
            (uint)*(byte *)(iVar8 + 0xb2);
    *(byte *)(iVar3 + 0x57) = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x57)
    ;
    return;
  }
  bVar9 = *(byte *)(iVar8 + 0x56);
  bVar2 = *(byte *)(iVar8 + 0x55);
  uVar4 = (uint)bVar2;
  if (bVar2 < bVar9) {
    uVar4 = (uint)*(byte *)(iVar8 + 0x54);
    if (bVar9 <= *(byte *)(iVar8 + 0x54)) goto LAB_5f85ffda;
  }
  else {
    bVar9 = *(byte *)(iVar8 + 0x54);
    if (bVar9 < bVar2) goto LAB_5f85ffda;
  }
  uVar4 = (uint)bVar9;
LAB_5f85ffda:
  uVar4 = uVar4 + 1;
  param_2._0_2_ = (short)(((ulonglong)*(byte *)(iVar3 + 0x56) * (ulonglong)uVar4) / 0xff);
  iVar7 = ((int)(short)param_2 - (uint)*(byte *)(iVar3 + 0x56)) * (uint)*(byte *)(iVar8 + 0xb3);
  *(byte *)(iVar3 + 0x56) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x56);
  local_c = (short)(((ulonglong)*(byte *)(iVar3 + 0x55) * (ulonglong)uVar4) / 0xff);
  iVar7 = ((int)local_c - (uint)*(byte *)(iVar3 + 0x55)) * (uint)*(byte *)(iVar8 + 0xb3);
  *(byte *)(iVar3 + 0x55) = (char)(iVar7 + (iVar7 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x55);
  local_8 = (short)(((ulonglong)*(byte *)(iVar3 + 0x54) * (ulonglong)uVar4) / 0xff);
  iVar8 = ((int)local_8 - (uint)*(byte *)(iVar3 + 0x54)) * (uint)*(byte *)(iVar8 + 0xb3);
  *(byte *)(iVar3 + 0x54) = (char)(iVar8 + (iVar8 >> 0x1f & 0xffU) >> 8) + *(byte *)(iVar3 + 0x54);
  return;
}


