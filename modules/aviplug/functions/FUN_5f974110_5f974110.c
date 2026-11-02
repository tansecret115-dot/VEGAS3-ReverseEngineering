/* Module: aviplug.dll
   Function: FUN_5f974110
   Address: 5f974110
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f974110(undefined4 *param_1)

{
  ulonglong uVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int extraout_EDX;
  int extraout_EDX_00;
  uint uVar6;
  ulonglong *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong extraout_MM0;
  ulonglong extraout_MM0_00;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ushort uVar18;
  undefined4 *local_8;
  
  puVar8 = (undefined4 *)*param_1;
  uVar5 = param_1[1];
  uVar6 = 0x40;
  if ((int)uVar5 < 0x40) {
    uVar6 = uVar5;
  }
  uVar10 = *(ulonglong *)param_1[2];
  uVar12 = (ulonglong)uVar6;
  puVar7 = (ulonglong *)param_1[2] + 1;
  local_8 = (undefined4 *)*param_1;
  do {
    puVar9 = (ulonglong *)*puVar8;
    if (puVar9 == (ulonglong *)0x0) {
LAB_5f9742fc:
      *param_1 = local_8;
      return uVar5;
    }
    uVar1 = *puVar9;
    uVar4 = (uint)(ushort)(uVar1 >> 0x20);
    uVar18 = (ushort)(uVar1 >> 0x30);
    uVar16 = (ulonglong)CONCAT24(uVar18,uVar4) & 0xf;
    uVar5 = uVar5 + uVar4;
    uVar6 = uVar6 + uVar4;
    uVar4 = (uint)uVar18;
    uVar10 = uVar10 >> uVar16 | uVar1 << 0x20;
    uVar12 = CONCAT44((int)(uVar12 >> 0x20),(int)uVar12 + (int)uVar16);
    if ((int)uVar6 < 0x41) goto LAB_5f974197;
    if (uVar4 != 0x3f && 0x3e < uVar18) {
LAB_5f9742b9:
      *(undefined4 *)puVar9 = 0x1556;
      *(undefined4 *)((int)puVar9 + 4) = 0;
      uVar5 = 0xffffffff;
      local_8 = local_8 + 1;
      goto LAB_5f9742fc;
    }
    uVar4 = FUN_5f974265();
    uVar5 = extraout_ECX;
    uVar10 = extraout_MM0;
    iVar11 = extraout_EDX;
    while (iVar11 != 4) {
LAB_5f974197:
      do {
        uVar3 = DAT_5f9e5688;
        bVar2 = (byte)(uVar10 >> 0x38);
        while( true ) {
          if (0x3f < (int)uVar4) goto LAB_5f9742b9;
          iVar14 = (int)((ulonglong)uVar3 >> 0x20);
          iVar17 = (int)uVar3 - *(uint *)(&DAT_5f9e0990 + (uint)bVar2 * 8);
          iVar11 = (int)uVar12 - iVar17;
          iVar13 = (int)(uVar12 >> 0x20) - iVar14;
          uVar12 = CONCAT44(iVar13,iVar11);
          iVar15 = *(int *)(&DAT_5f9e0994 + (uint)bVar2 * 8) +
                   (int)(uVar10 >> (ulonglong)*(uint *)(&DAT_5f9e0990 + (uint)bVar2 * 8));
          uVar6 = uVar6 - iVar17;
          if ((int)uVar6 < 0) break;
          uVar5 = uVar5 - iVar17;
          uVar10 = uVar10 << CONCAT44(iVar14,iVar17);
          uVar4 = uVar4 + 1;
          bVar2 = (byte)(uVar10 >> 0x38);
          *puVar9 = *(ulonglong *)(&DAT_5f9e1190 + iVar15 * 8);
          puVar9 = puVar9 + 1;
          if (iVar15 == 4) goto LAB_5f974206;
        }
        iVar11 = iVar11 + iVar17;
        iVar13 = iVar13 + iVar14;
        iVar15 = iVar11 + (int)DAT_5f9e5688;
        iVar14 = iVar13 + (int)((ulonglong)DAT_5f9e5688 >> 0x20);
        uVar12 = CONCAT44(-(uint)(iVar14 < 0),-(uint)(iVar15 < (int)uVar5));
        uVar10 = uVar10 | *puVar7 >> CONCAT44(iVar13,iVar11);
        puVar7 = puVar7 + 1;
        uVar12 = CONCAT44(iVar14,iVar15) & uVar12 | ~uVar12 & (ulonglong)uVar5;
        if ((int)uVar5 < iVar17) {
          uVar5 = 0;
          *local_8 = puVar9;
          *puVar9 = (ulonglong)uVar4 << 0x30 | uVar12 << 0x20 |
                    (~(0xffffffffffffffffU >> uVar12) & uVar10) >> 0x20;
          goto LAB_5f9742fc;
        }
        uVar6 = (uint)uVar12;
      } while ((int)uVar6 < 0x41);
      uVar4 = FUN_5f974265();
      uVar5 = extraout_ECX_00;
      uVar10 = extraout_MM0_00;
      iVar11 = extraout_EDX_00;
    }
LAB_5f974206:
    puVar8 = local_8 + 1;
    local_8 = puVar8;
  } while( true );
}


