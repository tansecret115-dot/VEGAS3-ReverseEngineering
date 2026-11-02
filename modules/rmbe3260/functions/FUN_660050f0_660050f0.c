/* Module: rmbe3260.dll
   Function: FUN_660050f0
   Address: 660050f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660050f0(int param_1)

{
  byte bVar1;
  CPNRadioBtn *pCVar2;
  undefined4 uVar3;
  CPNRadioGroup *this;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  byte *local_10 [3];
  
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNRadioBtn *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNRadioBtn::CPNRadioBtn(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  pCVar2 = operator_new(0xc0);
  if (pCVar2 == (CPNRadioBtn *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CPNRadioBtn::CPNRadioBtn(pCVar2);
  }
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  this = operator_new(0x20);
  if (this == (CPNRadioGroup *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = CPNRadioGroup::CPNRadioGroup(this);
  }
  *(int *)(param_1 + 0x10c) = iVar4;
  if ((((*(int **)(param_1 + 0x104) != (int *)0x0) && (*(int *)(param_1 + 0x110) != 0)) &&
      (*(int *)(param_1 + 0x108) != 0)) && (iVar4 != 0)) {
    (**(code **)(**(int **)(param_1 + 0x104) + 0xb8))(0x465,param_1);
    (**(code **)(**(int **)(param_1 + 0x108) + 0xb8))(0x466,param_1);
    CPNRadioGroup::AddRadio(*(CPNRadioGroup **)(param_1 + 0x10c),*(CPNRadioBtn **)(param_1 + 0x104))
    ;
    CPNRadioGroup::AddRadio(*(CPNRadioGroup **)(param_1 + 0x10c),*(CPNRadioBtn **)(param_1 + 0x108))
    ;
    FUN_6605b650(local_10);
    uVar3 = 0xff;
    iVar4 = **(int **)(param_1 + 0x110);
    iVar6 = 0;
    iVar5 = FUN_6605bc10(local_10,0x100);
    iVar4 = (**(code **)(iVar4 + 0x14))(*(undefined4 *)(param_1 + 0x110),iVar5,uVar3);
    if (-1 < iVar4) {
      pbVar7 = &DAT_6606c29c;
      do {
        bVar1 = *local_10[0];
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_66005235:
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_6600523a;
        }
        if (bVar1 == 0) break;
        bVar1 = local_10[0][1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_66005235;
        local_10[0] = local_10[0] + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_6600523a:
      if (iVar4 == 0) {
        iVar6 = 1;
      }
    }
    (**(code **)(**(int **)(param_1 + 0x108) + 0x130))(iVar6);
    (**(code **)(**(int **)(param_1 + 0x104) + 0x130))(iVar6 == 0);
    FUN_6605b770((int *)local_10);
  }
  return;
}


