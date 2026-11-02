/* Module: rmbe3260.dll
   Function: FUN_66002fa0
   Address: 66002fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66002fa0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  char *pcVar6;
  byte *local_1c [3];
  byte *local_10 [3];
  
  iVar2 = ftol();
  if (*(int *)(*(XPNSlider **)(param_1 + 0x156) + 0xc0) != iVar2) {
    XPNSlider::SetSliderPos(*(XPNSlider **)(param_1 + 0x156),iVar2);
  }
  iVar2 = ftol();
  FUN_6605b650(local_1c);
  if (iVar2 % 10 == 0) {
    pcVar6 = &DAT_6606c1b0;
  }
  else {
    pcVar6 = &DAT_6606c1b8;
  }
  FUN_6605bfd0(local_1c,pcVar6);
  FUN_6605b650(local_10);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x152) + 0x120))();
  iVar2 = **(int **)(param_1 + 0x152);
  iVar3 = FUN_6605bc10(local_10,iVar3 + 1);
  (**(code **)(iVar2 + 0x118))(iVar3);
  FUN_6605bc90(local_10,-1);
  pbVar4 = local_1c[0];
  do {
    bVar1 = *local_10[0];
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_660030c4:
      iVar2 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_660030c9;
    }
    if (bVar1 == 0) break;
    bVar1 = local_10[0][1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_660030c4;
    local_10[0] = local_10[0] + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar2 = 0;
LAB_660030c9:
  if (iVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x152) + 0x11c))(local_1c[0]);
  }
  FUN_6605b770((int *)local_10);
  FUN_6605b770((int *)local_1c);
  return;
}


