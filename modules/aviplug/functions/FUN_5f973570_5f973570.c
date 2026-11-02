/* Module: aviplug.dll
   Function: FUN_5f973570
   Address: 5f973570
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f973570(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ushort uVar14;
  int iVar16;
  ushort uVar17;
  short sVar18;
  short sVar20;
  ulonglong uVar19;
  short sVar15;
  
  iVar11 = 6;
  uVar2 = *param_1;
  iVar12 = 0;
  do {
    uVar19 = 0;
    puVar13 = param_1 + 2;
    uVar10 = 0;
    uVar4 = *puVar13;
    uVar5 = param_1[3];
    uVar3 = *puVar13;
    while (uVar3 != 0x1556) {
      iVar12 = iVar12 + (&DAT_5f9df768)[uVar10];
      sVar18 = (short)uVar19 + (short)uVar4;
      sVar20 = (short)(uVar19 >> 0x10) + (short)(uVar4 >> 0x10);
      sVar6 = (short)DAT_5f9df760;
      sVar8 = (short)(DAT_5f9df760 >> 0x10);
      iVar16 = (int)((uVar5 ^ -(uint)((int)uVar5 < 0)) + (uint)((int)uVar5 < 0)) >>
               (ulonglong)
               *(uint *)(&DAT_5f9daa78 + (uVar3 >> 0x10) * 4 + (uVar2 & 3) * 0x10 + param_2 * 0x40);
      sVar7 = (short)DAT_5f9df758;
      sVar15 = (short)iVar16;
      sVar9 = (short)((uint)iVar16 >> 0x10);
      uVar14 = (ushort)(sVar7 < sVar15) * sVar7 | (ushort)(sVar7 >= sVar15) * sVar15;
      sVar7 = (short)((ulonglong)DAT_5f9df758 >> 0x10);
      uVar17 = (ushort)(sVar7 < sVar9) * sVar7 | (ushort)(sVar7 >= sVar9) * sVar9;
      puVar1 = puVar13 + 2;
      uVar10 = (uint)((CONCAT22((ushort)(sVar8 < sVar20) * sVar8 |
                                (ushort)(sVar8 >= sVar20) * sVar20,
                                (ushort)(sVar6 < sVar18) * sVar6 |
                                (ushort)(sVar6 >= sVar18) * sVar18) & DAT_5f9df760) << 5) |
               CONCAT22(uVar17,uVar14);
      uVar4 = puVar13[2];
      uVar14 = (ushort)(uVar14 == 0);
      uVar17 = (ushort)(uVar17 == 0);
      uVar5 = puVar13[3];
      uVar19 = (ulonglong)(CONCAT22(sVar20 + uVar17,sVar18 + uVar14) & CONCAT22(-uVar17,-uVar14));
      puVar13 = puVar13 + 2;
      uVar3 = *puVar1;
    }
    iVar12 = iVar12 + (&DAT_5f9df768)[uVar10];
    uVar2 = puVar13[2];
    param_1 = puVar13 + 2;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  return iVar12;
}


