/* Module: encn3260.dll
   Function: FUN_66488a80
   Address: 66488a80
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_66488a80(void *this,int *param_1,int param_2)

{
  byte bVar1;
  ushort *puVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  int *this_00;
  undefined4 *puVar7;
  undefined2 extraout_var;
  undefined4 *puVar8;
  int *piVar9;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 uVar10;
  undefined2 extraout_var_02;
  byte *pbVar11;
  void *pvVar12;
  ushort uVar13;
  int iVar14;
  bool bVar15;
  short sVar16;
  int local_34 [3];
  byte *local_28 [3];
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  ushort *local_c;
  void *local_8;
  
  local_10 = 0;
  local_14 = 0;
  local_c = (ushort *)0x0;
  local_8 = this;
  if (param_1[0x13] == 0x191) {
    FUN_664bd820((int *)&param_1);
    piVar9 = *(int **)((int)this + 0x68);
    if (param_1 == (int *)0x0) {
      iVar4 = (**(code **)(*piVar9 + 0x14))(piVar9,0x80004005,0);
    }
    else {
      iVar4 = (**(code **)(*piVar9 + 0x14))(piVar9,0x800400ce,param_1);
    }
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 8))(param_1);
      return iVar4;
    }
  }
  else {
    if ((*(int *)(*(int *)((int)this + 0xb4) + -8) < 1) &&
       (pcVar5 = strrchr(*(char **)(param_2 + 0x34),0x2f), pcVar5 != (char *)0x0)) {
      local_1c = *(int *)((int)this + 0xfa);
      local_18 = (int)this + 0xf6;
      if (local_1c != 0) {
        if (local_1c != 0) goto LAB_66488b3b;
        local_c = (ushort *)0x0;
        do {
          pbVar6 = *(byte **)(local_c + 3);
          pbVar11 = (byte *)(pcVar5 + 1);
          do {
            bVar1 = *pbVar6;
            bVar15 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_66488b72:
              iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_66488b77;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar15 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_66488b72;
            pbVar6 = pbVar6 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
LAB_66488b77:
          if (iVar4 == 0) {
            local_14 = CONCAT22(local_14._2_2_,*local_c);
            this = local_8;
            break;
          }
          FUN_664bab40(&local_1c);
          this = local_8;
          if (local_1c == 0) break;
LAB_66488b3b:
          puVar7 = (undefined4 *)FUN_664bab80(local_1c);
          local_c = (ushort *)*puVar7;
        } while( true );
      }
    }
    piVar9 = param_1;
    *(short *)((int)this + 0x62) = *(short *)((int)this + 0x62) + 1;
    if (local_c == (ushort *)0x0) {
      iVar4 = (**(code **)(**(int **)((int)this + 0x68) + 0x20))
                        (*(int **)((int)this + 0x68),0x800400d0);
      return iVar4;
    }
    pbVar11 = &DAT_664e2538;
    pbVar6 = (byte *)param_1[0xd];
    do {
      bVar1 = *pbVar6;
      bVar15 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_66488beb:
        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_66488bf0;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar15 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_66488beb;
      pbVar6 = pbVar6 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_66488bf0:
    if (iVar4 != 0) {
      iVar4 = (**(code **)(**(int **)((int)this + 0x68) + 0x20))
                        (*(int **)((int)this + 0x68),0x800400d0);
      return iVar4;
    }
    FUN_664bd6d0(param_1,local_28,s_Session_664e23cc);
    pbVar6 = &DAT_664f05c4;
    do {
      bVar1 = *local_28[0];
      bVar15 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_66488c47:
        iVar4 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
        goto LAB_66488c4c;
      }
      if (bVar1 == 0) break;
      bVar1 = local_28[0][1];
      bVar15 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_66488c47;
      local_28[0] = local_28[0] + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_66488c4c:
    if (iVar4 == 0) {
      local_10 = -0x7ffbff2f;
    }
    else {
      FUN_664bb570((void *)((int)this + 0xe6),(int *)local_28);
    }
    FUN_664bb2c0(local_34);
    iVar4 = FUN_664bd670(piVar9,s_Transport_664e2438);
    if (iVar4 != 0) {
      iVar4 = FUN_664be4b0(iVar4);
      pvVar12 = local_8;
      this_00 = FUN_6648a1b0(local_8,iVar4);
      if (this_00 == (int *)0x0) {
        FUN_664bb3e0(local_34);
        FUN_664bb3e0((int *)local_28);
        return -0x7fffbffb;
      }
      if ((*this_00 == 9) || (*this_00 == 7)) {
        *(undefined4 *)(*(int *)((int)pvVar12 + 0x70) + 0x2c) = 1;
        *(undefined4 *)(*(int *)((int)pvVar12 + 0x70) + 0x28) = 1;
      }
      else {
        FUN_664890b0(pvVar12,piVar9);
        if (*(int *)(*(int *)((int)pvVar12 + 0x70) + 0x2c) == 0) {
          (**(code **)(**(int **)((int)pvVar12 + 0x68) + 0x4c))
                    (*(int **)((int)pvVar12 + 0x68),0,0,s_The_Server_contacted_is_not_vali_664e2610)
          ;
          FUN_664bb3e0(local_34);
          FUN_664bb3e0((int *)local_28);
          return -0x7ffbff40;
        }
      }
      puVar7 = FUN_66483790(this_00,(short)local_14);
      param_2 = 0;
      iVar4 = (**(code **)(**(int **)((int)pvVar12 + 0xc) + 0x28))
                        (*(int **)((int)pvVar12 + 0xc),&param_2);
      puVar2 = local_c;
      if (iVar4 != 0) {
        local_10 = -0x7ffbff30;
      }
      param_1 = (int *)puVar7[1];
      piVar9 = (int *)*puVar7;
      local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)((int)this_00 + 6));
      local_c[9] = *(ushort *)(puVar7 + 2);
      switch(*this_00) {
      case 1:
      case 2:
      case 4:
        (**(code **)(*piVar9 + 0x28))(local_c,0xffffffff);
        puVar8 = FUN_664bbe00(*(void **)((int)local_8 + 0x132),(uint)*local_c);
        pvVar12 = local_8;
        *puVar8 = piVar9;
        puVar7 = FUN_664bbe00(*(void **)((int)local_8 + 0x136),(uint)*(ushort *)(puVar7 + 2));
        *puVar7 = piVar9;
        FUN_66490ac0(piVar9,param_2,(short)local_14);
        FUN_6648d520(piVar9,*(char **)((int)pvVar12 + 0xe6));
        if (*this_00 == 1) {
          *(undefined2 *)((int)pvVar12 + 0x1a4) = 1;
          FUN_6648a0f0((undefined4 *)((int)pvVar12 + 0x146));
        }
        else {
          *(undefined2 *)((int)local_8 + 0x1a4) = 2;
          FUN_6648a0f0((undefined4 *)((int)local_8 + 0x146));
        }
        break;
      case 3:
      case 5:
        (**(code **)(*piVar9 + 0x28))(local_c,0xffffffff);
        pvVar12 = local_8;
        puVar7 = FUN_664bbe00(*(void **)((int)local_8 + 0x132),(uint)*puVar2);
        *puVar7 = piVar9;
        if (*(int *)((int)pvVar12 + 0x14e) == 0) {
          FUN_6648bd20(*(void **)((int)pvVar12 + 0x70),(int)pvVar12,(char)this_00[2]);
          uVar10 = extraout_var_01;
        }
        else {
          FUN_664944a0(piVar9,(char)this_00[2]);
          uVar10 = extraout_var_00;
        }
        FUN_6648a8b0(pvVar12,piVar9,CONCAT22(uVar10,(short)(char)this_00[2]));
        FUN_6648d520(piVar9,*(char **)((int)pvVar12 + 0xe6));
        *(undefined2 *)((int)pvVar12 + 0x1a4) = 3;
        break;
      default:
        local_10 = -0x7ffbff30;
        break;
      case 7:
        (**(code **)(*piVar9 + 0x28))(local_c,0xffffffff);
        pvVar12 = local_8;
        puVar8 = FUN_664bbe00(*(void **)((int)local_8 + 0x132),(uint)*puVar2);
        *puVar8 = piVar9;
        puVar8 = FUN_664bbe00(*(void **)((int)pvVar12 + 0x136),(uint)*(ushort *)(puVar7 + 2));
        *puVar8 = piVar9;
        puVar7 = FUN_664bbe00(*(void **)((int)pvVar12 + 0x136),*(ushort *)(puVar7 + 2) + 1);
        *puVar7 = param_1;
        sVar16 = (short)local_14;
        FUN_6648ed10(piVar9,param_2,sVar16);
        FUN_66490190(param_1,param_2,sVar16 + 1);
        FUN_6648d520(piVar9,*(char **)((int)pvVar12 + 0xe6));
        *(undefined2 *)((int)pvVar12 + 0x1a4) = 2;
        break;
      case 9:
        (**(code **)(*piVar9 + 0x28))(local_c,0xffffffff);
        pvVar12 = local_8;
        puVar7 = FUN_664bbe00(*(void **)((int)local_8 + 0x132),(uint)*puVar2);
        *puVar7 = piVar9;
        FUN_6648bd20(*(void **)((int)pvVar12 + 0x70),(int)pvVar12,(char)this_00[2]);
        FUN_6648bd20(*(void **)((int)pvVar12 + 0x70),(int)pvVar12,(char)this_00[2] + '\x01');
        *(char *)((int)piVar9 + 0x99) = (char)this_00[2];
        *(char *)(param_1 + 0x25) = (char)this_00[2] + '\x01';
        FUN_6648d520(piVar9,*(char **)((int)pvVar12 + 0xe6));
        FUN_6648a8b0(pvVar12,piVar9,CONCAT22(extraout_var_02,(short)(char)this_00[2]));
        FUN_6648a8b0(pvVar12,param_1,CONCAT22(extraout_var,(short)(char)this_00[2]) + 1);
        *(undefined2 *)((int)pvVar12 + 0x1a4) = 3;
      }
    }
    pvVar12 = local_8;
    if (local_8 == (void *)0xffffff0a) {
      uVar13 = 0;
    }
    else {
      uVar13 = (ushort)*(undefined4 *)((int)local_8 + 0x106);
    }
    if ((*(short *)((int)local_8 + 0x62) == 1) && (1 < uVar13)) {
      FUN_66485090(local_8);
    }
    pvVar3 = local_8;
    if (*(ushort *)((int)pvVar12 + 0x62) != uVar13) {
      FUN_664bb3e0(local_34);
      FUN_664bb3e0((int *)local_28);
      return local_10;
    }
    local_1c = *(int *)((int)pvVar12 + 0x10e);
    local_18 = (int)pvVar12 + 0x10a;
    if (local_1c != 0) {
      if (local_1c != 0) goto LAB_66488fe9;
      iVar14 = 0;
      while( true ) {
        puVar7 = (undefined4 *)FUN_66483800(iVar14);
        while ((puVar7 != (undefined4 *)0x0 && (*(uint *)((int)pvVar3 + 0x1a6) != 0xffffffff))) {
          iVar4 = FUN_6648e180((void *)*puVar7,*(uint *)((int)pvVar3 + 0x1a6));
          if (iVar4 != 0) goto LAB_66489048;
          puVar7 = (undefined4 *)FUN_66483820(iVar14);
        }
        FUN_664bab40(&local_1c);
        pvVar12 = local_8;
        if (local_1c == 0) break;
LAB_66488fe9:
        piVar9 = (int *)FUN_664bab80(local_1c);
        iVar14 = *piVar9;
      }
    }
    iVar4 = (**(code **)(**(int **)((int)pvVar12 + 0x68) + 0x20))
                      (*(int **)((int)pvVar12 + 0x68),local_10);
LAB_66489048:
    FUN_664bb3e0(local_34);
    FUN_664bb3e0((int *)local_28);
  }
  return iVar4;
}


