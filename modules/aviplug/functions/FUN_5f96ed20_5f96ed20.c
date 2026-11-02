/* Module: aviplug.dll
   Function: FUN_5f96ed20
   Address: 5f96ed20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f96ed20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar9;
  undefined8 uVar8;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar14;
  undefined8 uVar13;
  undefined8 uVar15;
  
  iVar1 = 4;
  do {
    uVar8 = DAT_5f9da7d0;
    uVar3 = packssdw(*param_2,param_2[4]);
    uVar12 = packssdw(param_2[0x18],param_2[0x1c]);
    iVar10 = (int)uVar12 + (int)uVar3;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    iVar14 = (int)((ulonglong)uVar12 >> 0x20) + iVar4;
    uVar12 = packssdw(param_2[8],param_2[0xc]);
    iVar2 = (int)uVar3 * 2 - iVar10;
    iVar4 = iVar4 * 2 - iVar14;
    uVar3 = packssdw(param_2[0x10],param_2[0x14]);
    iVar7 = (int)uVar3 + (int)uVar12;
    iVar11 = (int)((ulonglong)uVar12 >> 0x20);
    iVar9 = (int)((ulonglong)uVar3 >> 0x20) + iVar11;
    iVar5 = (int)uVar12 * 2 - iVar7;
    iVar6 = iVar11 * 2 - iVar9;
    iVar7 = iVar7 + iVar10;
    iVar9 = iVar9 + iVar14;
    iVar11 = iVar10 * 2 - iVar7;
    iVar10 = iVar14 * 2 - iVar9;
    uVar3 = CONCAT26((short)((uint)iVar7 >> 0x10),
                     CONCAT24((short)((uint)iVar9 >> 0x10),CONCAT22((short)iVar7,(short)iVar9)));
    uVar15 = CONCAT26((short)((uint)iVar11 >> 0x10),
                      CONCAT24((short)((uint)iVar10 >> 0x10),CONCAT22((short)iVar11,(short)iVar10)))
    ;
    uVar12 = pmaddwd(uVar3,DAT_5f9da7c0);
    uVar3 = pmaddwd(uVar3,DAT_5f9da7c8);
    uVar13 = pmaddwd(uVar15,DAT_5f9da7c0);
    uVar15 = pmaddwd(uVar15,DAT_5f9da7c8);
    *param_1 = CONCAT44((int)((longlong)uVar12 >> 0x2f),(int)uVar12 >> 0xf);
    param_1[0x10] = CONCAT44((int)((longlong)uVar3 >> 0x2f),(int)uVar3 >> 0xf);
    param_1[8] = CONCAT44((int)((longlong)uVar13 >> 0x2f),(int)uVar13 >> 0xf);
    iVar11 = (int)(CONCAT26((short)((uint)iVar2 >> 0x10),
                            CONCAT24((short)((uint)iVar5 >> 0x10),iVar5)) >> 0x20);
    iVar2 = CONCAT22((short)iVar2,(short)iVar5);
    param_1[0x18] = CONCAT44((int)((longlong)uVar15 >> 0x2f),(int)uVar15 >> 0xf);
    iVar5 = CONCAT22((short)iVar4,(short)iVar6);
    iVar7 = iVar5 + iVar2;
    iVar4 = (int)(CONCAT26((short)((uint)iVar4 >> 0x10),CONCAT24((short)((uint)iVar6 >> 0x10),iVar5)
                          ) >> 0x20) + iVar11;
    uVar12 = CONCAT44(iVar4,iVar7);
    uVar3 = CONCAT44(iVar11 * 2 - iVar4,iVar2 * 2 - iVar7);
    uVar15 = pmaddwd(uVar8,uVar12);
    uVar13 = pmaddwd(uVar8,uVar3);
    uVar8 = pmaddwd(DAT_5f9da7d8,uVar12);
    param_2 = param_2 + 1;
    uVar3 = pmaddwd(DAT_5f9da7d8,uVar3);
    param_1[4] = CONCAT44((int)((longlong)uVar15 >> 0x2f),(int)uVar15 >> 0xf);
    param_1[0x14] = CONCAT44((int)((longlong)uVar13 >> 0x2f),(int)uVar13 >> 0xf);
    param_1[0xc] = CONCAT44((int)((longlong)uVar8 >> 0x2f),(int)uVar8 >> 0xf);
    param_1[0x1c] = CONCAT44((int)((longlong)uVar3 >> 0x2f),(int)uVar3 >> 0xf);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return;
}


