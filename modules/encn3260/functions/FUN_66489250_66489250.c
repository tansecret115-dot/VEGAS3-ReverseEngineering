/* Module: encn3260.dll
   Function: FUN_66489250
   Address: 66489250
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66489250(void *this,int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  int *piVar8;
  int *local_10;
  int *local_c;
  void *local_8;
  
  if (*(int *)((int)this + 0x14e) == 0) {
    return 0x80004005;
  }
  pbVar6 = &DAT_664e2648;
  pbVar5 = (byte *)param_1[0xd];
  pbVar2 = pbVar5;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_664892a7:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      goto LAB_664892ac;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_664892a7;
    pbVar2 = pbVar2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_664892ac:
  local_8 = this;
  if (iVar3 == 0) {
    FUN_664bd820((int *)&param_1);
    piVar8 = *(int **)((int)local_8 + 0x68);
    if (param_1 == (int *)0x0) {
      uVar4 = (**(code **)(*piVar8 + 0x14))(piVar8,0x80004005,0);
    }
    else {
      uVar4 = (**(code **)(*piVar8 + 0x14))(piVar8,0x800400ce,param_1);
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      return uVar4;
    }
  }
  else {
    pbVar6 = &DAT_664e2644;
    pbVar2 = pbVar5;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_6648932c:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_66489331;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_6648932c;
      pbVar2 = pbVar2 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_66489331:
    if (iVar3 == 0) {
      uVar4 = (**(code **)(**(int **)((int)this + 0x68) + 0x1c))
                        (*(int **)((int)this + 0x68),0x80040086,0);
      return uVar4;
    }
    pbVar2 = &DAT_664e2538;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_6648937b:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_66489380;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_6648937b;
      pbVar5 = pbVar5 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_66489380:
    if (iVar3 != 0) {
      uVar4 = (**(code **)(**(int **)((int)this + 0x68) + 0x1c))
                        (*(int **)((int)this + 0x68),0x80004005,0);
      return uVar4;
    }
    local_c = (int *)0x0;
    FUN_6648cb20(this,(int)param_1,&local_c);
    if (local_c != (int *)0x0) {
      param_1 = (int *)0x0;
      iVar3 = (**(code **)*local_c)(local_c,&DAT_664dd5a0,&param_1);
      if (iVar3 == 0) {
        (**(code **)(**(int **)((int)this + 0x84) + 0x18))(*(int **)((int)this + 0x84),param_1);
      }
      if (param_1 != (int *)0x0) {
        (**(code **)(*param_1 + 8))(param_1);
      }
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
    }
    local_10 = (int *)0x0;
    iVar3 = (**(code **)**(undefined4 **)((int)this + 0x84))
                      (*(undefined4 **)((int)this + 0x84),&DAT_664dcf90,&local_10);
    if (iVar3 == 0) {
      uVar4 = 0;
      piVar8 = local_10;
    }
    else {
      piVar8 = (int *)0x0;
      uVar4 = 0x80004005;
    }
    uVar4 = (**(code **)(**(int **)((int)this + 0x68) + 0x1c))
                      (*(int **)((int)this + 0x68),uVar4,piVar8);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10);
    }
  }
  return uVar4;
}


