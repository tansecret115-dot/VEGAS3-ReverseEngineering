/* Module: aviplug.dll
   Function: FUN_5f971210
   Address: 5f971210
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971210(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar1 = 8;
  do {
    uVar3 = packssdw(*param_1,*param_1);
    uVar5 = packssdw(param_1[1],param_1[1]);
    uVar3 = pmaddwd(uVar3,DAT_5f9da9b8);
    uVar5 = pmaddwd(uVar5,DAT_5f9da9c0);
    uVar6 = packssdw(param_1[2],param_1[2]);
    uVar8 = packssdw(param_1[3],param_1[3]);
    uVar6 = pmaddwd(uVar6,DAT_5f9da9c8);
    iVar2 = (int)uVar3 + (int)uVar5;
    iVar4 = (int)((ulonglong)uVar3 >> 0x20) + (int)((ulonglong)uVar5 >> 0x20);
    uVar5 = pmaddwd(uVar8,DAT_5f9da9d0);
    iVar7 = (int)((ulonglong)uVar6 >> 0x20);
    iVar9 = (int)((ulonglong)uVar5 >> 0x20);
    uVar3 = CONCAT44(iVar4 + iVar7 + iVar9 >> 0xd,iVar2 + (int)uVar6 + (int)uVar5 >> 0xd);
    iVar1 = iVar1 + -1;
    uVar3 = pshufw(uVar3,uVar3,0x4e);
    *param_1 = uVar3;
    param_1[1] = CONCAT44((iVar4 - iVar7) - iVar9 >> 0xd,(iVar2 - (int)uVar6) - (int)uVar5 >> 0xd);
    param_1 = param_1 + 4;
  } while (iVar1 != 0);
  return;
}


