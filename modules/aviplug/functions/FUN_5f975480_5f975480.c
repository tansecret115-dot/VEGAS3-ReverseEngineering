/* Module: aviplug.dll
   Function: FUN_5f975480
   Address: 5f975480
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f975480(uint *param_1,int param_2,int param_3,uint *param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  if (param_3 == 0) {
    *param_1 = 0;
  }
  else {
    *param_1 = *param_1 & 0xffff0000;
  }
  puVar10 = param_4 + 2;
  iVar8 = 0x14 - param_3;
  iVar11 = param_3 + 0xc;
  uVar9 = *puVar10;
  *param_1 = ((param_4[1] & 0x1ff) << (0x17U - (char)param_3 & 0x1f) |
              (*param_4 & 7) << ((byte)iVar8 & 0x1f) | *param_1) &
             -0x80000000 >> ((char)param_3 + 0xbU & 0x1f);
  uVar13 = DAT_5f9e5278;
  iVar3 = DAT_5f9e5284;
  while (bVar5 = (byte)iVar11, DAT_5f9e5278 = uVar13, DAT_5f9e5284 = iVar3, uVar9 != 0x1556) {
    iVar3 = ((&DAT_5f9e5294)[uVar9 * 4] + puVar10[1]) * 0x10;
    puVar4 = (uint *)(&DAT_5f9e2738 + iVar3);
    iVar3 = *(int *)(&DAT_5f9e2744 + iVar3);
    if (param_2 <= iVar3) goto LAB_5f975570;
    uVar9 = *puVar4;
    iVar8 = iVar8 - iVar3;
    iVar11 = iVar11 + iVar3;
    *param_1 = *param_1 | uVar9 >> (bVar5 & 0x1f);
    param_2 = param_2 - iVar3;
    if (iVar8 < 1) {
      cVar2 = (char)iVar8;
      param_1 = param_1 + 1;
      iVar11 = iVar11 + -0x20;
      iVar8 = iVar8 + 0x20;
      *param_1 = uVar9 << ((char)iVar3 + cVar2 & 0x1fU);
    }
    puVar4 = puVar10 + 2;
    puVar10 = puVar10 + 2;
    uVar13 = DAT_5f9e5278;
    iVar3 = DAT_5f9e5284;
    uVar9 = *puVar4;
  }
  puVar4 = &DAT_5f9e5278;
  if (param_2 < iVar3) {
    puVar10 = puVar10 + -2;
LAB_5f975570:
    uVar9 = *puVar4;
    puVar10 = puVar10 + 2;
    if (0 < param_2) {
      uVar13 = -0x80000000 >> ((byte)param_2 - 1 & 0x1f) & uVar9;
      uVar9 = uVar9 << ((byte)param_2 & 0x1f);
      *param_1 = *param_1 | uVar13 >> (bVar5 & 0x1f);
    }
    uVar7 = param_5[1] & 0x1f;
    puVar12 = (uint *)(*param_5 + (param_5[1] >> 5) * 4);
    uVar13 = puVar4[3];
    sVar6 = (sbyte)uVar7;
    if (uVar7 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = -0x80000000 >> (sVar6 - 1U & 0x1f);
    }
    iVar11 = param_5[1];
    *puVar12 = *puVar12 & uVar14 | uVar9 >> sVar6;
    iVar8 = uVar7 + (uVar13 - param_2);
    param_5[1] = (uVar13 - param_2) + iVar11;
    if (0x1f < iVar8) {
      puVar12 = puVar12 + 1;
      iVar8 = iVar8 + -0x20;
      *puVar12 = uVar9 << (0x20U - sVar6 & 0x1f);
    }
    iVar11 = 0x20 - iVar8;
    uVar9 = *puVar10;
    uVar13 = DAT_5f9e5278;
    while (bVar5 = (byte)iVar8, DAT_5f9e5278 = uVar13, uVar9 != 0x1556) {
      iVar3 = ((&DAT_5f9e5294)[uVar9 * 4] + puVar10[1]) * 0x10;
      puVar4 = (uint *)(&DAT_5f9e2738 + iVar3);
      uVar9 = *puVar4;
      iVar3 = *(int *)(&DAT_5f9e2744 + iVar3);
      iVar11 = iVar11 - iVar3;
      iVar8 = iVar8 + iVar3;
      *puVar12 = *puVar12 | uVar9 >> (bVar5 & 0x1f);
      if (iVar11 < 1) {
        cVar2 = (char)iVar11;
        puVar12 = puVar12 + 1;
        iVar8 = iVar8 + -0x20;
        iVar11 = iVar11 + 0x20;
        *puVar12 = uVar9 << ((char)iVar3 + cVar2 & 0x1fU);
      }
      puVar10 = puVar10 + 2;
      param_5[1] = param_5[1] + iVar3;
      uVar13 = DAT_5f9e5278;
      uVar9 = *puVar10;
    }
    if (puVar4 != &DAT_5f9e5278) {
      if (iVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = -0x80000000 >> (bVar5 - 1 & 0x1f);
      }
      *puVar12 = *puVar12 & uVar9 | uVar13 >> (bVar5 & 0x1f);
      iVar8 = DAT_5f9e5284;
      if (iVar11 < DAT_5f9e5284) {
        puVar12[1] = uVar13 << ((byte)iVar11 & 0x1f);
      }
      param_5[1] = param_5[1] + iVar8;
      return;
    }
  }
  else {
    iVar11 = iVar11 + iVar3;
    *param_1 = *param_1 | uVar13 >> (bVar5 & 0x1f);
    if (iVar8 < iVar3) {
      param_1 = param_1 + 1;
      iVar11 = iVar11 + -0x20;
      *param_1 = uVar13 << ((byte)iVar8 & 0x1f);
    }
    iVar3 = param_2 - iVar3;
    if (0 < iVar3) {
      piVar1 = (int *)param_5[2];
      piVar1[2] = (int)param_1;
      *piVar1 = iVar11;
      iVar11 = iVar3 + -0x20 + iVar11;
      piVar1[1] = iVar3;
      if (0 < iVar11) {
        uVar9 = iVar11 + 0x1fU >> 5;
        do {
          param_1 = param_1 + 1;
          uVar9 = uVar9 - 1;
          *param_1 = 0;
        } while (uVar9 != 0);
      }
      param_5[2] = (int)(piVar1 + 4);
      piVar1[6] = 0;
    }
  }
  return;
}


