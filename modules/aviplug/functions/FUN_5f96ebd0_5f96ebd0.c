/* Module: aviplug.dll
   Function: FUN_5f96ebd0
   Address: 5f96ebd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96ebd0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar8;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar9;
  int iVar11;
  undefined8 uVar10;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar18;
  undefined8 uVar16;
  undefined8 uVar17;
  
  iVar1 = 4;
  do {
    uVar3 = packssdw(*param_2,param_2[4]);
    uVar15 = packssdw(param_2[0x1c],param_2[0x18]);
    iVar14 = (int)uVar15 + (int)uVar3;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20);
    iVar18 = (int)((ulonglong)uVar15 >> 0x20) + iVar4;
    uVar15 = packssdw(param_2[0xc],param_2[8]);
    iVar2 = (int)uVar3 * 2 - iVar14;
    iVar4 = iVar4 * 2 - iVar18;
    uVar3 = packssdw(param_2[0x10],param_2[0x14]);
    iVar9 = (int)uVar3 + (int)uVar15;
    iVar8 = (int)((ulonglong)uVar15 >> 0x20);
    iVar11 = (int)((ulonglong)uVar3 >> 0x20) + iVar8;
    iVar5 = (int)uVar15 * 2 - iVar9;
    iVar8 = iVar8 * 2 - iVar11;
    iVar9 = iVar9 + iVar14;
    iVar11 = iVar11 + iVar18;
    iVar14 = iVar14 * 2 - iVar9;
    iVar18 = iVar18 * 2 - iVar11;
    uVar3 = CONCAT26((short)((uint)iVar9 >> 0x10),
                     CONCAT24((short)((uint)iVar11 >> 0x10),CONCAT22((short)iVar9,(short)iVar11)));
    uVar15 = pmaddwd(DAT_5f9da7c0,uVar3);
    uVar6 = CONCAT26((short)((uint)iVar14 >> 0x10),
                     CONCAT24((short)((uint)iVar18 >> 0x10),CONCAT22((short)iVar14,(short)iVar18)));
    uVar3 = pmaddwd(uVar3,DAT_5f9da7c8);
    uVar7 = CONCAT26((short)((uint)iVar2 >> 0x10),
                     CONCAT24((short)((uint)iVar4 >> 0x10),CONCAT22((short)iVar2,(short)iVar4)));
    uVar13 = pmaddwd(DAT_5f9da7d0,uVar6);
    uVar16 = pmaddwd(uVar6,DAT_5f9da7d8);
    *param_1 = CONCAT44((int)((longlong)uVar15 >> 0x2f),(int)uVar15 >> 0xf);
    param_1[0x10] = CONCAT44((int)((longlong)uVar3 >> 0x2f),(int)uVar3 >> 0xf);
    uVar15 = DAT_5f9da7f8;
    uVar3 = DAT_5f9da7f0;
    uVar6 = CONCAT26((short)((uint)iVar5 >> 0x10),
                     CONCAT24((short)((uint)iVar8 >> 0x10),CONCAT22((short)iVar5,(short)iVar8)));
    uVar10 = pmaddwd(DAT_5f9da7e0,uVar7);
    uVar12 = pmaddwd(DAT_5f9da7e8,uVar6);
    param_1[8] = CONCAT44((int)((longlong)uVar13 >> 0x2f),(int)uVar13 >> 0xf);
    uVar13 = pmaddwd(uVar3,uVar7);
    param_1[0x18] = CONCAT44((int)((longlong)uVar16 >> 0x2f),(int)uVar16 >> 0xf);
    uVar15 = pmaddwd(uVar15,uVar6);
    uVar16 = pmaddwd(DAT_5f9da800,uVar7);
    uVar17 = pmaddwd(DAT_5f9da808,uVar6);
    uVar3 = pmaddwd(uVar7,_DAT_5f9da810);
    uVar7 = pmaddwd(uVar6,_DAT_5f9da818);
    param_1[4] = CONCAT44((int)((ulonglong)uVar12 >> 0x20) + (int)((ulonglong)uVar10 >> 0x20) >> 0xf
                          ,(int)uVar12 + (int)uVar10 >> 0xf);
    param_1[0xc] = CONCAT44((int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20) >>
                            0xf,(int)uVar15 + (int)uVar13 >> 0xf);
    param_2 = param_2 + 1;
    param_1[0x14] =
         CONCAT44((int)((ulonglong)uVar17 >> 0x20) + (int)((ulonglong)uVar16 >> 0x20) >> 0xf,
                  (int)uVar17 + (int)uVar16 >> 0xf);
    param_1[0x1c] =
         CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar3 >> 0x20) >> 0xf,
                  (int)uVar7 + (int)uVar3 >> 0xf);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 1;
  } while (iVar1 != 0);
  return;
}


