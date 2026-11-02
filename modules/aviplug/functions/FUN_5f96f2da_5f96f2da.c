/* Module: aviplug.dll
   Function: FUN_5f96f2da
   Address: 5f96f2da
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_5f96f2da(int param_1)

{
  undefined8 *unaff_ESI;
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar7;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar8;
  int iVar10;
  undefined8 uVar9;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  int iVar17;
  undefined8 uVar15;
  undefined8 uVar16;
  
  do {
    uVar2 = packssdw(*unaff_ESI,unaff_ESI[4]);
    uVar14 = packssdw(unaff_ESI[0x1c],unaff_ESI[0x18]);
    iVar13 = (int)uVar14 + (int)uVar2;
    iVar3 = (int)((ulonglong)uVar2 >> 0x20);
    iVar17 = (int)((ulonglong)uVar14 >> 0x20) + iVar3;
    uVar14 = packssdw(unaff_ESI[0xc],unaff_ESI[8]);
    iVar1 = (int)uVar2 * 2 - iVar13;
    iVar3 = iVar3 * 2 - iVar17;
    uVar2 = packssdw(unaff_ESI[0x10],unaff_ESI[0x14]);
    iVar8 = (int)uVar2 + (int)uVar14;
    iVar7 = (int)((ulonglong)uVar14 >> 0x20);
    iVar10 = (int)((ulonglong)uVar2 >> 0x20) + iVar7;
    iVar4 = (int)uVar14 * 2 - iVar8;
    iVar7 = iVar7 * 2 - iVar10;
    iVar8 = iVar8 + iVar13;
    iVar10 = iVar10 + iVar17;
    iVar13 = iVar13 * 2 - iVar8;
    iVar17 = iVar17 * 2 - iVar10;
    uVar2 = CONCAT26((short)((uint)iVar8 >> 0x10),
                     CONCAT24((short)((uint)iVar10 >> 0x10),CONCAT22((short)iVar8,(short)iVar10)));
    uVar14 = pmaddwd(DAT_5f9da7c0,uVar2);
    uVar5 = CONCAT26((short)((uint)iVar13 >> 0x10),
                     CONCAT24((short)((uint)iVar17 >> 0x10),CONCAT22((short)iVar13,(short)iVar17)));
    uVar2 = pmaddwd(uVar2,DAT_5f9da7c8);
    uVar6 = CONCAT26((short)((uint)iVar1 >> 0x10),
                     CONCAT24((short)((uint)iVar3 >> 0x10),CONCAT22((short)iVar1,(short)iVar3)));
    uVar12 = pmaddwd(DAT_5f9da7d0,uVar5);
    uVar15 = pmaddwd(uVar5,DAT_5f9da7d8);
    *unaff_ESI = CONCAT44((int)((longlong)uVar14 >> 0x2f),(int)uVar14 >> 0xf);
    unaff_ESI[0x10] = CONCAT44((int)((longlong)uVar2 >> 0x2f),(int)uVar2 >> 0xf);
    uVar14 = DAT_5f9da7f8;
    uVar2 = DAT_5f9da7f0;
    uVar5 = CONCAT26((short)((uint)iVar4 >> 0x10),
                     CONCAT24((short)((uint)iVar7 >> 0x10),CONCAT22((short)iVar4,(short)iVar7)));
    uVar9 = pmaddwd(DAT_5f9da7e0,uVar6);
    uVar11 = pmaddwd(DAT_5f9da7e8,uVar5);
    unaff_ESI[8] = CONCAT44((int)((longlong)uVar12 >> 0x2f),(int)uVar12 >> 0xf);
    uVar12 = pmaddwd(uVar2,uVar6);
    unaff_ESI[0x18] = CONCAT44((int)((longlong)uVar15 >> 0x2f),(int)uVar15 >> 0xf);
    uVar14 = pmaddwd(uVar14,uVar5);
    uVar15 = pmaddwd(DAT_5f9da800,uVar6);
    uVar16 = pmaddwd(DAT_5f9da808,uVar5);
    uVar2 = pmaddwd(uVar6,_DAT_5f9da810);
    uVar6 = pmaddwd(uVar5,_DAT_5f9da818);
    unaff_ESI[4] = CONCAT44((int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar9 >> 0x20) >>
                            0xf,(int)uVar11 + (int)uVar9 >> 0xf);
    unaff_ESI[0xc] =
         CONCAT44((int)((ulonglong)uVar14 >> 0x20) + (int)((ulonglong)uVar12 >> 0x20) >> 0xf,
                  (int)uVar14 + (int)uVar12 >> 0xf);
    unaff_ESI[0x14] =
         CONCAT44((int)((ulonglong)uVar16 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20) >> 0xf,
                  (int)uVar16 + (int)uVar15 >> 0xf);
    unaff_ESI[0x1c] =
         CONCAT44((int)((ulonglong)uVar6 >> 0x20) + (int)((ulonglong)uVar2 >> 0x20) >> 0xf,
                  (int)uVar6 + (int)uVar2 >> 0xf);
    unaff_ESI = unaff_ESI + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}


