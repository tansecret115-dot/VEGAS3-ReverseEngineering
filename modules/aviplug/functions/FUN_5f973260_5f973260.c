/* Module: aviplug.dll
   Function: FUN_5f973260
   Address: 5f973260
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973260(ulonglong *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  short sVar1;
  ulonglong uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  int iVar16;
  ulonglong uVar17;
  short sVar19;
  undefined8 uVar18;
  
  uVar2 = DAT_5f9dc688;
  iVar4 = 5;
  do {
    uVar5 = 0;
    puVar7 = param_3;
    puVar9 = param_1;
    do {
      uVar14 = *puVar7;
      puVar8 = (undefined4 *)(param_2 + uVar5);
      uVar17 = 0;
      param_3 = puVar7 + 1;
      sVar1 = (short)DAT_5f9dc690;
      sVar11 = (short)*puVar8;
      sVar12 = (short)((uint)*puVar8 >> 0x10);
      sVar15 = (short)((ulonglong)DAT_5f9dc690 >> 0x10);
      *puVar9 = CONCAT44(CONCAT22((ushort)(sVar12 < sVar15) * sVar15 |
                                  (ushort)(sVar12 >= sVar15) * sVar12,
                                  (ushort)(sVar11 < sVar1) * sVar1 |
                                  (ushort)(sVar11 >= sVar1) * sVar11),(*puVar7 & 1) << 2);
      iVar16 = *(int *)(&DAT_5f9dc69c + (uVar14 & 0x200));
      piVar3 = (int *)(&DAT_5f9dc6a0 + (uVar14 & 0x200));
      puVar10 = puVar9 + 1;
      sVar1 = 0;
      while (sVar15 = sVar1, piVar6 = piVar3, iVar16 != 0) {
        uVar14 = *(uint *)((int)puVar8 + iVar16);
        puVar8 = (undefined4 *)((int)puVar8 + iVar16);
        iVar16 = *piVar6;
        piVar3 = piVar6 + 1;
        sVar1 = sVar15 + 1;
        if (uVar14 != 0) {
          iVar13 = (uVar14 ^ -(uint)((int)uVar14 < 0)) + (uint)((int)uVar14 < 0);
          sVar1 = (short)iVar13;
          sVar11 = (short)uVar17;
          sVar12 = (short)((uint)iVar13 >> 0x10);
          sVar19 = (short)(uVar17 >> 0x10);
          uVar17 = (ulonglong)
                   CONCAT22((ushort)(sVar19 < sVar12) * sVar12 | (ushort)(sVar19 >= sVar12) * sVar19
                            ,(ushort)(sVar11 < sVar1) * sVar1 | (ushort)(sVar11 >= sVar1) * sVar11);
          *puVar10 = CONCAT44(uVar14,CONCAT22((short)piVar6[0x3f],sVar15));
          puVar10 = puVar10 + 1;
          sVar1 = 0;
        }
      }
      uVar18 = pmulhw(uVar17,uVar2);
      *puVar10 = uVar2;
      uVar14 = -(uint)((int)DAT_5f9dc680 < (int)(uVar5 >> 8));
      param_1 = puVar10 + 1;
      uVar17 = *puVar9;
      iVar16 = ((int)uVar18 + (uVar5 >> 8 & uVar14)) - (uVar14 >> 0x1e);
      iVar13 = (int)((ulonglong)uVar18 >> 0x20) - (-(uint)(DAT_5f9dc680 < 0) >> 0x1e);
      sVar1 = (short)iVar16;
      sVar12 = (short)DAT_5f9dc680;
      sVar15 = (short)((uint)iVar16 >> 0x10);
      sVar11 = (short)((ulonglong)DAT_5f9dc680 >> 0x10);
      uVar14 = CONCAT22((ushort)(sVar15 < sVar11) * sVar15 | (ushort)(sVar15 >= sVar11) * sVar11,
                        (ushort)(sVar1 < sVar12) * sVar1 | (ushort)(sVar1 >= sVar12) * sVar12);
      sVar1 = (short)iVar13;
      sVar12 = (short)((ulonglong)DAT_5f9dc680 >> 0x20);
      sVar11 = (short)((ulonglong)DAT_5f9dc680 >> 0x30);
      sVar15 = (short)((uint)iVar13 >> 0x10);
      uVar5 = uVar5 + 0x100;
      puVar7[0x1f] = (uint)param_1;
      *puVar7 = uVar14;
      *puVar9 = uVar17 | CONCAT26((ushort)(sVar15 < sVar11) * sVar15 |
                                  (ushort)(sVar15 >= sVar11) * sVar11,
                                  CONCAT24((ushort)(sVar1 < sVar12) * sVar1 |
                                           (ushort)(sVar1 >= sVar12) * sVar12,uVar14));
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


