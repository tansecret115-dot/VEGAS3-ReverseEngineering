/* Module: aviplug.dll
   Function: FUN_5f96ea40
   Address: 5f96ea40
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96ea40(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar7;
  undefined8 uVar6;
  int iVar8;
  int iVar11;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar12;
  int iVar14;
  undefined8 uVar13;
  undefined8 uVar15;
  undefined8 uVar16;
  
  iVar2 = 8;
  do {
    iVar1 = (int)*param_1;
    iVar4 = (int)((ulonglong)*param_1 >> 0x20);
    iVar12 = (int)param_1[3] + iVar4;
    iVar14 = (int)((ulonglong)param_1[3] >> 0x20) + iVar1;
    iVar5 = (int)param_1[1];
    iVar8 = (int)((ulonglong)param_1[2] >> 0x20) + iVar5;
    iVar7 = (int)((ulonglong)param_1[1] >> 0x20);
    iVar11 = (int)param_1[2] + iVar7;
    uVar3 = CONCAT44(iVar1 * 2 - iVar14,iVar4 * 2 - iVar12);
    uVar6 = CONCAT44(iVar7 * 2 - iVar11,iVar5 * 2 - iVar8);
    iVar8 = iVar8 + iVar12;
    iVar11 = iVar11 + iVar14;
    uVar9 = CONCAT44(iVar11,iVar8);
    uVar13 = CONCAT44(iVar14 * 2 - iVar11,iVar12 * 2 - iVar8);
    uVar9 = packssdw(uVar9,uVar9);
    uVar10 = pmaddwd(uVar9,_DAT_5f9da760);
    uVar9 = packssdw(uVar13,uVar13);
    uVar13 = pmaddwd(uVar9,_DAT_5f9da768);
    uVar9 = packssdw(uVar6,uVar3);
    uVar3 = packssdw(uVar3,uVar6);
    uVar16 = pmaddwd(DAT_5f9da770,uVar9);
    uVar15 = pmaddwd(DAT_5f9da778,uVar3);
    uVar6 = pmaddwd(uVar9,_DAT_5f9da780);
    uVar3 = pmaddwd(uVar3,_DAT_5f9da788);
    *param_1 = CONCAT44((int)((longlong)uVar10 >> 0x31),(int)uVar10 >> 0x11);
    param_1[1] = CONCAT44((int)((longlong)uVar13 >> 0x31),(int)uVar13 >> 0x11);
    param_1[2] = CONCAT44((int)((ulonglong)uVar16 >> 0x20) + (int)((ulonglong)uVar15 >> 0x20) >>
                          0x11,(int)uVar16 + (int)uVar15 >> 0x11);
    param_1[3] = CONCAT44((int)((ulonglong)uVar6 >> 0x20) + (int)((ulonglong)uVar3 >> 0x20) >> 0x11,
                          (int)uVar6 + (int)uVar3 >> 0x11);
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 4;
  } while (iVar2 != 0);
  return;
}


