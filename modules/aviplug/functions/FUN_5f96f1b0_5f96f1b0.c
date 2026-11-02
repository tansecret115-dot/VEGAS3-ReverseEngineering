/* Module: aviplug.dll
   Function: FUN_5f96f1b0
   Address: 5f96f1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f96f1b0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar10;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar11;
  int iVar13;
  undefined8 uVar12;
  undefined8 uVar14;
  undefined8 uVar15;
  
  iVar1 = 0xf0;
  do {
    uVar2 = pshufw(*param_1,*param_1,0x4e);
    uVar7 = pshufw(param_1[2],param_1[2],0x4e);
    iVar11 = (int)param_1[3] + (int)uVar2;
    iVar3 = (int)((ulonglong)uVar2 >> 0x20);
    iVar13 = (int)((ulonglong)param_1[3] >> 0x20) + iVar3;
    iVar4 = (int)param_1[1];
    iVar6 = (int)uVar7 + iVar4;
    iVar5 = (int)((ulonglong)param_1[1] >> 0x20);
    iVar10 = (int)((ulonglong)uVar7 >> 0x20) + iVar5;
    uVar2 = CONCAT44(iVar3 * 2 - iVar13,(int)uVar2 * 2 - iVar11);
    uVar7 = CONCAT44(iVar5 * 2 - iVar10,iVar4 * 2 - iVar6);
    iVar6 = iVar6 + iVar11;
    iVar10 = iVar10 + iVar13;
    uVar8 = CONCAT44(iVar10,iVar6);
    uVar12 = CONCAT44(iVar13 * 2 - iVar10,iVar11 * 2 - iVar6);
    uVar8 = packssdw(uVar8,uVar8);
    uVar9 = pmaddwd(uVar8,_DAT_5f9da760);
    uVar8 = packssdw(uVar12,uVar12);
    uVar12 = pmaddwd(uVar8,_DAT_5f9da768);
    uVar8 = packssdw(uVar7,uVar2);
    uVar2 = packssdw(uVar2,uVar7);
    uVar15 = pmaddwd(DAT_5f9da770,uVar8);
    uVar14 = pmaddwd(DAT_5f9da778,uVar2);
    uVar7 = pmaddwd(uVar8,_DAT_5f9da780);
    uVar2 = pmaddwd(uVar2,_DAT_5f9da788);
    *param_1 = CONCAT44((int)((longlong)uVar9 >> 0x31),(int)uVar9 >> 0x11);
    param_1[1] = CONCAT44((int)((longlong)uVar12 >> 0x31),(int)uVar12 >> 0x11);
    param_1[2] = CONCAT44((int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar14 >> 0x20) >>
                          0x11,(int)uVar15 + (int)uVar14 >> 0x11);
    param_1[3] = CONCAT44((int)((ulonglong)uVar7 >> 0x20) + (int)((ulonglong)uVar2 >> 0x20) >> 0x11,
                          (int)uVar7 + (int)uVar2 >> 0x11);
    iVar1 = iVar1 + -1;
    param_1 = param_1 + 4;
  } while (iVar1 != 0);
  return;
}


