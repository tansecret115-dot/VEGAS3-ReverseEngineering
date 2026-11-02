/* Module: mpgvout.004
   Function: FUN_1000198c
   Address: 1000198c
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_1000198c(int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar8;
  short sVar9;
  ulonglong uVar6;
  short sVar10;
  undefined8 uVar7;
  short sVar12;
  short sVar13;
  ulonglong uVar11;
  short sVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar22;
  short sVar23;
  ulonglong uVar21;
  short sVar24;
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    uVar7 = *(undefined8 *)(param_1 + iVar2 * 2);
    uVar1 = *(undefined8 *)(param_1 + 8 + iVar2 * 2);
    uVar11 = psraw(uVar7,0xf);
    uVar21 = psraw(uVar1,0xf);
    sVar12 = (short)(uVar11 >> 0x10);
    sVar13 = (short)(uVar11 >> 0x20);
    sVar14 = (short)(uVar11 >> 0x30);
    sVar22 = (short)(uVar21 >> 0x10);
    sVar23 = (short)(uVar21 >> 0x20);
    sVar24 = (short)(uVar21 >> 0x30);
    uVar6 = CONCAT26((short)((ulonglong)uVar7 >> 0x30) * 2 + sVar14,
                     CONCAT24((short)((ulonglong)uVar7 >> 0x20) * 2 + sVar13,
                              CONCAT22((short)((ulonglong)uVar7 >> 0x10) * 2 + sVar12,
                                       (short)uVar7 * 2 + (short)uVar11))) ^ uVar11;
    uVar15 = CONCAT26((short)((ulonglong)uVar1 >> 0x30) * 2 + sVar24,
                      CONCAT24((short)((ulonglong)uVar1 >> 0x20) * 2 + sVar23,
                               CONCAT22((short)((ulonglong)uVar1 >> 0x10) * 2 + sVar22,
                                        (short)uVar1 * 2 + (short)uVar21))) ^ uVar21;
    sVar18 = (short)(uVar6 >> 0x10);
    sVar19 = (short)(uVar6 >> 0x20);
    sVar20 = (short)(uVar6 >> 0x30);
    sVar17 = (short)uVar6 + (ushort)(0 < (short)uVar6);
    sVar18 = sVar18 + (ushort)(0 < sVar18);
    sVar19 = sVar19 + (ushort)(0 < sVar19);
    sVar20 = sVar20 + (ushort)(0 < sVar20);
    sVar8 = (short)(uVar15 >> 0x10);
    sVar9 = (short)(uVar15 >> 0x20);
    sVar10 = (short)(uVar15 >> 0x30);
    sVar5 = (short)uVar15 + (ushort)(0 < (short)uVar15);
    sVar8 = sVar8 + (ushort)(0 < sVar8);
    sVar9 = sVar9 + (ushort)(0 < sVar9);
    sVar10 = sVar10 + (ushort)(0 < sVar10);
    uVar7 = *(undefined8 *)(param_2 + iVar2 * 2);
    uVar4 = pmulhw(CONCAT26(sVar20,CONCAT24(sVar19,CONCAT22(sVar18,sVar17))),
                   *(undefined8 *)(param_2 + iVar2 * 2));
    uVar1 = *(undefined8 *)(param_2 + 8 + iVar2 * 2);
    uVar16 = pmulhw(CONCAT26(sVar10,CONCAT24(sVar9,CONCAT22(sVar8,sVar5))),
                    *(undefined8 *)(param_2 + 8 + iVar2 * 2));
    uVar6 = psllw(uVar4,0xb);
    uVar15 = psllw(uVar16,0xb);
    uVar4 = paddusw(CONCAT26((ushort)(sVar20 * (short)((ulonglong)uVar7 >> 0x30)) >> 5,
                             CONCAT24((ushort)(sVar19 * (short)((ulonglong)uVar7 >> 0x20)) >> 5,
                                      CONCAT22((ushort)(sVar18 * (short)((ulonglong)uVar7 >> 0x10))
                                               >> 5,(ushort)(sVar17 * (short)uVar7) >> 5))) | uVar6,
                    0xf800f800f800f800);
    uVar7 = paddusw(CONCAT26((ushort)(sVar10 * (short)((ulonglong)uVar1 >> 0x30)) >> 5,
                             CONCAT24((ushort)(sVar9 * (short)((ulonglong)uVar1 >> 0x20)) >> 5,
                                      CONCAT22((ushort)(sVar8 * (short)((ulonglong)uVar1 >> 0x10))
                                               >> 5,(ushort)(sVar5 * (short)uVar1) >> 5))) | uVar15,
                    0xf800f800f800f800);
    uVar15 = psubusw(uVar4,0xf800f800f800f800);
    uVar6 = psubusw(uVar7,0xf800f800f800f800);
    uVar15 = uVar15 ^ uVar11;
    uVar6 = uVar6 ^ uVar21;
    uVar11 = CONCAT26((short)(uVar15 >> 0x30) - sVar14,
                      CONCAT24((short)(uVar15 >> 0x20) - sVar13,
                               CONCAT22((short)(uVar15 >> 0x10) - sVar12,
                                        (short)uVar15 - (short)uVar11)));
    uVar6 = CONCAT26((short)(uVar6 >> 0x30) - sVar24,
                     CONCAT24((short)(uVar6 >> 0x20) - sVar23,
                              CONCAT22((short)(uVar6 >> 0x10) - sVar22,(short)uVar6 - (short)uVar21)
                             ));
    *(ulonglong *)(param_1 + iVar2 * 2) = uVar11;
    *(ulonglong *)(param_1 + 8 + iVar2 * 2) = uVar6;
    uVar3 = uVar3 ^ uVar11 ^ uVar6;
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0x40);
  uVar3 = uVar3 >> 0x20 ^ uVar3;
  *(ushort *)(param_1 + 0x7e) =
       *(ushort *)(param_1 + 0x7e) ^ 1 ^
       ((ushort)param_2 ^ (ushort)(uVar3 >> 0x10) ^ (ushort)uVar3) & 1;
  return;
}


