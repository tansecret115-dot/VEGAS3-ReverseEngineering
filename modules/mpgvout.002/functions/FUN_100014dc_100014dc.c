/* Module: mpgvout.002
   Function: FUN_100014dc
   Address: 100014dc
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100014dc(short *param_1,char param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  
  sVar1 = *param_1;
  iVar2 = 0;
  do {
    uVar9 = *(undefined8 *)(param_3 + iVar2 * 2);
    uVar7 = *(undefined8 *)(param_1 + iVar2);
    uVar4 = pmulhw(uVar9,uVar7);
    uVar8 = psraw(uVar7,0xf);
    iVar3 = CONCAT22((short)((ulonglong)uVar4 >> 0x20),
                     (short)((ulonglong)uVar7 >> 0x20) * (short)((ulonglong)uVar9 >> 0x20));
    uVar5 = packssdw(CONCAT44((int)(CONCAT22((short)((ulonglong)uVar4 >> 0x10),
                                             (short)((ulonglong)uVar7 >> 0x10) *
                                             (short)((ulonglong)uVar9 >> 0x10)) +
                                   (uint)(ushort)((ushort)((ulonglong)uVar8 >> 0x10) >> 0xc)) >> 4,
                              (int)(CONCAT22((short)uVar4,(short)uVar7 * (short)uVar9) +
                                   (uint)(ushort)((ushort)uVar8 >> 0xc)) >> 4),
                     CONCAT44((int)((int)(CONCAT26((short)((ulonglong)uVar4 >> 0x30),
                                                   CONCAT24((short)((ulonglong)uVar7 >> 0x30) *
                                                            (short)((ulonglong)uVar9 >> 0x30),iVar3)
                                                  ) >> 0x20) +
                                   (uint)(ushort)((ulonglong)uVar8 >> 0x3c)) >> 4,
                              (int)(iVar3 + (uint)(ushort)((ushort)((ulonglong)uVar8 >> 0x20) >> 0xc
                                                          )) >> 4));
    uVar9 = psraw(uVar5,0xf);
    sVar10 = (short)(uVar5 >> 0x10);
    sVar11 = (short)(uVar5 >> 0x20);
    sVar12 = (short)(uVar5 >> 0x30);
    uVar6 = uVar5 & 0x1000100010001;
    uVar6 = CONCAT26((short)((ulonglong)uVar9 >> 0x30) + (ushort)(0 < sVar12),
                     CONCAT24((short)((ulonglong)uVar9 >> 0x20) + (ushort)(0 < sVar11),
                              CONCAT22((short)((ulonglong)uVar9 >> 0x10) + (ushort)(0 < sVar10),
                                       (short)uVar9 + (ushort)(0 < (short)uVar5)))) &
            CONCAT26(-(ushort)((short)(uVar6 >> 0x30) == 0),
                     CONCAT24(-(ushort)((short)(uVar6 >> 0x20) == 0),
                              CONCAT22(-(ushort)((short)(uVar6 >> 0x10) == 0),
                                       -(ushort)((short)uVar6 == 0))));
    *(ulonglong *)(param_1 + iVar2) =
         CONCAT26(sVar12 - (short)(uVar6 >> 0x30),
                  CONCAT24(sVar11 - (short)(uVar6 >> 0x20),
                           CONCAT22(sVar10 - (short)(uVar6 >> 0x10),(short)uVar5 - (short)uVar6)));
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x40);
  iVar2 = 0;
  do {
    uVar9 = paddsw(*(undefined8 *)(param_1 + iVar2),0x7800780078007800);
    uVar7 = paddsw(*(undefined8 *)(param_1 + iVar2 + 4),0x7800780078007800);
    uVar9 = psubusw(uVar9,0x7000700070007000);
    uVar7 = psubusw(uVar7,0x7000700070007000);
    *(ulonglong *)(param_1 + iVar2) =
         CONCAT26((short)((ulonglong)uVar9 >> 0x30) + -0x800,
                  CONCAT24((short)((ulonglong)uVar9 >> 0x20) + -0x800,
                           CONCAT22((short)((ulonglong)uVar9 >> 0x10) + -0x800,(short)uVar9 + -0x800
                                   )));
    *(ulonglong *)(param_1 + iVar2 + 4) =
         CONCAT26((short)((ulonglong)uVar7 >> 0x30) + -0x800,
                  CONCAT24((short)((ulonglong)uVar7 >> 0x20) + -0x800,
                           CONCAT22((short)((ulonglong)uVar7 >> 0x10) + -0x800,(short)uVar7 + -0x800
                                   )));
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0x40);
  *param_1 = (short)((int)sVar1 << (3U - param_2 & 0x1f));
  return;
}


