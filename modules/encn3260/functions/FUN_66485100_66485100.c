/* Module: encn3260.dll
   Function: FUN_66485100
   Address: 66485100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66485100(void *this,undefined2 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char local_194 [256];
  char local_94 [32];
  char local_74 [32];
  char local_54 [4];
  int local_50 [3];
  int local_44;
  int local_40;
  void *local_3c;
  int *local_38;
  int local_34;
  undefined1 local_2e [2];
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined4 *local_18;
  uint local_14;
  int *local_10;
  uint local_c;
  int *local_8;
  
  (**(code **)(**(int **)((int)this + 0x1a0) + 4))();
  piVar1 = operator_new(0x40);
  pcVar8 = (char *)0x0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_664bd560(piVar1);
    FUN_664bb2c0(piVar1 + 0xd);
    *piVar1 = (int)&PTR_FUN_664de040;
  }
  local_1c = piVar1;
  if ((*(int *)(*(int *)((int)this + 0x70) + 0x28) == 0) &&
     (iVar6 = *(int *)(*(int *)((int)this + 0x70) + 0x30), iVar6 != 0)) {
    sprintf(local_194,s____128s__sd____128s_664e2454,iVar6 + 0x21,iVar6 + 0x4a);
    FUN_664bd620(piVar1,s_RealChallenge2_664e2444,local_194,0);
  }
  pvVar2 = operator_new(0x28);
  if (pvVar2 == (void *)0x0) {
    local_18 = (undefined4 *)0x0;
  }
  else {
    local_18 = FUN_664be3d0(pvVar2,s_Transport_664e2438);
  }
  local_28 = *(int *)((int)this + 0x10e);
  local_24 = (int)this + 0x10a;
  local_20 = 0;
  if (local_28 != 0) {
    if (local_28 != 0) goto LAB_664851d0;
    piVar1 = (int *)0x0;
    do {
      local_c = 0;
      uVar9 = CONCAT22((short)((uint)pcVar8 >> 0x10),*param_1);
      local_14 = uVar9;
      local_10 = piVar1;
      switch(*piVar1) {
      case 1:
      case 2:
      case 4:
        if (local_20 == 0) {
          local_20 = 1;
          FUN_664bd620(local_1c,s_RDTFeatureLevel_664e2424,&DAT_664e2434,0);
        }
        if (param_3 == 0) {
          puVar5 = FUN_66483790(piVar1,0);
          if (puVar5 != (undefined4 *)0x0) {
            piVar3 = (int *)(**(code **)(*(int *)*puVar5 + 0x40))();
            (**(code **)(*piVar3 + 0x20))(piVar3,&local_c);
            uVar9 = local_14;
LAB_6648558a:
            FUN_66483680(puVar5,uVar9);
          }
        }
        else {
          pvVar2 = operator_new(0xce);
          if (pvVar2 == (void *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = FUN_664905a0(pvVar2,*(undefined4 *)((int)this + 0x1aa),
                                  *(undefined4 *)((int)this + 0x14e),*piVar1,0);
          }
          (**(code **)(*piVar3 + 0x10))(*(undefined4 *)((int)this + 0x1ae));
          (**(code **)(*piVar3 + 4))(piVar3);
          local_3c = *(void **)((int)this + 0x142);
          local_44 = -(uint)(*(int *)((int)local_3c + 8) != 0);
          local_38 = (int *)0x0;
          local_34 = 0;
          local_40 = local_44;
          if (local_44 != 0) {
            FUN_664bbeb0(local_3c,&local_40,&local_34,(int *)&local_38);
          }
          local_8 = local_38;
          if (*(int *)((int)this + 0x1aa) != 0) {
            local_10 = (int *)0x0;
            iVar6 = (**(code **)*local_38)(local_38,&DAT_664dc7e0,&local_10);
            if (iVar6 == 0) {
              (**(code **)(*local_10 + 0xc))(local_10,3,1000000);
            }
            (**(code **)(*local_10 + 8))(local_10);
          }
          (**(code **)(*local_8 + 0x20))(local_8,&local_c);
          if (this == (void *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)((int)this + 0x34);
          }
          iVar6 = FUN_664909c0(piVar3,*(undefined4 **)((int)this + 4),local_8,piVar4);
          if (iVar6 != 0) {
            (**(code **)(*piVar3 + 8))(piVar3);
            uVar7 = 0x800400d0;
            goto LAB_6648580f;
          }
          FUN_66483840(piVar1,piVar3,0,local_14,(short)local_c);
        }
        break;
      case 3:
      case 5:
        if (param_3 == 0) {
          puVar5 = FUN_66483790(piVar1,0);
          if (puVar5 != (undefined4 *)0x0) goto LAB_6648558a;
        }
        else {
          pvVar2 = operator_new(0x8d);
          if (pvVar2 == (void *)0x0) {
            piVar3 = (int *)0x0;
          }
          else {
            piVar3 = FUN_664934d0(pvVar2,*(undefined4 *)((int)this + 0x14e));
          }
          (**(code **)(*piVar3 + 4))(piVar3);
          if (this == (void *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)((int)this + 0x34);
          }
          FUN_66493740(piVar3,*(undefined4 **)((int)this + 4),*(int **)((int)this + 0xc),
                       (char)piVar1[2],piVar4);
          FUN_66483840(piVar1,piVar3,0,local_14,(short)local_c);
        }
        break;
      case 7:
        pvVar2 = operator_new(0x9f);
        if (pvVar2 == (void *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = FUN_6648ebf0(pvVar2,*(undefined4 *)((int)this + 0x14e));
        }
        (**(code **)(*piVar1 + 4))(piVar1);
        uVar9 = local_14 & 0xffff;
        puVar5 = FUN_664bbe00(*(void **)((int)this + 0x142),uVar9);
        local_8 = (int *)*puVar5;
        (**(code **)(*local_8 + 0x20))(local_8,&local_c);
        puVar5 = FUN_664bbe00(*(void **)((int)this + 0x146),uVar9);
        local_2c = (int *)*puVar5;
        (**(code **)(*local_2c + 0x20))(local_2c,local_2e);
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)((int)this + 0x34);
        }
        iVar6 = FUN_6648ecd0(piVar1,*(undefined4 **)((int)this + 4),local_8,piVar3);
        if (iVar6 != 0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          return 0x800400d0;
        }
        pvVar2 = operator_new(0x9a);
        if (pvVar2 == (void *)0x0) {
          local_8 = (int *)0x0;
        }
        else {
          local_8 = FUN_66490090(pvVar2,*(undefined4 *)((int)this + 0x14e));
        }
        (**(code **)(*local_8 + 4))(local_8);
        uVar9 = local_14;
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)((int)this + 0x34);
        }
        FUN_66490140(local_8,*(undefined4 **)((int)this + 4),local_2c,piVar1,piVar3);
        FUN_6648ebc0(piVar1,local_8);
        FUN_66483840(local_10,piVar1,local_8,uVar9,(short)local_c);
        piVar1 = local_10;
        break;
      case 9:
        pvVar2 = operator_new(0x9a);
        if (pvVar2 == (void *)0x0) {
          piVar1 = (int *)0x0;
        }
        else {
          piVar1 = FUN_6648ee10(pvVar2,*(undefined4 *)((int)this + 0x14e));
        }
        (**(code **)(*piVar1 + 4))(piVar1);
        if (this == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)((int)this + 0x34);
        }
        FUN_6648eee0(piVar1,*(undefined4 **)((int)this + 4),*(int **)((int)this + 0xc),piVar3);
        pvVar2 = operator_new(0x95);
        if (pvVar2 == (void *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = FUN_66490320(pvVar2,*(undefined4 *)((int)this + 0x14e));
        }
        (**(code **)(*piVar3 + 4))(piVar3);
        if (this == (void *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)((int)this + 0x34);
        }
        FUN_66490140(piVar3,*(undefined4 **)((int)this + 4),*(int **)((int)this + 0xc),piVar1,piVar4
                    );
        FUN_6648ebc0(piVar1,piVar3);
        FUN_66483840(local_10,piVar1,piVar3,local_14,(short)local_c);
        piVar1 = local_10;
      }
      pcVar8 = FUN_6648c400(*piVar1);
      switch(*piVar1) {
      case 1:
      case 2:
      case 4:
        pvVar2 = operator_new(0x1c);
        if (pvVar2 == (void *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)FUN_664be1c0(pvVar2,pcVar8);
        }
        sprintf(local_54,&DAT_664e2420,local_c & 0xffff);
        FUN_664be210(pcVar8,s_client_port_664e2414,local_54);
        if (*(int *)((int)this + 0x14e) == 0) {
LAB_664856dd:
          pcVar10 = &DAT_664e23e0;
          break;
        }
        FUN_664be210(pcVar8,&DAT_664e2404,s_record_664e240c);
        if ((*(int *)((int)this + 0x1a6) != -1) && (*piVar1 == 2)) {
          sprintf(local_94,&DAT_664e2400,*(int *)((int)this + 0x1a6));
          pcVar10 = local_94;
          pcVar11 = s_buffer_depth_664e23f0;
          goto LAB_664856e7;
        }
        goto LAB_664856ee;
      case 3:
      case 5:
      case 9:
        pvVar2 = operator_new(0x1c);
        if (pvVar2 == (void *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)FUN_664be1c0(pvVar2,pcVar8);
        }
        if (*(int *)((int)this + 0x14e) == 0) goto LAB_664856dd;
        pcVar10 = s_record_664e240c;
        break;
      default:
        goto switchD_664855a8_caseD_6;
      case 7:
        pvVar2 = operator_new(0x1c);
        if (pvVar2 == (void *)0x0) {
          pcVar8 = (char *)0x0;
        }
        else {
          pcVar8 = (char *)FUN_664be1c0(pvVar2,pcVar8);
        }
        sprintf(local_74,s__u__u_664e23e8,local_c & 0xffff,(local_c & 0xffff) + 1);
        FUN_664be210(pcVar8,s_client_port_664e2414,local_74);
        if (*(int *)((int)this + 0x14e) == 0) goto LAB_664856dd;
        pcVar10 = s_record_664e240c;
      }
      pcVar11 = &DAT_664e2404;
LAB_664856e7:
      FUN_664be210(pcVar8,pcVar11,pcVar10);
LAB_664856ee:
      FUN_664be450(local_18,pcVar8);
switchD_664855a8_caseD_6:
      FUN_664bab40(&local_28);
      piVar1 = local_1c;
      if (local_28 == 0) break;
LAB_664851d0:
      puVar5 = (undefined4 *)FUN_664bab80(local_28);
      piVar1 = (int *)*puVar5;
    } while( true );
  }
  FUN_664bd5f0(piVar1,local_18,0);
  if (param_3 == 0) {
    pcVar8 = *(char **)((int)this + 0xe6);
    pcVar10 = s_Session_664e23cc;
  }
  else {
    pcVar8 = *(char **)((int)this + 0xe6);
    if (*(int *)(pcVar8 + -8) == 0) goto LAB_66485751;
    pcVar10 = s_If_Match_664e23d4;
  }
  FUN_664bd620(piVar1,pcVar10,pcVar8,0);
LAB_66485751:
  if (*(int *)(*(int *)((int)this + 0xa8) + -8) < 1) {
    if (*(int *)(*(char **)((int)this + 0xb4) + -8) < 1) {
      pcVar8 = operator_new(*(int *)(*(int *)((int)this + 0x9c) + -8) + 0xf);
      sprintf(pcVar8,s__s__s_664e23c4,*(undefined4 *)((int)this + 0x9c),*(undefined4 *)(param_1 + 3)
             );
      FUN_664bb5e0(piVar1 + 0xd,pcVar8);
      operator_delete(pcVar8);
    }
    else {
      FUN_664bb5e0(piVar1 + 0xd,*(char **)((int)this + 0xb4));
    }
  }
  else {
    puVar5 = FUN_664bb670(local_50,(undefined4 *)((int)this + 0xa8),(undefined4 *)(param_1 + 3));
    FUN_664bb5e0(piVar1 + 0xd,(char *)*puVar5);
    FUN_664bb3e0(local_50);
  }
  if (param_2 != (int *)0x0) {
    FUN_6648c9d0(piVar1,param_2);
  }
  iVar6 = FUN_6648bad0(*(void **)((int)this + 0x70),(int)this);
  uVar7 = FUN_6648c6d0(this,piVar1,iVar6);
LAB_6648580f:
  (**(code **)(**(int **)((int)this + 0x1a0) + 8))();
  return uVar7;
}


