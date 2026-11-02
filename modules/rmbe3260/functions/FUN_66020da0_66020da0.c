/* Module: rmbe3260.dll
   Function: FUN_66020da0
   Address: 66020da0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_66020da0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_50 [3];
  int local_44 [3];
  int local_38 [3];
  int local_2c [3];
  int local_20 [3];
  int local_14;
  int local_10;
  undefined4 local_c;
  int *local_8;
  
  piVar1 = param_1;
  (**(code **)(*(int *)param_1[0x1e] + 0xc))((int *)param_1[0x1e],&local_14);
  (**(code **)(*(int *)piVar1[0x1e] + 0x14))((int *)piVar1[0x1e],&local_10);
  FUN_6605b650(local_20);
  if (local_10 == 0) {
    if (local_14 != 0) {
      uVar8 = 0xff;
      iVar6 = *(int *)piVar1[0x1e];
      iVar2 = FUN_6605bc10(local_20,0xff);
      (**(code **)(iVar6 + 0x1c))(piVar1[0x1e],iVar2,uVar8);
      FUN_6605bc90(local_20,-1);
    }
  }
  else {
    FUN_6605b650(local_38);
    FUN_6605b650(local_2c);
    FUN_6605b650(local_50);
    FUN_6605b650(local_44);
    uVar8 = 0xff;
    iVar6 = *(int *)piVar1[0x1e];
    iVar2 = FUN_6605bc10(local_50,0xff);
    iVar3 = FUN_6605bc10(local_44,0xff);
    puVar7 = &local_c;
    iVar4 = FUN_6605bc10(local_2c,0xff);
    iVar5 = FUN_6605bc10(local_38,0xff);
    (**(code **)(iVar6 + 0x24))(piVar1[0x1e],iVar5,iVar4,puVar7,iVar3,iVar2,uVar8);
    FUN_6605bc90(local_38,-1);
    FUN_6605bc90(local_2c,-1);
    FUN_6605bc90(local_44,-1);
    FUN_6605bc90(local_50,-1);
    FUN_6605bfd0(local_20,s__s__d__s_6606dce8);
    FUN_6605b770(local_44);
    FUN_6605b770(local_50);
    FUN_6605b770(local_2c);
    FUN_6605b770(local_38);
  }
  local_8 = (int *)0x0;
  iVar6 = (**(code **)(piVar1[8] + 0xc))(piVar1 + 8,&DAT_66064f48,0,&DAT_66064f48,&local_8);
  if (-1 < iVar6) {
    (**(code **)(*local_8 + 0x10))(local_8,local_20[0],*(int *)(local_20[0] + -8) + 1);
    iVar2 = (**(code **)(*(int *)piVar1[99] + 0x28))
                      ((int *)piVar1[99],s_outputname_6606c384,local_8);
    if (iVar2 == 0) {
      iVar6 = -0x7fffbffb;
    }
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
  }
  param_1 = (int *)0x0;
  if ((-1 < iVar6) &&
     (iVar6 = (*(code *)**(undefined4 **)piVar1[0x1f])
                        ((undefined4 *)piVar1[0x1f],&DAT_66065898,&param_1), -1 < iVar6)) {
    if ((piVar1[0x2a] != 0) &&
       ((iVar6 = (**(code **)(*param_1 + 0x20))(param_1,&local_c), -1 < iVar6 &&
        (iVar2 = (**(code **)(*(int *)piVar1[99] + 0x14))
                           ((int *)piVar1[99],s_audiocontent_6606c374,local_c), iVar2 == 0)))) {
      iVar6 = -0x7fffbffb;
    }
    if (piVar1[0x2b] != 0) {
      if (iVar6 < 0) goto LAB_66021017;
      iVar6 = (**(code **)(*param_1 + 0x28))(param_1,&local_c);
      if ((-1 < iVar6) &&
         (iVar2 = (**(code **)(*(int *)piVar1[99] + 0x14))
                            ((int *)piVar1[99],s_videoquality_6606c364,local_c), iVar2 == 0)) {
        iVar6 = -0x7fffbffb;
      }
    }
    if (((-1 < iVar6) && (iVar6 = (**(code **)(*param_1 + 0x30))(param_1,&local_c), -1 < iVar6)) &&
       (iVar2 = (**(code **)(*(int *)piVar1[99] + 0x14))
                          ((int *)piVar1[99],s_playercompatibility_6606dcd4,local_c), iVar2 == 0)) {
      iVar6 = -0x7fffbffb;
    }
  }
LAB_66021017:
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 8))(param_1);
    param_1 = (int *)0x0;
  }
  if ((-1 < iVar6) &&
     (iVar2 = (**(code **)(*(int *)piVar1[99] + 0x14))
                        ((int *)piVar1[99],s_multirate_6606c358,piVar1[0x30]), iVar2 == 0)) {
    iVar6 = -0x7fffbffb;
  }
  FUN_6605b770(local_20);
  return iVar6;
}


