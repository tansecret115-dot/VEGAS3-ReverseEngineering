/* Module: aviplug.dll
   Function: FUN_5f976a00
   Address: 5f976a00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined8 FUN_5f976a00(ulonglong *param_1,int param_2,uint *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  
  lVar17 = 0xc;
  uVar10 = (ulonglong)param_3[1] << 0x37 | (ulonglong)*param_3 << 0x34 & DAT_5f9e6d40;
  puVar8 = param_3 + 2;
  iVar6 = 0x34;
  while( true ) {
    do {
      iVar4 = *(int *)(&DAT_5f9e6c38 + *puVar8 * 4) + puVar8[1];
      puVar8 = puVar8 + 2;
      uVar13 = *(uint *)(&DAT_5f9e5694 + iVar4 * 8);
      uVar11 = (ulonglong)*(uint *)(&DAT_5f9e5690 + iVar4 * 8) << 0x20;
      iVar4 = *(int *)(&DAT_5f9e5694 + iVar4 * 8);
      uVar12 = uVar11 >> lVar17;
      iVar18 = (int)((ulonglong)lVar17 >> 0x20);
      iVar16 = (int)lVar17 + uVar13;
      lVar17 = CONCAT44(iVar18,iVar16);
      param_2 = param_2 - iVar4;
      uVar10 = uVar10 | uVar12;
      iVar6 = iVar6 - iVar4;
    } while (-1 < iVar6);
    iVar14 = (int)((ulonglong)DAT_5f9e6d48 >> 0x20);
    if (param_2 < 0) break;
    iVar16 = iVar16 - (int)DAT_5f9e6d48;
    iVar18 = iVar18 - iVar14;
    lVar17 = CONCAT44(iVar18,iVar16);
    *param_1 = uVar10;
    param_1 = param_1 + 1;
    uVar10 = uVar11 << CONCAT44(-iVar18,uVar13 - iVar16);
    iVar6 = param_2;
  }
  if (iVar4 == 0x84) {
    uVar3 = uVar13 >> 5;
    iVar4 = (iVar16 - uVar13) + uVar3;
    piVar7 = (int *)(iVar6 + 0x80);
    piVar5 = (int *)(param_2 + 0x80);
    if ((int)piVar5 < 0) {
      uVar11 = uVar11 << (ulonglong)(uVar3 + (int)piVar5);
      uVar13 = param_4[1];
      *param_1 = ~(0xffffffffffffffffU >> CONCAT44(iVar18,iVar4 + (int)piVar5)) & uVar10;
      puVar9 = (ulonglong *)(*param_4 + ((uint)param_4[1] >> 3 & 0xfffffff8));
      param_4[1] = param_4[1] - (int)piVar5;
      uVar12 = (ulonglong)uVar13 & 0x3f;
      iVar6 = (int)DAT_5f9e6d48;
      uVar10 = (ulonglong)DAT_5f9e6d48 >> 0x20;
      *puVar9 = ~(0xffffffffffffffffU >> uVar12) & *puVar9 | uVar11 >> uVar12;
      puVar9[1] = uVar11 << CONCAT44((int)uVar10,iVar6 - (int)uVar12);
    }
    else {
      if ((int)piVar7 < 1) {
        iVar4 = iVar4 - (int)DAT_5f9e6d48;
        *param_1 = uVar10;
        uVar10 = uVar11 << CONCAT44(-(iVar18 - iVar14),uVar3 - iVar4);
        param_1 = param_1 + 1;
        piVar7 = piVar5;
      }
      else {
        param_1[1] = 0;
      }
      *param_1 = uVar10;
      if (piVar5 != (int *)0x0) {
        piVar2 = (int *)param_4[2];
        piVar7 = piVar2 + 4;
        *piVar2 = iVar4;
        piVar2[1] = (int)piVar5;
        piVar2[2] = (int)param_1;
        param_4[2] = (int)piVar7;
        piVar2[6] = 0;
      }
    }
  }
  else {
    uVar11 = uVar11 << (ulonglong)(uVar13 + param_2);
    uVar13 = param_4[1];
    *param_1 = ~(0xffffffffffffffffU >> CONCAT44(iVar18,iVar16 + param_2)) & uVar10;
    iVar6 = param_4[1] - param_2;
    puVar9 = (ulonglong *)(*param_4 + ((uint)param_4[1] >> 3 & 0xfffffff8));
    uVar19 = (ulonglong)uVar13 & 0x3f;
    uVar13 = (int)uVar19 - param_2;
    uVar12 = (ulonglong)uVar13;
    uVar10 = ~(0xffffffffffffffffU >> uVar19) & *puVar9 | uVar11 >> uVar19;
    iVar4 = (int)DAT_5f9e6d48;
    iVar16 = (int)((ulonglong)DAT_5f9e6d48 >> 0x20);
    if (0x3f < (int)uVar13) {
      uVar12 = CONCAT44(-iVar16,uVar13 - iVar4);
      *puVar9 = uVar10;
      puVar9 = puVar9 + 1;
      uVar10 = uVar11 << CONCAT44(iVar16,iVar4 - (int)uVar19);
    }
    while( true ) {
      do {
        uVar13 = *puVar8;
        puVar1 = puVar8 + 1;
        puVar8 = puVar8 + 2;
        iVar18 = *(int *)(&DAT_5f9e5694 + (*puVar1 + *(int *)(&DAT_5f9e6c38 + uVar13 * 4)) * 8);
        uVar11 = (ulonglong)
                 *(uint *)(&DAT_5f9e5690 + (*puVar1 + *(int *)(&DAT_5f9e6c38 + uVar13 * 4)) * 8) <<
                 0x20;
        uVar19 = uVar11 >> uVar12;
        iVar15 = (int)(uVar12 >> 0x20);
        iVar14 = (int)uVar12 + iVar18;
        uVar12 = CONCAT44(iVar15,iVar14);
        uVar10 = uVar10 | uVar19;
        iVar6 = iVar6 + iVar18;
      } while (iVar14 < 0x40);
      if (iVar18 == 0x84) break;
      uVar12 = CONCAT44(iVar15 - iVar16,iVar14 - iVar4);
      *puVar9 = uVar10;
      puVar9 = puVar9 + 1;
      uVar10 = uVar11 << CONCAT44(-(iVar15 - iVar16),iVar18 - (iVar14 - iVar4));
    }
    *puVar9 = uVar10;
    param_4[1] = iVar6 + -0x80;
    puVar9[1] = uVar11 << CONCAT44(iVar16 - iVar15,iVar4 - (iVar14 + -0x84));
    piVar7 = (int *)0x84;
  }
  return CONCAT44(piVar7,puVar8);
}


