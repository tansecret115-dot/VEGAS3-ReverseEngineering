/* Module: aviplug.dll
   Function: FUN_5f96f412
   Address: 5f96f412
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f96f412(int param_1)

{
  undefined8 *unaff_ESI;
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar13;
  undefined8 uVar12;
  undefined8 uVar14;
  
  do {
    uVar7 = DAT_5f9da7d0;
    uVar2 = packssdw(*unaff_ESI,unaff_ESI[4]);
    uVar11 = packssdw(unaff_ESI[0x18],unaff_ESI[0x1c]);
    iVar9 = (int)uVar11 + (int)uVar2;
    iVar3 = (int)((ulonglong)uVar2 >> 0x20);
    iVar13 = (int)((ulonglong)uVar11 >> 0x20) + iVar3;
    uVar11 = packssdw(unaff_ESI[8],unaff_ESI[0xc]);
    iVar1 = (int)uVar2 * 2 - iVar9;
    iVar3 = iVar3 * 2 - iVar13;
    uVar2 = packssdw(unaff_ESI[0x10],unaff_ESI[0x14]);
    iVar6 = (int)uVar2 + (int)uVar11;
    iVar10 = (int)((ulonglong)uVar11 >> 0x20);
    iVar8 = (int)((ulonglong)uVar2 >> 0x20) + iVar10;
    iVar4 = (int)uVar11 * 2 - iVar6;
    iVar5 = iVar10 * 2 - iVar8;
    iVar6 = iVar6 + iVar9;
    iVar8 = iVar8 + iVar13;
    iVar10 = iVar9 * 2 - iVar6;
    iVar9 = iVar13 * 2 - iVar8;
    uVar2 = CONCAT26((short)((uint)iVar6 >> 0x10),
                     CONCAT24((short)((uint)iVar8 >> 0x10),CONCAT22((short)iVar6,(short)iVar8)));
    uVar14 = CONCAT26((short)((uint)iVar10 >> 0x10),
                      CONCAT24((short)((uint)iVar9 >> 0x10),CONCAT22((short)iVar10,(short)iVar9)));
    uVar11 = pmaddwd(uVar2,DAT_5f9da7c0);
    uVar2 = pmaddwd(uVar2,DAT_5f9da7c8);
    uVar12 = pmaddwd(uVar14,DAT_5f9da7c0);
    uVar14 = pmaddwd(uVar14,DAT_5f9da7c8);
    *unaff_ESI = CONCAT44((int)((longlong)uVar11 >> 0x2f),(int)uVar11 >> 0xf);
    unaff_ESI[0x10] = CONCAT44((int)((longlong)uVar2 >> 0x2f),(int)uVar2 >> 0xf);
    unaff_ESI[8] = CONCAT44((int)((longlong)uVar12 >> 0x2f),(int)uVar12 >> 0xf);
    iVar10 = (int)(CONCAT26((short)((uint)iVar1 >> 0x10),
                            CONCAT24((short)((uint)iVar4 >> 0x10),iVar4)) >> 0x20);
    iVar1 = CONCAT22((short)iVar1,(short)iVar4);
    unaff_ESI[0x18] = CONCAT44((int)((longlong)uVar14 >> 0x2f),(int)uVar14 >> 0xf);
    iVar4 = CONCAT22((short)iVar3,(short)iVar5);
    iVar6 = iVar4 + iVar1;
    iVar3 = (int)(CONCAT26((short)((uint)iVar3 >> 0x10),CONCAT24((short)((uint)iVar5 >> 0x10),iVar4)
                          ) >> 0x20) + iVar10;
    uVar11 = CONCAT44(iVar3,iVar6);
    uVar2 = CONCAT44(iVar10 * 2 - iVar3,iVar1 * 2 - iVar6);
    uVar14 = pmaddwd(uVar7,uVar11);
    uVar12 = pmaddwd(uVar7,uVar2);
    uVar7 = pmaddwd(DAT_5f9da7d8,uVar11);
    uVar2 = pmaddwd(DAT_5f9da7d8,uVar2);
    unaff_ESI[4] = CONCAT44((int)((longlong)uVar14 >> 0x2f),(int)uVar14 >> 0xf);
    unaff_ESI[0x14] = CONCAT44((int)((longlong)uVar12 >> 0x2f),(int)uVar12 >> 0xf);
    unaff_ESI[0xc] = CONCAT44((int)((longlong)uVar7 >> 0x2f),(int)uVar7 >> 0xf);
    unaff_ESI[0x1c] = CONCAT44((int)((longlong)uVar2 >> 0x2f),(int)uVar2 >> 0xf);
    param_1 = param_1 + -1;
    unaff_ESI = unaff_ESI + 1;
  } while (param_1 != 0);
  return;
}


