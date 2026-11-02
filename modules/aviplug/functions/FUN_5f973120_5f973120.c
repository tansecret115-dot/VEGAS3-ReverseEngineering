/* Module: aviplug.dll
   Function: FUN_5f973120
   Address: 5f973120
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f973120(ulonglong *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  short sVar1;
  ulonglong uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  ulonglong uVar17;
  short sVar19;
  undefined8 uVar18;
  
  uVar2 = DAT_5f9dc688;
  iVar5 = 5;
  do {
    uVar6 = 0;
    puVar8 = param_3;
    puVar10 = param_1;
    do {
      uVar17 = 0;
      param_3 = puVar8 + 1;
      puVar9 = (undefined4 *)(param_2 + uVar6 + (*puVar8 & 0x600));
      uVar4 = *puVar8 & 0x200;
      sVar1 = (short)DAT_5f9dc690;
      sVar12 = (short)*puVar9;
      sVar13 = (short)((uint)*puVar9 >> 0x10);
      sVar15 = (short)((ulonglong)DAT_5f9dc690 >> 0x10);
      *puVar10 = CONCAT44(CONCAT22((ushort)(sVar13 < sVar15) * sVar15 |
                                   (ushort)(sVar13 >= sVar15) * sVar13,
                                   (ushort)(sVar12 < sVar1) * sVar1 |
                                   (ushort)(sVar12 >= sVar1) * sVar12),(*puVar8 & 1) << 2);
      iVar16 = *(int *)(&DAT_5f9dc69c + uVar4);
      piVar3 = (int *)(&DAT_5f9dc6a0 + uVar4);
      puVar11 = puVar10 + 1;
      sVar1 = 0;
      while (sVar15 = sVar1, piVar7 = piVar3, iVar16 != 0) {
        uVar4 = *(uint *)((int)puVar9 + iVar16);
        puVar9 = (undefined4 *)((int)puVar9 + iVar16);
        iVar16 = *piVar7;
        piVar3 = piVar7 + 1;
        sVar1 = sVar15 + 1;
        if (uVar4 != 0) {
          iVar14 = (uVar4 ^ -(uint)((int)uVar4 < 0)) + (uint)((int)uVar4 < 0);
          sVar1 = (short)iVar14;
          sVar12 = (short)uVar17;
          sVar13 = (short)((uint)iVar14 >> 0x10);
          sVar19 = (short)(uVar17 >> 0x10);
          uVar17 = (ulonglong)
                   CONCAT22((ushort)(sVar19 < sVar13) * sVar13 | (ushort)(sVar19 >= sVar13) * sVar19
                            ,(ushort)(sVar12 < sVar1) * sVar1 | (ushort)(sVar12 >= sVar1) * sVar12);
          *puVar11 = CONCAT44(uVar4,CONCAT22((short)piVar7[0x3f],sVar15));
          puVar11 = puVar11 + 1;
          sVar1 = 0;
        }
      }
      uVar18 = pmulhw(uVar17,uVar2);
      *puVar11 = uVar2;
      uVar4 = -(uint)((int)DAT_5f9dc680 < (int)(uVar6 >> 8));
      param_1 = puVar11 + 1;
      uVar17 = *puVar10;
      iVar16 = ((int)uVar18 + (uVar6 >> 8 & uVar4)) - (uVar4 >> 0x1e);
      iVar14 = (int)((ulonglong)uVar18 >> 0x20) - (-(uint)(DAT_5f9dc680 < 0) >> 0x1e);
      sVar1 = (short)iVar16;
      sVar13 = (short)DAT_5f9dc680;
      sVar15 = (short)((uint)iVar16 >> 0x10);
      sVar12 = (short)((ulonglong)DAT_5f9dc680 >> 0x10);
      uVar4 = CONCAT22((ushort)(sVar15 < sVar12) * sVar15 | (ushort)(sVar15 >= sVar12) * sVar12,
                       (ushort)(sVar1 < sVar13) * sVar1 | (ushort)(sVar1 >= sVar13) * sVar13);
      sVar1 = (short)iVar14;
      sVar13 = (short)((ulonglong)DAT_5f9dc680 >> 0x20);
      sVar12 = (short)((ulonglong)DAT_5f9dc680 >> 0x30);
      sVar15 = (short)((uint)iVar14 >> 0x10);
      uVar6 = uVar6 + 0x100;
      puVar8[0x1f] = (uint)param_1;
      *puVar8 = uVar4;
      *puVar10 = uVar17 | CONCAT26((ushort)(sVar15 < sVar12) * sVar15 |
                                   (ushort)(sVar15 >= sVar12) * sVar12,
                                   CONCAT24((ushort)(sVar1 < sVar13) * sVar1 |
                                            (ushort)(sVar1 >= sVar13) * sVar13,uVar4));
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


