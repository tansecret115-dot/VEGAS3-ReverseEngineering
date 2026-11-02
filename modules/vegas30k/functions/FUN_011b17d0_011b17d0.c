/* Module: vegas30k.dll
   Function: FUN_011b17d0
   Address: 011b17d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_011b17d0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_798;
  int *piStack_794;
  int *piStack_790;
  int *piStack_78c;
  undefined1 *puStack_788;
  undefined4 *puStack_784;
  undefined1 *puStack_780;
  int *piStack_77c;
  int *piStack_778;
  undefined1 *puStack_774;
  undefined1 auStack_760 [4];
  int local_75c;
  undefined1 local_758 [4];
  int aiStack_754 [3];
  int iStack_748;
  undefined4 uStack_744;
  undefined4 uStack_740;
  undefined1 auStack_638 [156];
  undefined4 auStack_59c [129];
  int *piStack_398;
  undefined1 auStack_35c [12];
  undefined4 local_350 [6];
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_28;
  int aiStack_24 [8];
  int *local_4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    local_75c = -1;
    for (uVar1 = *(uint *)(param_1 + 0x9c8); uVar1 != 0; uVar1 = uVar1 >> 1) {
      local_75c = local_75c + 1;
    }
  }
  else {
    local_75c = 0;
  }
  puVar4 = local_350;
  for (iVar2 = 0xd4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_330 = DAT_011ef588;
  puStack_774 = local_758;
  local_338 = DAT_011ef580;
  local_334 = DAT_011ef584;
  piStack_778 = &DAT_011eee10;
  piStack_77c = param_4;
  local_350[0] = 0x350;
  local_32c = DAT_011ef58c;
  local_4 = param_5;
  local_350[1] = 0x802;
  puStack_780 = (undefined1 *)0x11b1883;
  iVar2 = (**(code **)*param_4)();
  if (-1 < iVar2) {
    puStack_780 = auStack_760;
    puStack_788 = auStack_35c;
    puStack_784 = &DAT_011ef500;
    piStack_790 = (int *)0x11b18a7;
    piStack_78c = unaff_EBX;
    iVar2 = (**(code **)(*unaff_EBX + 0xc))();
    if (iVar2 < 0) {
      piStack_790 = param_5;
      piStack_794 = (int *)0x11b18b4;
      (**(code **)(*param_5 + 8))();
      piStack_794 = piStack_778;
      uStack_798 = 0x11b18be;
      (**(code **)(*piStack_778 + 8))();
      return iVar2;
    }
    iVar2 = *param_4;
    puVar4 = auStack_59c;
    for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    piStack_790 = auStack_59c;
    piStack_794 = aiStack_754;
    auStack_59c[0] = 0x230;
    uStack_798 = DAT_011eee8c;
    iVar2 = (**(code **)(iVar2 + 0x28))(param_4,DAT_011eee80,DAT_011eee84,DAT_011eee88);
    if (aiStack_24[0] == -1) {
      puStack_784 = (undefined4 *)0x0;
      puStack_788 = (undefined1 *)0x0;
      aiStack_24[0] = -1;
      while (iVar2 == 0) {
        iVar2 = (**(code **)(*piStack_398 + 0x10))
                          (piStack_398,puStack_788,aiStack_24,auStack_638,0x40);
        if (iVar2 == 0) {
LAB_011b19a3:
          iVar2 = aiStack_24[0];
          puVar4 = (undefined4 *)&stack0xfffff894;
          for (iVar3 = 0x4d; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          uStack_740 = 0;
          iStack_748 = iVar2;
          uStack_744 = 0x7f;
          if (*(int *)(param_1 + 0x10) == 0) {
            uVar7 = *(undefined4 *)(param_1 + 0x160);
            uVar5 = *(undefined4 *)(param_1 + 0x24);
            uVar6 = 0x1f;
          }
          else {
            uVar7 = *(undefined4 *)(param_1 + 0x160);
            uVar5 = *(undefined4 *)(param_1 + 0x24);
            uVar6 = 0x21;
          }
          iVar2 = (**(code **)(param_1 + 0x15c))
                            (uVar5,uVar6,uVar7,piStack_794,&stack0xfffff894,0x134,0x10000,0xffffffff
                             ,0xffffffff,0xffffffff,0xffffffff);
          if ((iVar2 == 0) &&
             ((iVar2 = (**(code **)(*piStack_78c + 0xc))(piStack_78c,aiStack_24[0],&uStack_798),
              -1 < iVar2 ||
              (iVar2 = (**(code **)(*piStack_398 + 0xc))(piStack_398,aiStack_24[0],&uStack_798),
              -1 < iVar2)))) {
            piVar8 = piStack_30;
            iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                              (*(int **)(param_1 + 0x1c),uStack_798,&puStack_774,piStack_34);
            if (-1 < iVar2) {
              piStack_790 = (int *)*piStack_34;
              piStack_78c = (int *)piStack_34[1];
              piStack_794 = piStack_38;
              iVar2 = _SfList_InsertList_16
                                (*(undefined4 *)(param_1 + 0xc6c),0xffffffff,&piStack_794,1);
            }
            (**(code **)(*piVar8 + 8))(piVar8);
          }
        }
        else {
          iVar2 = (**(code **)(*piStack_78c + 0x10))
                            (piStack_78c,puStack_784,aiStack_24,auStack_638,0x40);
          if (iVar2 == 0) {
            puStack_784 = (undefined4 *)((int)puStack_784 + 1);
            goto LAB_011b19a3;
          }
        }
        puStack_788 = puStack_788 + 1;
        param_5 = piStack_28;
      }
    }
    else {
      iVar2 = (**(code **)(*piStack_78c + 0xc))(piStack_78c,aiStack_24[0],&uStack_798);
      if (iVar2 < 0) {
        iVar2 = (**(code **)(*piStack_398 + 0xc))(piStack_398,aiStack_24[0],&uStack_798);
      }
      if (iVar2 == 0) {
        iVar2 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))
                          (*(int **)(param_1 + 0x1c),uStack_798,&puStack_774,piStack_34);
        if (-1 < iVar2) {
          piStack_790 = (int *)*piStack_34;
          piStack_78c = (int *)piStack_34[1];
          piStack_794 = piStack_38;
          _SfList_InsertList_16(*(undefined4 *)(param_1 + 0xc6c),0xffffffff,&piStack_794,1);
        }
        (**(code **)(*piStack_30 + 8))(piStack_30);
      }
    }
    (**(code **)(*param_5 + 8))(param_5);
    (**(code **)(*piStack_794 + 8))(piStack_794);
    iVar2 = 0;
  }
  return iVar2;
}


