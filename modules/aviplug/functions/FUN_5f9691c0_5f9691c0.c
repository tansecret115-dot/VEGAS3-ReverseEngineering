/* Module: aviplug.dll
   Function: FUN_5f9691c0
   Address: 5f9691c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9691c0(undefined4 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined7 uVar4;
  uint uVar5;
  uint3 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *puVar10;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined8 uVar11;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  short sVar18;
  int iVar19;
  uint5 uVar20;
  undefined8 uVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar8 = 0x40;
  piVar9 = (int *)(param_2 + 0x80);
  do {
    while( true ) {
      do {
        do {
          puVar10 = param_2;
          uVar1 = *param_1;
          uVar17 = param_1[1];
          uVar3 = (ushort)(((uint7)(byte)((uint)uVar1 >> 0x18) << 0x30) >> 0x28);
          uVar4 = CONCAT25(uVar3,CONCAT14((char)((uint)uVar1 >> 0x10),uVar1));
          uVar6 = (uint3)((uint7)uVar4 >> 0x20);
          uVar7 = (ulonglong)CONCAT41((int)(CONCAT34(uVar6,uVar1) >> 0x18),(char)((uint)uVar1 >> 8))
                  & 0xffffffff00ff;
          uVar2 = param_1[2];
          uVar15 = (ulonglong)
                   CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((
                                                  uint)uVar17 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar17 >> 0x10),uVar17)) >>
                                                  0x20),uVar17) >> 0x18),
                                            CONCAT12((char)((uint)uVar17 >> 8),(short)uVar17)) >>
                                  0x10),(short)uVar17) & 0xffffffff00ff00ff;
          uVar16 = pshufw(uVar15,uVar15,0x4e);
          uVar5 = (uint)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)((uint)uVar2 >> 0x18) <<
                                                          0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                        0x20),uVar2) >> 0x18);
          uVar20 = (uint5)uVar5 & 0xffffffff00;
          uVar15 = (ulonglong)CONCAT41(uVar5,(char)((uint)uVar2 >> 8)) & 0xffffffff00ff;
          uVar11 = CONCAT62((int6)uVar15,(ushort)(byte)uVar2);
          uVar17 = (undefined4)((ulonglong)uVar16 >> 0x20);
          uVar26 = pmaddwd(DAT_5f9da690,CONCAT62((int6)uVar7,(ushort)(byte)uVar1));
          uVar3 = uVar3 >> 8;
          sVar18 = (short)uVar15;
          uVar23 = pmaddwd(DAT_5f9da698,CONCAT44(uVar17,(uint)uVar6));
          sVar12 = uVar3 + sVar18;
          sVar13 = (short)((ulonglong)uVar16 >> 0x20) + (short)(uVar20 >> 8);
          sVar14 = (short)((ulonglong)uVar16 >> 0x30) + (short)(uVar20 >> 0x18);
          uVar21 = pmaddwd(DAT_5f9da698,uVar11);
          uVar25 = pmaddwd(DAT_5f9da690,CONCAT44((int)uVar11,(int)uVar16));
          uVar16 = CONCAT26(uVar3 + sVar18,
                            CONCAT24((short)((uint7)uVar4 >> 0x20) + (ushort)(byte)uVar2 + sVar14,
                                     CONCAT22((short)uVar7 + (short)((ulonglong)uVar16 >> 0x10) +
                                              sVar13,(ushort)(byte)uVar1 + (short)uVar16 + sVar12)))
          ;
          uVar11 = pshufw(CONCAT26(sVar14,CONCAT24(sVar13,(int)CONCAT42(uVar17,sVar12) << 0x10)) >>
                          0x10,uVar16,0x4e);
          uVar16 = pmaddwd(DAT_5f9da6a0,uVar16);
          uVar11 = pmaddwd(DAT_5f9da6a8,uVar11);
          iVar22 = (int)DAT_5f9da6b0;
          iVar24 = (int)((ulonglong)DAT_5f9da6b0 >> 0x20);
          param_1 = param_1 + 3;
          uVar8 = uVar8 - 1;
          *puVar10 = CONCAT44(((int)((ulonglong)uVar26 >> 0x20) + (int)((ulonglong)uVar23 >> 0x20))
                              - iVar24 >> 8,((int)uVar26 + (int)uVar23) - iVar22 >> 8);
          iVar19 = (int)uVar11 + (int)uVar16 >> 10;
          puVar10[1] = CONCAT44(((int)((ulonglong)uVar25 >> 0x20) + (int)((ulonglong)uVar21 >> 0x20)
                                ) - iVar24 >> 8,((int)uVar25 + (int)uVar21) - iVar22 >> 8);
          uVar16 = pshufw(uVar16,CONCAT44((int)((ulonglong)uVar11 >> 0x20) +
                                          (int)((ulonglong)uVar16 >> 0x20) >> 10,iVar19),0x4e);
          *piVar9 = iVar19;
          piVar9[0x40] = (int)uVar16;
          piVar9 = piVar9 + 1;
          param_2 = puVar10 + 2;
        } while ((uVar8 & 1) != 0);
        param_2 = puVar10 + 0x1e;
      } while ((uVar8 & 3) != 0);
      if ((uVar8 & 7) == 0) break;
      param_1 = (undefined4 *)((int)param_1 + param_4);
    }
    param_1 = (undefined4 *)((int)param_1 + (param_3 - param_4) + -0x60);
    param_2 = puVar10 + -0x5e;
  } while (uVar8 != 0);
  return;
}


