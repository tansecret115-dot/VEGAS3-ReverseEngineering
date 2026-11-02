/* Module: aviplug.dll
   Function: FUN_5f972e60
   Address: 5f972e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f972e60(ulonglong *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  uint uVar13;
  short sVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  int iVar19;
  
  uVar1 = DAT_5f9dc688;
  iVar5 = 5;
  do {
    uVar6 = 0;
    puVar8 = param_3;
    puVar10 = param_1;
    do {
      uVar17 = 0;
      param_3 = puVar8 + 1;
      puVar9 = (uint *)(param_2 + uVar6 + (*puVar8 & 0x600));
      uVar4 = *puVar8 & 0x200;
      uVar13 = -(uint)((int)*puVar9 < (int)(uint)DAT_5f9dc690);
      *puVar10 = CONCAT44(~uVar13 & *puVar9 | (uint)DAT_5f9dc690 & uVar13,(*puVar8 & 1) << 2);
      iVar16 = *(int *)(&DAT_5f9dc69c + uVar4);
      piVar2 = (int *)(&DAT_5f9dc6a0 + uVar4);
      puVar11 = puVar10 + 1;
      sVar3 = 0;
      while (sVar14 = sVar3, piVar7 = piVar2, iVar16 != 0) {
        uVar4 = *(uint *)((int)puVar9 + iVar16);
        puVar9 = (uint *)((int)puVar9 + iVar16);
        iVar16 = *piVar7;
        piVar2 = piVar7 + 1;
        sVar3 = sVar14 + 1;
        if (uVar4 != 0) {
          uVar13 = (uVar4 ^ -(uint)((int)uVar4 < 0)) + (uint)((int)uVar4 < 0);
          uVar15 = -(uint)((int)uVar13 < (int)uVar17);
          uVar17 = ~(ulonglong)uVar15 & (ulonglong)uVar13 | uVar17 & uVar15;
          *puVar11 = CONCAT44(uVar4,CONCAT22((short)piVar7[0x3f],sVar14));
          puVar11 = puVar11 + 1;
          sVar3 = 0;
        }
      }
      uVar18 = pmulhw(uVar17,uVar1);
      *puVar11 = uVar1;
      uVar4 = -(uint)((int)DAT_5f9dc680 < (int)(uVar6 >> 8));
      param_1 = puVar11 + 1;
      uVar17 = *puVar10;
      iVar16 = ((int)uVar18 + (uVar6 >> 8 & uVar4)) - (uVar4 >> 0x1e);
      iVar19 = (int)((ulonglong)uVar18 >> 0x20) - (-(uint)((longlong)DAT_5f9dc680 < 0) >> 0x1e);
      uVar12 = CONCAT44(-(uint)((int)(DAT_5f9dc680 >> 0x20) < iVar19),
                        -(uint)((int)DAT_5f9dc680 < iVar16));
      uVar12 = DAT_5f9dc680 & uVar12 | ~uVar12 & CONCAT44(iVar19,iVar16);
      uVar6 = uVar6 + 0x100;
      puVar8[0x1f] = (uint)param_1;
      *puVar8 = (uint)uVar12;
      *puVar10 = uVar17 | uVar12;
      puVar8 = param_3;
      puVar10 = param_1;
    } while ((int)uVar6 < 0x600);
    param_2 = param_2 + 0xc00;
    *param_4 = param_1;
    param_4 = param_4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


