/* Module: aviplug.dll
   Function: FUN_5f9714a0
   Address: 5f9714a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f9714a0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  do {
    uVar2 = packssdw(*param_1,*param_1);
    uVar4 = packssdw(param_1[1],param_1[1]);
    uVar2 = pmaddwd(uVar2,DAT_5f9da9b8);
    uVar4 = pmaddwd(uVar4,DAT_5f9da9c0);
    uVar5 = packssdw(param_1[2],param_1[2]);
    uVar7 = packssdw(param_1[3],param_1[3]);
    uVar5 = pmaddwd(uVar5,DAT_5f9da9c8);
    iVar1 = (int)uVar2 + (int)uVar4;
    iVar3 = (int)((ulonglong)uVar2 >> 0x20) + (int)((ulonglong)uVar4 >> 0x20);
    uVar4 = pmaddwd(uVar7,DAT_5f9da9d0);
    iVar6 = (int)((ulonglong)uVar5 >> 0x20);
    iVar8 = (int)((ulonglong)uVar4 >> 0x20);
    uVar2 = CONCAT44(iVar3 + iVar6 + iVar8 >> 0xe,iVar1 + (int)uVar5 + (int)uVar4 >> 0xe);
    param_2 = param_2 + -1;
    uVar2 = pshufw(uVar2,uVar2,0x4e);
    uVar2 = packssdw(uVar2,CONCAT44((iVar3 - iVar6) - iVar8 >> 0xe,
                                    (iVar1 - (int)uVar5) - (int)uVar4 >> 0xe));
    *param_1 = uVar2;
    param_1 = param_1 + 4;
  } while (param_2 != 0);
  return;
}


