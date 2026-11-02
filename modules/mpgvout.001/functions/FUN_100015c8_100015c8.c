/* Module: mpgvout.001
   Function: FUN_100015c8
   Address: 100015c8
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_100015c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  short sVar9;
  short sVar10;
  undefined8 uVar6;
  short sVar11;
  ulonglong uVar7;
  ulonglong uVar8;
  short sVar12;
  short sVar14;
  short sVar15;
  undefined8 uVar13;
  short sVar16;
  
  iVar1 = 0;
  do {
    uVar4 = *(undefined8 *)(param_2 + iVar1 * 2);
    uVar3 = *(undefined8 *)(param_1 + iVar1 * 2);
    uVar6 = psllw(uVar3,1);
    uVar13 = psraw(uVar3,0xf);
    sVar12 = (short)uVar13 + (ushort)(0 < (short)uVar3);
    sVar14 = (short)((ulonglong)uVar13 >> 0x10) + (ushort)(0 < (short)((ulonglong)uVar3 >> 0x10));
    sVar15 = (short)((ulonglong)uVar13 >> 0x20) + (ushort)(0 < (short)((ulonglong)uVar3 >> 0x20));
    sVar16 = (short)((ulonglong)uVar13 >> 0x30) + (ushort)(0 < (short)((ulonglong)uVar3 >> 0x30));
    sVar5 = (short)uVar6 + sVar12;
    sVar9 = (short)((ulonglong)uVar6 >> 0x10) + sVar14;
    sVar10 = (short)((ulonglong)uVar6 >> 0x20) + sVar15;
    sVar11 = (short)((ulonglong)uVar6 >> 0x30) + sVar16;
    uVar3 = pmulhw(uVar4,CONCAT26(sVar11,CONCAT24(sVar10,CONCAT22(sVar9,sVar5))));
    iVar2 = CONCAT22((short)((ulonglong)uVar3 >> 0x20),sVar10 * (short)((ulonglong)uVar4 >> 0x20));
    uVar7 = packssdw(CONCAT44(CONCAT22((short)((ulonglong)uVar3 >> 0x10),
                                       sVar9 * (short)((ulonglong)uVar4 >> 0x10)) >> 5,
                              CONCAT22((short)uVar3,sVar5 * (short)uVar4) >> 5),
                     CONCAT44((int)((longlong)
                                    CONCAT26((short)((ulonglong)uVar3 >> 0x30),
                                             CONCAT24(sVar11 * (short)((ulonglong)uVar4 >> 0x30),
                                                      iVar2)) >> 0x25),iVar2 >> 5));
    uVar8 = uVar7 & 0x1000100010001;
    uVar8 = CONCAT26(sVar16,CONCAT24(sVar15,CONCAT22(sVar14,sVar12))) &
            CONCAT26(-(ushort)((short)(uVar8 >> 0x30) == 0),
                     CONCAT24(-(ushort)((short)(uVar8 >> 0x20) == 0),
                              CONCAT22(-(ushort)((short)(uVar8 >> 0x10) == 0),
                                       -(ushort)((short)uVar8 == 0))));
    *(ulonglong *)(param_1 + iVar1 * 2) =
         CONCAT26((short)(uVar7 >> 0x30) - (short)(uVar8 >> 0x30),
                  CONCAT24((short)(uVar7 >> 0x20) - (short)(uVar8 >> 0x20),
                           CONCAT22((short)(uVar7 >> 0x10) - (short)(uVar8 >> 0x10),
                                    (short)uVar7 - (short)uVar8)));
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x40);
  iVar1 = 0;
  do {
    uVar4 = paddsw(*(undefined8 *)(param_1 + iVar1 * 2),0x7800780078007800);
    uVar3 = paddsw(*(undefined8 *)(param_1 + 8 + iVar1 * 2),0x7800780078007800);
    uVar4 = psubusw(uVar4,0x7000700070007000);
    uVar3 = psubusw(uVar3,0x7000700070007000);
    *(ulonglong *)(param_1 + iVar1 * 2) =
         CONCAT26((short)((ulonglong)uVar4 >> 0x30) + -0x800,
                  CONCAT24((short)((ulonglong)uVar4 >> 0x20) + -0x800,
                           CONCAT22((short)((ulonglong)uVar4 >> 0x10) + -0x800,(short)uVar4 + -0x800
                                   )));
    *(ulonglong *)(param_1 + 8 + iVar1 * 2) =
         CONCAT26((short)((ulonglong)uVar3 >> 0x30) + -0x800,
                  CONCAT24((short)((ulonglong)uVar3 >> 0x20) + -0x800,
                           CONCAT22((short)((ulonglong)uVar3 >> 0x10) + -0x800,(short)uVar3 + -0x800
                                   )));
    iVar1 = iVar1 + 8;
  } while (iVar1 < 0x40);
  return;
}


