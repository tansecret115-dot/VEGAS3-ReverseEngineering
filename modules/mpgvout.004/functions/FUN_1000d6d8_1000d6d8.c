/* Module: mpgvout.004
   Function: FUN_1000d6d8
   Address: 1000d6d8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000d6d8(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  ushort *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 *puVar13;
  int iVar14;
  byte *pbVar15;
  ushort *puVar16;
  short *psVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  short sVar22;
  short sVar23;
  ushort uVar24;
  short sVar25;
  ushort uVar26;
  short sVar27;
  ushort uVar28;
  short sVar29;
  ushort uVar30;
  short sVar31;
  ushort uVar32;
  short sVar33;
  ushort uVar34;
  short sVar35;
  ushort uVar36;
  int iStack_1c;
  int iStack_18;
  
  iVar18 = 0;
  puVar11 = (undefined8 *)(**(code **)(param_1 + 0x1c))(param_4 * 0x14);
  uVar12 = param_4 - 0x10;
  do {
    iVar14 = iVar18 * param_4;
    iVar18 = iVar18 + 1;
    psVar17 = (short *)((int)puVar11 + (param_4 + iVar14) * 2);
    iVar19 = 0xf;
    pbVar15 = (byte *)(param_3 + iVar14);
    sVar22 = 0;
    do {
      sVar22 = sVar22 + (ushort)*pbVar15;
      pbVar15 = pbVar15 + 1;
      iVar19 = iVar19 + -1;
    } while (-1 < iVar19);
    *psVar17 = sVar22;
    uVar20 = uVar12;
    if (0 < (int)uVar12) {
      do {
        psVar17 = psVar17 + 1;
        sVar22 = (sVar22 - (ushort)pbVar15[-0x10]) + (ushort)*pbVar15;
        pbVar15 = pbVar15 + 1;
        *psVar17 = sVar22;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
  } while (iVar18 < 8);
  iVar18 = 0;
  if (uVar12 < 0x80000000) {
    do {
      uVar10 = 0;
      puVar1 = (ushort *)((int)puVar11 + iVar18 * 2);
      iVar14 = iVar18 + 1;
      iVar19 = 7;
      puVar16 = puVar1;
      do {
        puVar16 = puVar16 + param_4;
        uVar10 = uVar10 + *puVar16;
        iVar19 = iVar19 + -1;
      } while (-1 < iVar19);
      *puVar1 = uVar10;
      *(char *)(iVar18 + param_2) = (char)((int)(uVar10 + 0x3f) >> 7);
      iVar18 = iVar14;
    } while (iVar14 <= (int)uVar12);
  }
  iVar14 = 0;
  iStack_18 = param_4;
  iStack_1c = param_4 * 9;
  iVar18 = 0;
  if (0 < param_5 + -8) {
    do {
      iVar14 = iVar14 + 1;
      pbVar15 = (byte *)(param_4 * 8 + param_4 * iVar18 + param_3);
      sVar22 = 0;
      iVar18 = iVar18 + 1;
      iVar19 = 0xf;
      do {
        sVar22 = sVar22 + (ushort)*pbVar15;
        pbVar15 = pbVar15 + 1;
        iVar19 = iVar19 + -1;
      } while (-1 < iVar19);
      psVar17 = (short *)((int)puVar11 + iStack_1c * 2);
      *psVar17 = sVar22;
      psVar17 = psVar17 + 1;
      if (0 < (int)uVar12) {
        iVar19 = 0;
        do {
          iVar19 = iVar19 + 4;
          sVar22 = sVar22 + ((ushort)*pbVar15 - (ushort)pbVar15[-0x10]);
          bVar8 = pbVar15[1];
          bVar9 = pbVar15[-0xf];
          *psVar17 = sVar22;
          sVar22 = sVar22 + ((ushort)bVar8 - (ushort)bVar9);
          bVar8 = pbVar15[-0xe];
          bVar9 = pbVar15[2];
          psVar17[1] = sVar22;
          sVar22 = sVar22 + ((ushort)bVar9 - (ushort)bVar8);
          bVar8 = pbVar15[-0xd];
          bVar9 = pbVar15[3];
          psVar17[2] = sVar22;
          sVar22 = sVar22 + ((ushort)bVar9 - (ushort)bVar8);
          pbVar15 = pbVar15 + 4;
          psVar17[3] = sVar22;
          psVar17 = psVar17 + 4;
        } while (iVar19 < (int)uVar12);
      }
      iVar19 = param_2 + iVar18 * param_4;
      iVar21 = 0;
      puVar13 = puVar11;
      if (0 < (int)uVar12) {
        do {
          uVar2 = *(undefined8 *)((int)puVar13 + iStack_1c * 2);
          uVar3 = *(undefined8 *)((int)puVar13 + iStack_1c * 2 + 8);
          uVar4 = *puVar13;
          uVar5 = puVar13[1];
          uVar6 = *(undefined8 *)((int)puVar13 + iStack_18 * 2);
          uVar7 = *(undefined8 *)((int)puVar13 + iStack_18 * 2 + 8);
          sVar22 = ((short)uVar4 + (short)uVar2) - (short)uVar6;
          sVar23 = ((short)((ulonglong)uVar4 >> 0x10) + (short)((ulonglong)uVar2 >> 0x10)) -
                   (short)((ulonglong)uVar6 >> 0x10);
          sVar25 = ((short)((ulonglong)uVar4 >> 0x20) + (short)((ulonglong)uVar2 >> 0x20)) -
                   (short)((ulonglong)uVar6 >> 0x20);
          sVar27 = ((short)((ulonglong)uVar4 >> 0x30) + (short)((ulonglong)uVar2 >> 0x30)) -
                   (short)((ulonglong)uVar6 >> 0x30);
          sVar29 = ((short)uVar5 + (short)uVar3) - (short)uVar7;
          sVar31 = ((short)((ulonglong)uVar5 >> 0x10) + (short)((ulonglong)uVar3 >> 0x10)) -
                   (short)((ulonglong)uVar7 >> 0x10);
          sVar33 = ((short)((ulonglong)uVar5 >> 0x20) + (short)((ulonglong)uVar3 >> 0x20)) -
                   (short)((ulonglong)uVar7 >> 0x20);
          sVar35 = ((short)((ulonglong)uVar5 >> 0x30) + (short)((ulonglong)uVar3 >> 0x30)) -
                   (short)((ulonglong)uVar7 >> 0x30);
          *puVar13 = CONCAT26(sVar27,CONCAT24(sVar25,CONCAT22(sVar23,sVar22)));
          puVar13[1] = CONCAT26(sVar35,CONCAT24(sVar33,CONCAT22(sVar31,sVar29)));
          uVar10 = (ushort)(sVar22 + 0x3fU) >> 7;
          uVar24 = (ushort)(sVar23 + 0x3fU) >> 7;
          uVar26 = (ushort)(sVar25 + 0x3fU) >> 7;
          uVar28 = (ushort)(sVar27 + 0x3fU) >> 7;
          uVar30 = (ushort)(sVar29 + 0x3fU) >> 7;
          uVar32 = (ushort)(sVar31 + 0x3fU) >> 7;
          uVar34 = (ushort)(sVar33 + 0x3fU) >> 7;
          uVar36 = (ushort)(sVar35 + 0x3fU) >> 7;
          *(ulonglong *)(iVar21 + iVar19) =
               CONCAT17((uVar36 != 0) * (uVar36 < 0x100) * (char)uVar36 - (0xff < uVar36),
                        CONCAT16((uVar34 != 0) * (uVar34 < 0x100) * (char)uVar34 - (0xff < uVar34),
                                 CONCAT15((uVar32 != 0) * (uVar32 < 0x100) * (char)uVar32 -
                                          (0xff < uVar32),
                                          CONCAT14((uVar30 != 0) * (uVar30 < 0x100) * (char)uVar30 -
                                                   (0xff < uVar30),
                                                   CONCAT13((uVar28 != 0) * (uVar28 < 0x100) *
                                                            (char)uVar28 - (0xff < uVar28),
                                                            CONCAT12((uVar26 != 0) *
                                                                     (uVar26 < 0x100) * (char)uVar26
                                                                     - (0xff < uVar26),
                                                                     CONCAT11((uVar24 != 0) *
                                                                              (uVar24 < 0x100) *
                                                                              (char)uVar24 -
                                                                              (0xff < uVar24),
                                                                              (uVar10 != 0) *
                                                                              (uVar10 < 0x100) *
                                                                              (char)uVar10 -
                                                                              (0xff < uVar10))))))))
          ;
          puVar13 = puVar13 + 2;
          iVar21 = iVar21 + 8;
        } while (iVar21 < (int)uVar12);
      }
      uVar10 = (*(short *)((int)puVar11 + (iStack_1c + iVar21) * 2) -
               *(short *)((int)puVar11 + (iStack_18 + iVar21) * 2)) +
               *(short *)((int)puVar11 + iVar21 * 2);
      *(ushort *)((int)puVar11 + iVar21 * 2) = uVar10;
      *(char *)(iVar21 + iVar19) = (char)((int)(uVar10 + 0x3f) >> 7);
      iStack_1c = iStack_18;
      iStack_18 = iStack_18 + param_4;
      if (8 < iVar14) {
        iVar14 = 0;
        iStack_18 = param_4;
      }
    } while (iVar18 < param_5 + -8);
  }
  (**(code **)(param_1 + 0x20))(puVar11);
  return;
}


