/* Module: erv33260.dll
   Function: FUN_6708eac0
   Address: 6708eac0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_6708eac0(ulonglong *param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char cVar12;
  byte bVar14;
  uint uVar13;
  byte bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  bool bVar20;
  short sVar21;
  short sVar23;
  short sVar24;
  undefined8 uVar22;
  short sVar25;
  short sVar26;
  short sVar28;
  short sVar29;
  undefined8 uVar27;
  short sVar30;
  undefined8 in_MM2;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  undefined8 uVar35;
  short sVar41;
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  undefined4 in_MM6_Da;
  undefined4 uVar42;
  short sVar46;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar47;
  int iVar49;
  int iVar50;
  ulonglong uVar48;
  uint local_28;
  int local_1c;
  char cVar11;
  
  local_1c = 0;
  uVar8 = param_5 & 0xfcfcfcfc;
  uVar9 = param_5 & 0xfc;
  if ((int)param_4 < (int)(param_5 & 0xfc)) {
    uVar9 = param_4;
  }
  uVar18 = uVar8 >> 0x10 & 0xff;
  if ((int)param_4 < (int)uVar18) {
    uVar18 = param_4;
  }
  uVar13 = uVar8 >> 8 & 0xff;
  if ((int)param_4 < (int)uVar13) {
    uVar13 = param_4;
  }
  uVar10 = uVar8 >> 0x18;
  if ((int)param_4 < (int)(uVar8 >> 0x18)) {
    uVar10 = param_4;
  }
  uVar8 = uVar13 + uVar9 >> 2;
  uVar13 = uVar10 + uVar18 >> 2;
  cVar12 = (char)uVar8;
  local_28 = CONCAT31((int3)uVar13,cVar12) & 0xffff;
  iVar16 = (param_2 - uVar9) - uVar18 * param_6;
  bVar14 = 4;
  uVar27 = 0;
  uVar22 = 0;
  do {
    do {
      uVar31 = in_MM2;
      uVar42 = in_MM6_Da;
      uVar34 = *param_1;
      uVar36 = uVar34 & 0xff00ff00ff00ff;
      uVar48 = *(ulonglong *)((int)param_1 + param_6);
      uVar3 = *(ulonglong *)((int)param_1 + param_6 * 2);
      uVar37 = uVar48 & 0xff00ff00ff00ff;
      uVar4 = *(ulonglong *)((int)param_1 + param_6 * 3);
      uVar38 = uVar3 & 0xff00ff00ff00ff;
      uVar39 = uVar4 & 0xff00ff00ff00ff;
      sVar21 = (short)uVar22 + (short)uVar36 + (short)uVar37 + (short)uVar38 + (short)uVar39;
      sVar23 = (short)((ulonglong)uVar22 >> 0x10) + (short)(uVar36 >> 0x10) +
               (short)(uVar37 >> 0x10) + (short)(uVar38 >> 0x10) + (short)(uVar39 >> 0x10);
      sVar24 = (short)((ulonglong)uVar22 >> 0x20) + (short)(uVar36 >> 0x20) +
               (short)(uVar37 >> 0x20) + (short)(uVar38 >> 0x20) + (short)(uVar39 >> 0x20);
      sVar25 = (short)((ulonglong)uVar22 >> 0x30) + (short)(uVar36 >> 0x30) +
               (short)(uVar37 >> 0x30) + (short)(uVar38 >> 0x30) + (short)(uVar39 >> 0x30);
      uVar22 = CONCAT26(sVar25,CONCAT24(sVar24,CONCAT22(sVar23,sVar21)));
      uVar36 = param_1[1];
      uVar43 = uVar36 & 0xff00ff00ff00ff;
      uVar37 = *(ulonglong *)((int)param_1 + param_6 + 8);
      uVar44 = uVar37 & 0xff00ff00ff00ff;
      uVar38 = *(ulonglong *)((int)param_1 + param_6 * 2 + 8);
      uVar45 = uVar38 & 0xff00ff00ff00ff;
      uVar39 = *(ulonglong *)((int)param_1 + param_6 * 3 + 8);
      uVar47 = uVar39 & 0xff00ff00ff00ff;
      sVar26 = (short)uVar27 + (short)uVar43 + (short)uVar44 + (short)uVar45 + (short)uVar47;
      sVar28 = (short)((ulonglong)uVar27 >> 0x10) + (short)(uVar43 >> 0x10) +
               (short)(uVar44 >> 0x10) + (short)(uVar45 >> 0x10) + (short)(uVar47 >> 0x10);
      sVar29 = (short)((ulonglong)uVar27 >> 0x20) + (short)(uVar43 >> 0x20) +
               (short)(uVar44 >> 0x20) + (short)(uVar45 >> 0x20) + (short)(uVar47 >> 0x20);
      sVar30 = (short)((ulonglong)uVar27 >> 0x30) + (short)(uVar43 >> 0x30) +
               (short)(uVar44 >> 0x30) + (short)(uVar45 >> 0x30) + (short)(uVar47 >> 0x30);
      uVar27 = CONCAT26(sVar30,CONCAT24(sVar29,CONCAT22(sVar28,sVar26)));
      uVar33 = pmaddwd(CONCAT26((ushort)(uVar34 >> 0x38) + (ushort)(uVar48 >> 0x38),
                                CONCAT24(((ushort)(uVar34 >> 0x20) >> 8) +
                                         ((ushort)(uVar48 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar34 >> 0x10) >> 8) +
                                                  ((ushort)(uVar48 >> 0x10) >> 8),
                                                  ((ushort)uVar34 >> 8) + ((ushort)uVar48 >> 8)))),
                       0x1000100010001);
      uVar40 = pmaddwd(CONCAT26((ushort)(uVar36 >> 0x38) + (ushort)(uVar37 >> 0x38),
                                CONCAT24(((ushort)(uVar36 >> 0x20) >> 8) +
                                         ((ushort)(uVar37 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar36 >> 0x10) >> 8) +
                                                  ((ushort)(uVar37 >> 0x10) >> 8),
                                                  ((ushort)uVar36 >> 8) + ((ushort)uVar37 >> 8)))),
                       0x1000100010001);
      uVar35 = pmaddwd(CONCAT26((ushort)(uVar3 >> 0x38) + (ushort)(uVar4 >> 0x38),
                                CONCAT24(((ushort)(uVar3 >> 0x20) >> 8) +
                                         ((ushort)(uVar4 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar3 >> 0x10) >> 8) +
                                                  ((ushort)(uVar4 >> 0x10) >> 8),
                                                  ((ushort)uVar3 >> 8) + ((ushort)uVar4 >> 8)))),
                       0x1000100010001);
      param_1 = (ulonglong *)((int)param_1 + param_6 * 4);
      uVar32 = pmaddwd(CONCAT26((ushort)(uVar38 >> 0x38) + (ushort)(uVar39 >> 0x38),
                                CONCAT24(((ushort)(uVar38 >> 0x20) >> 8) +
                                         ((ushort)(uVar39 >> 0x20) >> 8),
                                         CONCAT22(((ushort)(uVar38 >> 0x10) >> 8) +
                                                  ((ushort)(uVar39 >> 0x10) >> 8),
                                                  ((ushort)uVar38 >> 8) + ((ushort)uVar39 >> 8)))),
                       0x1000100010001);
      sVar46 = (short)uVar40 + (short)uVar33 +
               (short)((ulonglong)uVar40 >> 0x20) + (short)((ulonglong)uVar33 >> 0x20);
      sVar41 = (short)uVar35 + (short)uVar32 +
               (short)((ulonglong)uVar35 >> 0x20) + (short)((ulonglong)uVar32 >> 0x20);
      in_MM6_Da = CONCAT22(sVar41,sVar46);
      bVar20 = SBORROW1(bVar14,'\x02');
      bVar14 = bVar14 - 2;
      bVar19 = bVar14 == 0;
      in_MM2 = uVar31;
    } while (!bVar19 && bVar20 == (short)((ushort)bVar14 << 8) < 0);
    bVar14 = 3;
    in_MM2 = CONCAT44(in_MM6_Da,uVar42);
  } while (bVar19);
  while( true ) {
    iVar7 = param_6 * 2;
    iVar16 = iVar16 + param_6 * -2;
    uVar22 = CONCAT44(*(undefined4 *)(iVar16 + 4 + iVar7),*(undefined4 *)(iVar16 + iVar7));
    uVar34 = 0x3fffffff3fffffff;
    uVar10 = local_28;
    do {
      bVar14 = (char)uVar10 - 1;
      uVar5 = *(undefined4 *)(iVar16 + 8 + iVar7);
      uVar22 = CONCAT26((short)((ulonglong)uVar22 >> 0x30) - sVar25,
                        CONCAT24((short)((ulonglong)uVar22 >> 0x20) - sVar24,
                                 CONCAT22((short)((ulonglong)uVar22 >> 0x10) - sVar23,
                                          (short)uVar22 - sVar21)));
      uVar1 = *(undefined4 *)(iVar16 + 0xc + iVar7);
      uVar22 = pmaddwd(uVar22,uVar22);
      uVar6 = *(undefined4 *)(iVar16 + 0xc + param_6 * 0xc);
      uVar2 = *(undefined4 *)(iVar16 + 0xc + param_6 * 0x10);
      uVar27 = CONCAT26((short)((uint)uVar1 >> 0x10) - sVar30,
                        CONCAT24((short)uVar1 - sVar29,
                                 CONCAT22((short)((uint)uVar5 >> 0x10) - sVar28,
                                          (short)uVar5 - sVar26)));
      uVar5 = *(undefined4 *)(iVar16 + 0xc + param_6 * 4);
      uVar1 = *(undefined4 *)(iVar16 + 0xc + param_6 * 8);
      uVar27 = pmaddwd(uVar27,uVar27);
      uVar33 = CONCAT26((short)((uint)uVar2 >> 0x10) - sVar41,
                        CONCAT24((short)uVar2 - sVar46,
                                 CONCAT22((short)((uint)uVar6 >> 0x10) -
                                          (short)((uint)uVar42 >> 0x10),(short)uVar6 - (short)uVar42
                                         )));
      uVar32 = CONCAT26((short)((uint)uVar1 >> 0x10) - (short)((ulonglong)uVar31 >> 0x30),
                        CONCAT24((short)uVar1 - (short)((ulonglong)uVar31 >> 0x20),
                                 CONCAT22((short)((uint)uVar5 >> 0x10) -
                                          (short)((ulonglong)uVar31 >> 0x10),
                                          (short)uVar5 - (short)uVar31)));
      uVar33 = pmaddwd(uVar33,uVar33);
      uVar32 = pmaddwd(uVar32,uVar32);
      uVar17 = -(uint)((char)uVar10 == '\0') & (param_6 + 0x7fffffff) - (uVar8 & 0xff);
      iVar49 = (int)((ulonglong)uVar33 >> 0x20) +
               (int)((ulonglong)uVar22 >> 0x20) + (int)((ulonglong)uVar27 >> 0x20) +
               (int)((ulonglong)uVar32 >> 0x20) +
               (int)uVar33 + (int)uVar22 + (int)uVar27 + (int)uVar32;
      iVar16 = iVar16 + 4 + uVar17 * 4;
      iVar50 = -(uint)((int)(uVar34 >> 0x20) < iVar49);
      uVar48 = CONCAT44(iVar50,iVar50);
      uVar22 = CONCAT44(*(undefined4 *)(iVar16 + 4 + iVar7),*(undefined4 *)(iVar16 + iVar7));
      bVar15 = (byte)((int)uVar17 >> 0x1f) & cVar12 + 1U;
      uVar34 = uVar34 & uVar48 | ~uVar48 & CONCAT44(iVar49,CONCAT31((int3)(uVar10 >> 8),bVar14));
      cVar11 = (char)(uVar10 >> 8);
      uVar10 = (uint)CONCAT11(cVar11 - CARRY1(bVar14,bVar15),bVar14 + bVar15);
    } while (CARRY1(bVar14,bVar15) <= cVar11);
    *(char *)(param_7 + local_1c * 4) = (cVar12 - ((char)uVar34 + '\x01')) * '\x04' - (char)uVar9;
    *(char *)(param_7 + 1 + local_1c * 4) =
         ((char)uVar13 - (char)(uVar34 >> 8)) * '\x04' - (char)uVar18;
    if (local_1c == param_8) break;
    iVar16 = (param_3 - uVar18 * param_6) - uVar9;
    local_1c = param_8;
  }
  return;
}


