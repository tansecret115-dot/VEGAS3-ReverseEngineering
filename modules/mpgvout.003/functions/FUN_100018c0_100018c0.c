/* Module: mpgvout.003
   Function: FUN_100018c0
   Address: 100018c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100018c0(ushort *param_1,char param_2,int param_3)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  short sVar7;
  short sVar8;
  ulonglong uVar6;
  short sVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  short sVar13;
  short sVar14;
  ulonglong uVar12;
  short sVar15;
  
  uVar2 = *param_1;
  *param_1 = 0;
  uVar3 = 0;
  iVar1 = 0;
  do {
    uVar5 = *(undefined8 *)(param_1 + iVar1);
    uVar11 = *(undefined8 *)(param_1 + iVar1 + 4);
    uVar6 = psraw(uVar5,0xf);
    uVar12 = psraw(uVar11,0xf);
    sVar7 = (short)(uVar6 >> 0x10);
    sVar8 = (short)(uVar6 >> 0x20);
    sVar9 = (short)(uVar6 >> 0x30);
    sVar13 = (short)(uVar12 >> 0x10);
    sVar14 = (short)(uVar12 >> 0x20);
    sVar15 = (short)(uVar12 >> 0x30);
    uVar4 = CONCAT26((short)((ulonglong)uVar5 >> 0x30) + sVar9,
                     CONCAT24((short)((ulonglong)uVar5 >> 0x20) + sVar8,
                              CONCAT22((short)((ulonglong)uVar5 >> 0x10) + sVar7,
                                       (short)uVar5 + (short)uVar6))) ^ uVar6;
    uVar10 = CONCAT26((short)((ulonglong)uVar11 >> 0x30) + sVar15,
                      CONCAT24((short)((ulonglong)uVar11 >> 0x20) + sVar14,
                               CONCAT22((short)((ulonglong)uVar11 >> 0x10) + sVar13,
                                        (short)uVar11 + (short)uVar12))) ^ uVar12;
    uVar5 = *(undefined8 *)(param_3 + iVar1 * 2);
    uVar11 = *(undefined8 *)(param_3 + 8 + iVar1 * 2);
    uVar5 = paddusw(CONCAT26((ushort)((short)(uVar4 >> 0x30) * (short)((ulonglong)uVar5 >> 0x30)) >>
                             4,CONCAT24((ushort)((short)(uVar4 >> 0x20) *
                                                (short)((ulonglong)uVar5 >> 0x20)) >> 4,
                                        CONCAT22((ushort)((short)(uVar4 >> 0x10) *
                                                         (short)((ulonglong)uVar5 >> 0x10)) >> 4,
                                                 (ushort)((short)uVar4 * (short)uVar5) >> 4))),
                    0xf800f800f800f800);
    uVar11 = paddusw(CONCAT26((ushort)((short)(uVar10 >> 0x30) * (short)((ulonglong)uVar11 >> 0x30))
                              >> 4,CONCAT24((ushort)((short)(uVar10 >> 0x20) *
                                                    (short)((ulonglong)uVar11 >> 0x20)) >> 4,
                                            CONCAT22((ushort)((short)(uVar10 >> 0x10) *
                                                             (short)((ulonglong)uVar11 >> 0x10)) >>
                                                     4,(ushort)((short)uVar10 * (short)uVar11) >> 4)
                                           )),0xf800f800f800f800);
    uVar4 = psubusw(uVar5,0xf800f800f800f800);
    uVar10 = psubusw(uVar11,0xf800f800f800f800);
    uVar4 = uVar4 ^ uVar6;
    uVar10 = uVar10 ^ uVar12;
    uVar4 = CONCAT26((short)(uVar4 >> 0x30) - sVar9,
                     CONCAT24((short)(uVar4 >> 0x20) - sVar8,
                              CONCAT22((short)(uVar4 >> 0x10) - sVar7,(short)uVar4 - (short)uVar6)))
    ;
    uVar6 = CONCAT26((short)(uVar10 >> 0x30) - sVar15,
                     CONCAT24((short)(uVar10 >> 0x20) - sVar14,
                              CONCAT22((short)(uVar10 >> 0x10) - sVar13,
                                       (short)uVar10 - (short)uVar12)));
    *(ulonglong *)(param_1 + iVar1) = uVar4;
    *(ulonglong *)(param_1 + iVar1 + 4) = uVar6;
    uVar3 = uVar3 ^ uVar4 ^ uVar6;
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x40);
  uVar2 = (ushort)((int)(short)uVar2 << (3U - param_2 & 0x1f));
  *param_1 = uVar2;
  uVar3 = uVar3 >> 0x20 ^ uVar3;
  param_1[0x3f] = param_1[0x3f] ^ 1 ^ (uVar2 ^ (ushort)(uVar3 >> 0x10) ^ (ushort)uVar3) & 1;
  return;
}


