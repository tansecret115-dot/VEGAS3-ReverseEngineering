/* Module: aviplug.dll
   Function: FUN_5f968860
   Address: 5f968860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f968860(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined6 uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  short sVar17;
  undefined4 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  int iVar18;
  uint5 uVar19;
  int iVar20;
  short sVar21;
  uint5 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  iVar8 = 8;
  piVar9 = (int *)(param_2 + 0x80);
  do {
    iVar6 = 2;
    while( true ) {
      uVar7 = 4;
      do {
        do {
          puVar11 = param_2;
          puVar10 = param_1;
          uVar14 = *puVar10;
          uVar1 = puVar10[1];
          uVar12 = (ulonglong)
                   CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar14 >> 0x18) << 0x30) >>
                                                   0x28),
                                            CONCAT14((char)((uint)uVar14 >> 0x10),uVar14)) >> 0x20),
                            uVar14) & 0xffffffff00ffffff;
          uVar4 = CONCAT51((int5)(uVar12 >> 0x18),(char)((uint)uVar14 >> 8));
          uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar1 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar1 >> 0x10),uVar1)) >>
                                        0x20),uVar1) >> 0x18);
          uVar19 = (uint5)uVar3 & 0xffffffff00;
          uVar2 = puVar10[2];
          uVar15 = CONCAT44((int)CONCAT52((int5)(CONCAT43(uVar3,CONCAT12((char)((uint)uVar1 >> 8),
                                                                         (short)uVar1)) >> 0x10),
                                          (short)uVar1),(int)(uVar12 >> 0x20)) & 0xff00ffffffffff;
          uVar3 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar22 = (uint5)uVar3 & 0xffffffff00;
          uVar5 = (ulonglong)CONCAT41(uVar3,(char)((uint)uVar2 >> 8)) & 0xffffffff00ff;
          uVar13 = CONCAT62((int6)uVar5,(ushort)(byte)uVar2);
          uVar26 = pmaddwd(DAT_5f9da5e0,CONCAT62(uVar4,(ushort)(byte)uVar14));
          uVar24 = pmaddwd(DAT_5f9da5e8,uVar15);
          uVar23 = pmaddwd(DAT_5f9da5e8,uVar13);
          sVar17 = (short)(uVar12 >> 0x30);
          sVar21 = (short)uVar5;
          uVar25 = pmaddwd(DAT_5f9da5e0,CONCAT44((int)uVar13,(int)(uVar19 >> 8)));
          uVar14 = CONCAT22((short)(uVar15 >> 0x20) + (short)(uVar22 >> 8) +
                            (short)uVar4 + (short)(uVar19 >> 0x18),
                            sVar17 + sVar21 + (ushort)(byte)uVar14 + (short)(uVar19 >> 8));
          uVar16 = CONCAT26(sVar17 + sVar21,
                            CONCAT24((short)(uVar15 >> 0x30) + (short)(uVar22 >> 0x18) +
                                     (short)(uVar12 >> 0x20) + (ushort)(byte)uVar2,uVar14));
          uVar13 = pmaddwd(uVar16,_DAT_5f9da5f8);
          uVar16 = pmaddwd(CONCAT44(uVar14,(int)((ulonglong)uVar16 >> 0x20)),_DAT_5f9da600);
          iVar18 = (int)DAT_5f9da5f0;
          iVar20 = (int)((ulonglong)DAT_5f9da5f0 >> 0x20);
          param_1 = puVar10 + 3;
          uVar7 = uVar7 - 1;
          *puVar11 = CONCAT44(((int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar24 >> 0x20))
                              - iVar20 >> 8,((int)uVar26 + (int)uVar24) - iVar18 >> 8);
          puVar11[1] = CONCAT44(((int)((ulonglong)uVar25 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20)
                                ) - iVar20 >> 8,((int)uVar25 + (int)uVar23) - iVar18 >> 8);
          *piVar9 = (int)uVar16 + (int)uVar13 >> 10;
          piVar9[0x40] = (int)((ulonglong)uVar16 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20) >> 10;
          piVar9 = piVar9 + 1;
          param_2 = puVar11 + 2;
        } while ((uVar7 & 1) != 0);
        param_2 = puVar11 + 0x1e;
      } while (uVar7 != 0);
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      param_1 = (undefined4 *)((int)param_1 + param_4);
    }
    param_2 = puVar11 + -0x5e;
    param_1 = (undefined4 *)((int)puVar10 + (param_3 - param_4) + -0x54);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  return;
}


