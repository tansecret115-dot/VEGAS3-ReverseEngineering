/* Module: aviplug.dll
   Function: FUN_5f972fc0
   Address: 5f972fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972fc0(ulonglong *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  int iVar19;
  
  uVar1 = DAT_5f9dc688;
  iVar4 = 5;
  do {
    uVar5 = 0;
    puVar7 = param_3;
    puVar9 = param_1;
    do {
      uVar13 = *puVar7;
      puVar8 = (uint *)(param_2 + uVar5);
      uVar17 = 0;
      param_3 = puVar7 + 1;
      uVar12 = -(uint)((int)*puVar8 < (int)(uint)DAT_5f9dc690);
      *puVar9 = CONCAT44(~uVar12 & *puVar8 | (uint)DAT_5f9dc690 & uVar12,(*puVar7 & 1) << 2);
      iVar16 = *(int *)(&DAT_5f9dc69c + (uVar13 & 0x200));
      piVar2 = (int *)(&DAT_5f9dc6a0 + (uVar13 & 0x200));
      puVar10 = puVar9 + 1;
      sVar3 = 0;
      while (sVar14 = sVar3, piVar6 = piVar2, iVar16 != 0) {
        uVar13 = *(uint *)((int)puVar8 + iVar16);
        puVar8 = (uint *)((int)puVar8 + iVar16);
        iVar16 = *piVar6;
        piVar2 = piVar6 + 1;
        sVar3 = sVar14 + 1;
        if (uVar13 != 0) {
          uVar12 = (uVar13 ^ -(uint)((int)uVar13 < 0)) + (uint)((int)uVar13 < 0);
          uVar15 = -(uint)((int)uVar12 < (int)uVar17);
          uVar17 = ~(ulonglong)uVar15 & (ulonglong)uVar12 | uVar17 & uVar15;
          *puVar10 = CONCAT44(uVar13,CONCAT22((short)piVar6[0x3f],sVar14));
          puVar10 = puVar10 + 1;
          sVar3 = 0;
        }
      }
      uVar18 = pmulhw(uVar17,uVar1);
      *puVar10 = uVar1;
      uVar13 = -(uint)((int)DAT_5f9dc680 < (int)(uVar5 >> 8));
      param_1 = puVar10 + 1;
      uVar17 = *puVar9;
      iVar16 = ((int)uVar18 + (uVar5 >> 8 & uVar13)) - (uVar13 >> 0x1e);
      iVar19 = (int)((ulonglong)uVar18 >> 0x20) - (-(uint)((longlong)DAT_5f9dc680 < 0) >> 0x1e);
      uVar11 = CONCAT44(-(uint)((int)(DAT_5f9dc680 >> 0x20) < iVar19),
                        -(uint)((int)DAT_5f9dc680 < iVar16));
      uVar11 = DAT_5f9dc680 & uVar11 | ~uVar11 & CONCAT44(iVar19,iVar16);
      uVar5 = uVar5 + 0x100;
      puVar7[0x1f] = (uint)param_1;
      *puVar7 = (uint)uVar11;
      *puVar9 = uVar17 | uVar11;
      puVar7 = param_3;
      puVar9 = param_1;
    } while ((int)uVar5 < 0x600);
    param_2 = param_2 + 0x600;
    *param_4 = param_1;
    param_4 = param_4 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


