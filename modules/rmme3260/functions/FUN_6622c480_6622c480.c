/* Module: rmme3260.dll
   Function: FUN_6622c480
   Address: 6622c480
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6622c480(void *param_1)

{
  byte bVar1;
  int *piVar2;
  short sVar3;
  ushort uVar4;
  byte *pbVar5;
  undefined2 extraout_var;
  int iVar6;
  undefined2 extraout_var_00;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined4 *puVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  bool bVar15;
  int local_40 [3];
  int local_34 [3];
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x1bc) == 0) {
    *(undefined4 *)((int)param_1 + 0x1bc) = 1;
  }
  switch(*(undefined4 *)((int)param_1 + 0x1bc)) {
  case 1:
    *(undefined4 *)((int)param_1 + 0x1c8) = *(undefined4 *)((int)param_1 + 0x18c);
    if (*(int *)((int)param_1 + 0x10) < *(int *)((int)param_1 + 0x94)) {
      piVar12 = *(int **)(*(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x10) * 4);
      if (piVar12 == (int *)0x0) {
        local_8 = -0x7fffbffb;
      }
      else {
        iVar7 = (**(code **)(*piVar12 + 0x10))();
        iVar6 = *(int *)((int)param_1 + 0x1c8);
        *(undefined4 *)((int)piVar12 + 0x16) = 0;
        piVar12[3] = iVar6 - iVar7;
        *(undefined4 *)((int)param_1 + 0x1bc) = 2;
        FUN_6622c480(param_1);
      }
    }
    else {
      local_8 = -0x7fffbffb;
    }
    break;
  case 2:
    piVar12 = *(int **)(*(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x1cc) * 4);
    if (piVar12 == (int *)0x0) {
      local_8 = -0x7fffbffb;
      break;
    }
    iVar6 = (**(code **)(*piVar12 + 0x10))();
    if (iVar6 != 0) {
      local_8 = (**(code **)(**(int **)((int)param_1 + 0x184) + 0x20))
                          (*(int **)((int)param_1 + 0x184),iVar6,0);
      break;
    }
    uVar14 = *(int *)((int)param_1 + 0x1cc) + 1;
    *(uint *)((int)param_1 + 0x1cc) = uVar14;
    if (*(uint *)((int)param_1 + 0x10) < uVar14) {
      *(undefined4 *)((int)param_1 + 0x1bc) = 4;
      FUN_6622c480(param_1);
      break;
    }
    goto LAB_6622c96f;
  case 3:
    local_28 = *(int **)(*(int *)((int)param_1 + 0x90) + *(int *)((int)param_1 + 0x1cc) * 4);
    if (local_28 == (int *)0x0) {
      local_8 = -0x7fffbffb;
    }
    else {
      local_14 = (int *)(**(code **)(*local_28 + 0xc))();
      pvVar10 = operator_new((uint)local_14);
      if (pvVar10 == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        puVar11 = operator_new(0x28);
        if (puVar11 == (undefined4 *)0x0) {
          piVar12 = (int *)0x0;
        }
        else {
          piVar12 = (int *)FUN_662522d0(puVar11);
        }
        (**(code **)(*piVar12 + 4))(piVar12);
        (**(code **)(*local_28 + 0x18))(pvVar10,local_14);
        (**(code **)(*piVar12 + 0x10))(piVar12,pvVar10,local_14);
        operator_delete(pvVar10);
        local_8 = (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                            (*(int **)((int)param_1 + 0x184),piVar12);
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 8))(piVar12);
        }
      }
    }
    break;
  case 4:
    *(undefined4 *)((int)param_1 + 0x1d0) = *(undefined4 *)((int)param_1 + 0x1c8);
    *(undefined2 *)((int)param_1 + 0x1d8) = *(undefined2 *)((int)param_1 + 0x3a);
    if (*(int *)((int)param_1 + 0xb4) < (int)(uint)*(ushort *)((int)param_1 + 0x36)) {
      local_8 = -0x7fffbffb;
    }
    else {
      (**(code **)(**(int **)((int)param_1 + 0x184) + 0x20))
                (*(int **)((int)param_1 + 0x184),*(undefined4 *)((int)param_1 + 0x1c8),0);
    }
    break;
  case 5:
    local_14 = (int *)0x0;
    pvVar10 = *(void **)(*(int *)((int)param_1 + 0xb0) + *(int *)((int)param_1 + 0x1da) * 4);
    if (pvVar10 != (void *)0x0) {
      if (*(ushort *)((int)param_1 + 0x1d8) < 2) {
        *(undefined4 *)((int)param_1 + 0x1d0) = 0;
      }
      else {
        FUN_66219f50(pvVar10,&local_14);
        *(int *)((int)param_1 + 0x1d0) = *(int *)((int)param_1 + 0x1d0) + (int)local_14;
      }
      FUN_66219f40(pvVar10,*(undefined4 *)((int)param_1 + 0x1d0));
      *(short *)((int)param_1 + 0x1d8) = *(short *)((int)param_1 + 0x1d8) + -1;
      *(void **)((int)param_1 + 0x1d4) = pvVar10;
      *(undefined4 *)((int)param_1 + 0x1bc) = 6;
      FUN_6622c480(param_1);
      break;
    }
    uVar14 = *(int *)((int)param_1 + 0x1da) + 1;
    *(uint *)((int)param_1 + 0x1da) = uVar14;
    if (*(ushort *)((int)param_1 + 0x36) <= uVar14) {
      *(undefined4 *)((int)param_1 + 0x1bc) = 7;
      FUN_6622c480(param_1);
      break;
    }
    goto LAB_6622c96f;
  case 6:
    FUN_6621a170(*(void **)((int)param_1 + 0x1d4),*(int **)((int)param_1 + 0x184),
                 *(int *)((int)param_1 + 0x1c4) - *(int *)((int)param_1 + 0x1c0),param_1);
    break;
  case 7:
    if (*(int *)((int)param_1 + 0x94) < 1) {
      local_8 = -0x7fffbffb;
      break;
    }
    if ((int *)**(int **)((int)param_1 + 0x90) == (int *)0x0) {
      local_8 = -0x7fffbffb;
      break;
    }
    uVar9 = (**(code **)(*(int *)**(int **)((int)param_1 + 0x90) + 0x10))();
    *(undefined4 *)((int)param_1 + 0x10c) = uVar9;
    *(undefined4 *)((int)param_1 + 0xfc) = *(undefined4 *)((int)param_1 + 0x14a);
    *(undefined4 *)((int)param_1 + 0xf4) = *(undefined4 *)((int)param_1 + 0x14e);
    *(undefined4 *)((int)param_1 + 0x108) = *(undefined4 *)((int)param_1 + 0x1c8);
    *(undefined4 *)((int)param_1 + 0x100) = *(undefined4 *)((int)param_1 + 0x158);
    piVar12 = (int *)((int)param_1 + 0xda);
    goto LAB_6622c7b4;
  case 8:
    local_14 = (int *)(**(code **)(*(int *)((int)param_1 + 0xda) + 0xc))();
    pvVar10 = operator_new((uint)local_14);
    if (pvVar10 == (void *)0x0) {
      local_8 = -0x7ff8fff2;
    }
    else {
      puVar11 = operator_new(0x28);
      if (puVar11 == (undefined4 *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = (int *)FUN_662522d0(puVar11);
      }
      (**(code **)(*piVar12 + 4))(piVar12);
      (**(code **)(*(int *)((int)param_1 + 0xda) + 0x18))(pvVar10,local_14);
      (**(code **)(*piVar12 + 0x10))(piVar12,pvVar10,local_14);
      operator_delete(pvVar10);
      (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                (*(int **)((int)param_1 + 0x184),piVar12);
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 8))(piVar12);
      }
    }
    break;
  case 9:
    local_c = 0;
    if (*(short *)((int)param_1 + 0x38) != 0) {
      do {
        piVar12 = *(int **)(*(int *)((int)param_1 + 0x3c) + local_c * 4);
        local_28 = piVar12;
        if (piVar12 == (int *)0x0) goto LAB_6622cc83;
        pcVar13 = s_application_x_pn_multirate_image_6626f818;
        puVar11 = FUN_66218240(piVar12,local_40);
        pbVar5 = (byte *)*puVar11;
        do {
          bVar1 = *pbVar5;
          bVar15 = bVar1 < (byte)*pcVar13;
          if (bVar1 != *pcVar13) {
LAB_6622c8bf:
            iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_6622c8c4;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar15 = bVar1 < (byte)pcVar13[1];
          if (bVar1 != pcVar13[1]) goto LAB_6622c8bf;
          pbVar5 = pbVar5 + 2;
          pcVar13 = pcVar13 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_6622c8c4:
        if (iVar6 == 0) {
LAB_6622c91a:
          bVar15 = true;
        }
        else {
          pcVar13 = s_application_x_pn_imagemap_6626f0c4;
          puVar11 = FUN_66218240(piVar12,local_34);
          pbVar5 = (byte *)*puVar11;
          do {
            bVar1 = *pbVar5;
            bVar15 = bVar1 < (byte)*pcVar13;
            if (bVar1 != *pcVar13) {
LAB_6622c902:
              iVar6 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
              goto LAB_6622c907;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar15 = bVar1 < (byte)pcVar13[1];
            if (bVar1 != pcVar13[1]) goto LAB_6622c902;
            pbVar5 = pbVar5 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar1 != 0);
          iVar6 = 0;
LAB_6622c907:
          FUN_66250210(local_34);
          bVar15 = false;
          if (iVar6 == 0) goto LAB_6622c91a;
        }
        FUN_66250210(local_40);
        if (bVar15) {
          FUN_66218020(local_28,*(undefined4 *)((int)param_1 + 0x158));
        }
        local_c = local_c + 1;
      } while (local_c < *(ushort *)((int)param_1 + 0x38));
    }
    if (*(int *)((int)param_1 + 0x1a) < (int)(uint)*(ushort *)((int)param_1 + 0x14)) {
      local_8 = -0x7fffbffb;
      break;
    }
    *(undefined4 *)((int)param_1 + 0x1bc) = 10;
LAB_6622c96f:
    FUN_6622c480(param_1);
    break;
  case 10:
    piVar12 = *(int **)(*(int *)((int)param_1 + 0x16) + *(int *)((int)param_1 + 0x1de) * 4);
    if (piVar12 == (int *)0x0) {
      local_8 = -0x7fffbffb;
      break;
    }
LAB_6622c7b4:
    iVar6 = **(int **)((int)param_1 + 0x184);
    uVar9 = (**(code **)(*piVar12 + 0x10))(0);
    (**(code **)(iVar6 + 0x20))(*(undefined4 *)((int)param_1 + 0x184),uVar9);
    break;
  case 0xb:
    local_c = 0;
    piVar12 = *(int **)(*(int *)((int)param_1 + 0x16) + *(int *)((int)param_1 + 0x1de) * 4);
    local_14 = (int *)0x0;
    if (piVar12 == (int *)0x0) {
      local_8 = -0x7fffbffb;
    }
    else {
      sVar3 = FUN_66219120((int)piVar12);
      local_24 = CONCAT22(extraout_var,sVar3);
      local_10 = (int *)0x0;
      if (sVar3 != 0) {
        do {
          uVar14 = (uint)local_10 & 0xffff;
          FUN_66219890(piVar12,uVar14,(undefined2 *)&local_c,(undefined4 *)0x0);
          if (*(int *)((int)param_1 + 0xa4) <= (int)(local_c & 0xffff)) goto LAB_6622cc83;
          piVar2 = *(int **)(*(int *)((int)param_1 + 0xa0) + (local_c & 0xffff) * 4);
          if (piVar2 != (int *)0x0) {
            uVar9 = (**(code **)(*piVar2 + 0x10))();
            FUN_66219860(piVar12,uVar14,(short)local_c,uVar9);
            pvVar10 = *(void **)(*(int *)((int)param_1 + 0x26) + (local_c & 0xffff) * 4);
            if ((pvVar10 != (void *)0x0) && (FUN_66218030(pvVar10,&local_28), local_14 < local_28))
            {
              local_14 = local_28;
            }
          }
          local_10 = (int *)((int)local_10 + 1);
        } while ((ushort)local_10 < (ushort)local_24);
      }
      FUN_66218020(piVar12,local_14);
      local_14 = (int *)(**(code **)(*piVar12 + 0xc))();
      pvVar10 = operator_new((uint)local_14);
      if (pvVar10 == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        (**(code **)(*piVar12 + 0x18))(pvVar10,local_14);
        if (*(int *)((int)param_1 + 0x178) == 0) {
          puVar11 = operator_new(0x28);
          if (puVar11 == (undefined4 *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = (int *)FUN_662522d0(puVar11);
          }
          (**(code **)(*piVar12 + 4))(piVar12);
          (**(code **)(*piVar12 + 0x10))(piVar12,pvVar10,local_14);
          (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                    (*(int **)((int)param_1 + 0x184),piVar12);
          if (piVar12 != (int *)0x0) {
            (**(code **)(*piVar12 + 8))(piVar12);
          }
          operator_delete(pvVar10);
        }
        else {
          local_8 = FUN_6622b240(param_1,pvVar10,local_14);
          if (local_8 == 0) {
            operator_delete(pvVar10);
          }
        }
      }
    }
    break;
  case 0xc:
    local_20 = (int *)0x0;
    if (*(int *)((int)param_1 + 0x40) < (int)(uint)*(ushort *)((int)param_1 + 0x38)) {
      local_8 = -0x7fffbffb;
    }
    else {
      local_10 = *(int **)(*(int *)((int)param_1 + 0x3c) + *(int *)((int)param_1 + 0x1e2) * 4);
      if (local_10 == (int *)0x0) {
        local_8 = -0x7fffbffb;
      }
      else {
        local_c = 0;
        local_18 = 0;
        iVar6 = FUN_66218030(local_10,&local_c);
        local_8 = iVar6;
        if (-1 < iVar6) {
          uVar4 = FUN_662182a0((int)local_10);
          local_18 = CONCAT22(extraout_var_00,uVar4);
          local_20 = *(int **)(*(int *)((int)param_1 + 0xa0) + (uint)uVar4 * 4);
          if ((-1 < iVar6) && (local_c == 0)) {
            local_1c = (int *)0x0;
            local_24 = 0;
            local_14 = (int *)0x0;
            if (*(short *)((int)param_1 + 0x38) != 0) {
              do {
                if ((iVar6 < 0) || (local_24 != 0)) break;
                pvVar10 = *(void **)(*(int *)((int)param_1 + 0x3c) + ((uint)local_14 & 0xffff) * 4);
                uVar4 = FUN_662182a0((int)pvVar10);
                iVar6 = FUN_66218030(pvVar10,&local_28);
                local_8 = iVar6;
                if ((-1 < iVar6) &&
                   (((local_1c = *(int **)(*(int *)((int)param_1 + 0xa0) + (uint)uVar4 * 4),
                     -1 < iVar6 && (uVar4 != (ushort)local_18)) && (local_28 != (int *)0x0)))) {
                  iVar7 = (**(code **)(*local_1c + 0x10))();
                  iVar8 = (**(code **)(*local_20 + 0x10))();
                  if (iVar7 == iVar8) {
                    local_24 = 1;
                    FUN_66218020(local_10,local_28);
                  }
                }
                local_14 = (int *)((int)local_14 + 1);
              } while ((ushort)local_14 < *(ushort *)((int)param_1 + 0x38));
            }
          }
        }
        iVar6 = **(int **)((int)param_1 + 0x184);
        uVar9 = (**(code **)(*local_10 + 0x10))(0);
        (**(code **)(iVar6 + 0x20))(*(undefined4 *)((int)param_1 + 0x184),uVar9);
      }
    }
    break;
  case 0xd:
    piVar12 = *(int **)(*(int *)((int)param_1 + 0x3c) + *(int *)((int)param_1 + 0x1e2) * 4);
    if (piVar12 == (int *)0x0) {
LAB_6622cc83:
      local_8 = -0x7fffbffb;
    }
    else {
      local_14 = (int *)(**(code **)(*piVar12 + 0xc))();
      pvVar10 = operator_new((uint)local_14);
      if (pvVar10 == (void *)0x0) {
        local_8 = -0x7ff8fff2;
      }
      else {
        (**(code **)(*piVar12 + 0x18))(pvVar10,local_14);
        if (*(int *)((int)param_1 + 0x178) == 0) {
          puVar11 = operator_new(0x28);
          if (puVar11 == (undefined4 *)0x0) {
            piVar12 = (int *)0x0;
          }
          else {
            piVar12 = (int *)FUN_662522d0(puVar11);
          }
          (**(code **)(*piVar12 + 4))(piVar12);
          (**(code **)(*piVar12 + 0x10))(piVar12,pvVar10,local_14);
          (**(code **)(**(int **)((int)param_1 + 0x184) + 0x1c))
                    (*(int **)((int)param_1 + 0x184),piVar12);
          if (piVar12 != (int *)0x0) {
            (**(code **)(*piVar12 + 8))(piVar12);
          }
          operator_delete(pvVar10);
        }
        else {
          local_8 = FUN_6622b240(param_1,pvVar10,local_14);
          if (local_8 == 0) {
            operator_delete(pvVar10);
          }
        }
      }
    }
    break;
  case 0xe:
    (**(code **)(**(int **)((int)param_1 + 0x184) + 0x14))(*(int **)((int)param_1 + 0x184));
    break;
  case 0xf:
    *(undefined4 *)((int)param_1 + 400) = 0;
    *(undefined4 *)((int)param_1 + 0x1bc) = 0;
    FUN_66217480(*(void **)((int)param_1 + 0x180),-0x7ffbf036);
    break;
  default:
    local_8 = -0x7ffbfff7;
  }
  if (local_8 < 0) {
    FUN_66217480(*(void **)((int)param_1 + 0x180),local_8);
  }
  return 0;
}


