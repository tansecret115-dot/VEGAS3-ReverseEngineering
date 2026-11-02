/* Module: encn3260.dll
   Function: FUN_664848e0
   Address: 664848e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_664848e0(void *this,byte *param_1,int *param_2)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  byte **ppbVar9;
  int local_54 [3];
  int local_48 [3];
  int local_3c [3];
  char *local_30 [3];
  uint local_24;
  void *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  byte *local_8;
  
  local_20 = this;
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  local_c = operator_new(0x40);
  if (local_c == (int *)0x0) {
    local_c = (int *)0x0;
  }
  else {
    FUN_664bd560(local_c);
    FUN_664bb2c0(local_c + 0xd);
    *local_c = (int)&PTR_FUN_664de010;
  }
  FUN_664bb2c0(local_3c);
  FUN_664d0530(local_3c,param_1,local_3c);
  FUN_664bbb00((undefined4 *)((int)this + 0x9c),s_rtsp____s__u__s_664e2364);
  FUN_664bb5e0(local_c + 0xd,*(char **)((int)this + 0x9c));
  local_14 = operator_new(0x6c);
  if (local_14 == (int *)0x0) {
    local_14 = (int *)0x0;
  }
  else {
    *local_14 = (int)&PTR_LAB_664ddfd0;
    local_14[1] = 0;
    FUN_664bdbb0(local_14 + 2,10);
    FUN_664bdbb0(local_14 + 9,10);
    FUN_664bdbb0(local_14 + 0x10,10);
    local_14[0x17] = 0;
    local_14[0x18] = 0;
    local_14[0x19] = 0;
    local_14[0x1a] = 0;
    *local_14 = (int)&PTR_FUN_664ddf90;
  }
  piVar8 = local_14;
  (**(code **)(*local_14 + 4))(local_14);
  if (*(int *)((int)this + 0x18e) != 0) {
    FUN_664bb450(local_48,PTR_s_com_real_retain_entity_for_setup_664de1d0);
    ppbVar9 = &param_1;
    param_1 = (byte *)0x0;
    pcVar2 = (char *)FUN_664bb8a0(local_48,0);
    FUN_664bb0e0(pcVar2,ppbVar9);
    (**(code **)(*piVar8 + 0x2c))(piVar8,s_Require_664e235c,param_1);
    if (param_1 != (byte *)0x0) {
      (**(code **)(*(int *)param_1 + 8))(param_1);
      param_1 = (byte *)0x0;
    }
    FUN_664bb3e0(local_48);
  }
  FUN_664bcee0(piVar8,param_2);
  FUN_664bb2c0(local_30);
  local_10 = (int *)0x0;
  local_8 = (byte *)0x0;
  iVar3 = (**(code **)**(undefined4 **)((int)this + 4))
                    (*(undefined4 **)((int)this + 4),&DAT_664dc5f0,&local_10);
  if ((-1 < iVar3) &&
     ((**(code **)(*local_10 + 0xc))(local_10,&DAT_664dcd30,&local_8), local_10 != (int *)0x0)) {
    (**(code **)(*local_10 + 8))(local_10);
    local_10 = (int *)0x0;
  }
  if (local_8 == (byte *)0x0) {
    param_1 = (byte *)0x0;
    (**(code **)**(undefined4 **)((int)this + 4))
              (*(undefined4 **)((int)this + 4),&DAT_664dcd20,&param_1);
    if (param_1 == (byte *)0x0) goto LAB_66484c50;
    local_1c = (int *)0x0;
    local_18 = (int *)0x0;
    param_2 = (int *)0x0;
    bVar1 = true;
    local_24 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
    uVar7 = 0;
    pbVar5 = param_1;
    if (local_24 != 0) {
      do {
        iVar3 = (**(code **)(*(int *)param_1 + 0x10))(param_1,uVar7,&local_1c);
        if (-1 < iVar3) {
          iVar3 = (**(code **)*local_1c)(local_1c,&DAT_664dd0b0,&local_18);
          if ((-1 < iVar3) && (local_18 != (int *)0x0)) {
            (**(code **)(*local_18 + 0xc))(local_18,&param_2);
            if (bVar1) {
              FUN_664bb810(local_30,(char *)param_2);
              bVar1 = false;
            }
            else {
              puVar4 = FUN_664bb450(local_48,(char *)param_2);
              puVar4 = FUN_664bb720(local_54,&DAT_664e2358,puVar4);
              FUN_664bb870(local_30,puVar4);
              FUN_664bb3e0(local_54);
              FUN_664bb3e0(local_48);
            }
            (**(code **)(*local_18 + 8))(local_18);
          }
          (**(code **)(*local_1c + 8))(local_1c);
        }
        uVar7 = uVar7 + 1;
        pbVar5 = param_1;
      } while (uVar7 < local_24);
    }
  }
  else {
    local_18 = (int *)0x0;
    param_2 = (int *)0x0;
    param_1 = (byte *)0x0;
    bVar1 = true;
    (**(code **)(*(int *)local_8 + 0xc))(local_8,&DAT_664dd0b0);
    local_1c = (int *)(**(code **)(*(int *)local_8 + 0x10))(local_8);
    piVar8 = (int *)0x0;
    pbVar5 = local_8;
    if (local_1c != (int *)0x0) {
      do {
        iVar3 = (**(code **)(*(int *)local_8 + 0x14))(local_8,piVar8,&local_18);
        if (-1 < iVar3) {
          iVar3 = (**(code **)*local_18)(local_18,&DAT_664dd0b0,&param_2);
          if ((-1 < iVar3) && (param_2 != (int *)0x0)) {
            (**(code **)(*param_2 + 0xc))(param_2,&param_1);
            if (bVar1) {
              FUN_664bb810(local_30,(char *)param_1);
              bVar1 = false;
            }
            else {
              puVar4 = FUN_664bb450(local_54,(char *)param_1);
              puVar4 = FUN_664bb720(local_48,&DAT_664e2358,puVar4);
              FUN_664bb870(local_30,puVar4);
              FUN_664bb3e0(local_48);
              FUN_664bb3e0(local_54);
            }
            (**(code **)(*param_2 + 8))(param_2);
          }
          (**(code **)(*local_18 + 8))(local_18);
        }
        piVar8 = (int *)((int)piVar8 + 1);
        pbVar5 = local_8;
      } while (piVar8 < local_1c);
    }
  }
  (**(code **)(*(int *)pbVar5 + 8))(pbVar5);
  piVar8 = local_14;
  this = local_20;
LAB_66484c50:
  FUN_664bd620(local_c,s_Accept_664e2350,local_30[0],0);
  FUN_6648c9d0(local_c,piVar8);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  iVar3 = FUN_6648bad0(*(void **)((int)this + 0x70),(int)this);
  uVar6 = FUN_6648c6d0(this,local_c,iVar3);
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  FUN_664bb3e0((int *)local_30);
  FUN_664bb3e0(local_3c);
  return uVar6;
}


