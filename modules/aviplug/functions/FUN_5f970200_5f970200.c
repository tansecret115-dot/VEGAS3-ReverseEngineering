/* Module: aviplug.dll
   Function: FUN_5f970200
   Address: 5f970200
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f970200(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  
  iVar1 = 8;
  do {
    uVar3 = packssdw(*param_1,*param_1);
    uVar6 = packssdw(param_1[1],param_1[1]);
    uVar3 = pmaddwd(uVar3,DAT_5f9f2e30);
    uVar6 = pmaddwd(uVar6,DAT_5f9f2e38);
    uVar8 = packssdw(param_1[2],param_1[2]);
    uVar9 = packssdw(param_1[3],param_1[3]);
    uVar15 = pmaddwd(DAT_5f9f2e40,uVar8);
    uVar13 = pmaddwd(DAT_5f9f2e48,uVar9);
    uVar11 = pmaddwd(DAT_5f9f2e50,uVar8);
    uVar8 = pmaddwd(DAT_5f9f2e58,uVar9);
    iVar10 = (int)((ulonglong)uVar3 >> 0x20);
    iVar2 = (int)uVar3 - (int)uVar6;
    iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar4 = iVar10 - iVar7;
    iVar5 = (int)uVar6 + (int)uVar3;
    iVar7 = iVar7 + iVar10;
    iVar14 = (int)uVar15 + (int)uVar13;
    iVar16 = (int)((ulonglong)uVar15 >> 0x20) + (int)((ulonglong)uVar13 >> 0x20);
    iVar10 = (int)uVar11 + (int)uVar8;
    iVar12 = (int)((ulonglong)uVar11 >> 0x20) + (int)((ulonglong)uVar8 >> 0x20);
    uVar3 = CONCAT44(iVar16 + iVar7 >> 0xd,iVar14 + iVar5 >> 0xd);
    param_1[3] = CONCAT44(iVar7 - iVar16 >> 0xd,iVar5 - iVar14 >> 0xd);
    uVar6 = pshufw(uVar3,uVar3,0x4e);
    uVar3 = CONCAT44(iVar4 - iVar12 >> 0xd,iVar2 - iVar10 >> 0xd);
    param_1[1] = CONCAT44(iVar12 + iVar4 >> 0xd,iVar10 + iVar2 >> 0xd);
    uVar3 = pshufw(uVar3,uVar3,0x4e);
    *param_1 = uVar6;
    param_1[2] = uVar3;
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


