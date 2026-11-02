/* Module: wmfplug2.dll
   Function: FUN_00443350
   Address: 00443350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00443350(undefined4 param_1,int param_2,int *param_3)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 *puStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int *piStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  int *piStack_b0;
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *piStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  uint *puStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  int *piStack_60;
  undefined4 *puStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (0x1000000 < (*(uint *)(param_2 + 4) & 0xff000000)) {
    return 0x8004e00b;
  }
  uStack_14 = 0;
  uStack_18 = 4;
  iStack_1c = param_2;
  piStack_20 = param_3;
  uStack_24 = 0x443386;
  (**(code **)(*param_3 + 0x10))();
  uStack_24 = 0;
  uStack_28 = 4;
  piStack_30 = param_3;
  uStack_34 = 0x443390;
  iStack_2c = param_2 + 4;
  (**(code **)(*param_3 + 0x10))();
  uStack_34 = 0;
  iStack_3c = param_2 + 0x14;
  uStack_38 = 0x208;
  piStack_40 = param_3;
  uStack_44 = 0x4433a0;
  (**(code **)(*param_3 + 0x10))();
  uStack_44 = 0;
  iStack_4c = param_2 + 0x21c;
  uStack_48 = 0x208;
  piStack_50 = param_3;
  uStack_54 = 0x4433b3;
  (**(code **)(*param_3 + 0x10))();
  uStack_38 = 0;
  if (*(int *)(param_2 + 0x424) == 0) {
    uStack_54 = 0;
    puStack_5c = &uStack_38;
    uStack_58 = 4;
    piStack_60 = param_3;
    uStack_64 = 0x4434cf;
    (**(code **)(*param_3 + 0x10))();
    goto LAB_004434cf;
  }
  uStack_54 = 0;
  puStack_5c = &uStack_38;
  uStack_58 = 4;
  piStack_60 = param_3;
  uStack_38 = 1;
  uStack_64 = 0x4433dc;
  (**(code **)(*param_3 + 0x10))();
  uStack_6c = *(undefined4 *)(param_2 + 0x424);
  uStack_64 = 0;
  uStack_68 = 0x12;
  piStack_70 = param_3;
  uStack_74 = 0x4433ec;
  (**(code **)(*param_3 + 0x10))();
  uStack_74 = 0;
  iStack_7c = *(int *)(param_2 + 0x424) + 0x12;
  uStack_78 = 4;
  piStack_80 = param_3;
  uStack_84 = 0x4433ff;
  (**(code **)(*param_3 + 0x10))();
  psVar1 = *(short **)(*(int *)(param_2 + 0x424) + 0x16);
  if (psVar1 == (short *)0x0) {
    uStack_84 = 0;
    puStack_8c = &uStack_64;
    uStack_88 = 4;
    piStack_90 = param_3;
    uStack_64 = 0;
    uStack_94 = 0x443480;
    (**(code **)(*param_3 + 0x10))();
  }
  else {
    if ((*psVar1 == 3) || (*psVar1 == 1)) {
LAB_00443440:
      uStack_64 = 0x12;
    }
    else {
      uStack_64 = (ushort)psVar1[8] + 0x12;
      if (uStack_64 == 0) {
        return 0x8000ffff;
      }
      if (uStack_64 < 0x13) goto LAB_00443440;
    }
    uStack_84 = 0;
    puStack_8c = &uStack_64;
    uStack_88 = 4;
    piStack_90 = param_3;
    uStack_94 = 0x443456;
    (**(code **)(*param_3 + 0x10))();
    uStack_94 = 0;
    uStack_98 = uStack_74;
    uStack_9c = *(undefined4 *)(*(int *)(param_2 + 0x424) + 0x16);
    piStack_a0 = param_3;
    uStack_a4 = 0x44346c;
    (**(code **)(*param_3 + 0x10))();
  }
  uStack_a4 = 0;
  iStack_ac = *(int *)(param_2 + 0x424) + 0x1a;
  uStack_a8 = 0x20;
  piStack_b0 = param_3;
  iStack_b4 = 0x443493;
  (**(code **)(*param_3 + 0x10))();
  iStack_b4 = 0;
  iStack_bc = *(int *)(param_2 + 0x424) + 0x3a;
  uStack_b8 = 4;
  piStack_c0 = param_3;
  uStack_c4 = 0x4434a6;
  (**(code **)(*param_3 + 0x10))();
  iStack_c8 = *(int *)(*(int *)(param_2 + 0x424) + 0x3a);
  if (iStack_c8 != 0) {
    puStack_cc = *(undefined4 **)(*(int *)(param_2 + 0x424) + 0x3e);
    uStack_c4 = 0;
    piStack_d0 = param_3;
    uStack_d4 = 0x4434bf;
    (**(code **)(*param_3 + 0x10))();
  }
LAB_004434cf:
  uStack_a8 = 0;
  if (*(int *)(param_2 + 0x428) == 0) {
    uStack_c4 = 0;
    puStack_cc = &uStack_a8;
    iStack_c8 = 4;
    piStack_d0 = param_3;
    uStack_d4 = 0x443640;
    (**(code **)(*param_3 + 0x10))();
    return 0;
  }
  uStack_c4 = 0;
  puStack_cc = &uStack_a8;
  iStack_c8 = 4;
  piStack_d0 = param_3;
  uStack_a8 = 1;
  uStack_d4 = 0x4434f3;
  (**(code **)(*param_3 + 0x10))();
  piVar2 = (int *)**(int **)(param_2 + 0x428);
  if (piVar2 != (int *)0x0) {
    if (piVar2[4] == 3) {
      iStack_b4 = 0xc;
    }
    else {
      iStack_b4 = piVar2[8] << 2;
    }
    iStack_b4 = *piVar2 + iStack_b4;
    if (iStack_b4 != 0) {
      uStack_d4 = 0;
      piStack_dc = &iStack_b4;
      uStack_d8 = 4;
      piStack_e0 = param_3;
      uStack_e4 = 0x443540;
      (**(code **)(*param_3 + 0x10))();
      uStack_e4 = 0;
      uStack_e8 = uStack_c4;
      uStack_ec = **(undefined4 **)(param_2 + 0x428);
      piStack_f0 = param_3;
      iStack_f4 = 0x443555;
      (**(code **)(*param_3 + 0x10))();
      iStack_f4 = 0;
      (**(code **)(*param_3 + 0x10))(param_3,*(int *)(param_2 + 0x428) + 4,4);
      uVar4 = 0;
      (**(code **)(*param_3 + 0x10))(param_3,*(int *)(param_2 + 0x428) + 8,0x40,0);
      piVar2 = *(int **)(*(int *)(param_2 + 0x428) + 0x48);
      if (piVar2[4] == 3) {
        iStack_f4 = 0xc;
      }
      else {
        iStack_f4 = piVar2[8] << 2;
      }
      iStack_f4 = iStack_f4 + *piVar2;
      if (iStack_f4 != 0) {
        (**(code **)(*param_3 + 0x10))(param_3,&iStack_f4,4,0);
        (**(code **)(*param_3 + 0x10))
                  (param_3,*(undefined4 *)(*(int *)(param_2 + 0x428) + 0x48),uVar4,0);
        (**(code **)(*param_3 + 0x10))(param_3,*(int *)(param_2 + 0x428) + 0x4c,4,0);
        (**(code **)(*param_3 + 0x10))(param_3,*(int *)(param_2 + 0x428) + 0x50,0x40,0);
        (**(code **)(*param_3 + 0x10))(param_3,*(int *)(param_2 + 0x428) + 0x90,4,0);
        iVar3 = *(int *)(*(int *)(param_2 + 0x428) + 0x90);
        if (iVar3 == 0) {
          return 0;
        }
        (**(code **)(*param_3 + 0x10))
                  (param_3,*(undefined4 *)(*(int *)(param_2 + 0x428) + 0x94),iVar3,0);
        return 0;
      }
      return 0x8000ffff;
    }
  }
  return 0x8000ffff;
}


