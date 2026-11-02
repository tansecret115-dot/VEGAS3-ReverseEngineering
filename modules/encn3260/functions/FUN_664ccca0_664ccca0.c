/* Module: encn3260.dll
   Function: FUN_664ccca0
   Address: 664ccca0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664ccca0(void *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  char *pcVar18;
  char *pcVar19;
  char local_878 [2048];
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  char *local_5c;
  int *local_58;
  int local_54;
  int *local_50;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int *local_30;
  undefined4 *local_2c;
  char *local_28;
  int *local_24;
  char *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  undefined4 local_10;
  int *local_c;
  uint local_8;
  
  puVar6 = *(undefined4 **)((int)param_1 + 0x48);
  local_10 = 0;
  local_14 = (int *)0x0;
  local_24 = (int *)0x0;
  local_c = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = (int *)0x0;
  local_6c = (int *)0x0;
  local_50 = (int *)0x0;
  local_68 = (int *)0x0;
  local_58 = (int *)0x0;
  local_64 = (int *)0x0;
  local_1c = (int *)0x0;
  local_60 = (int *)0x0;
  local_40 = 0;
  local_3c = 0;
  local_18 = (int *)0x0;
  local_30 = (int *)0x0;
  if ((puVar6 != (undefined4 *)0x0) &&
     (iVar3 = (**(code **)*puVar6)(puVar6,&DAT_664ddad0,&local_30), iVar3 == 0)) {
    (**(code **)(*local_30 + 0xc))(local_30);
    (**(code **)(*local_30 + 8))(local_30);
  }
  if (*(int *)((int)param_1 + 0x58) != 0) {
    uVar16 = *(uint *)(*(int *)((int)param_1 + 0x58) + 0x10);
    local_3c = uVar16;
    local_18 = operator_new(uVar16 * 4);
    piVar7 = local_18;
    if (uVar16 != 0) {
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
    }
  }
  pcVar4 = FUN_664cd8c0((int)param_1);
  local_5c = pcVar4;
  if (pcVar4 == (char *)0x0) {
    local_10 = 6;
  }
  else {
    FUN_664cd620((int)param_1);
    local_14 = FUN_664d6360(pcVar4,(char *)0x0,s___dll_664f0124);
    if (local_14 == (int *)0x0) {
      local_10 = 7;
    }
    else {
      local_34 = FUN_664d6510(local_14);
      iVar3 = local_34;
      while (iVar3 != 0) {
        pcVar4 = (char *)local_14[6];
        local_20 = pcVar4;
        pvVar5 = operator_new(0x26);
        if (pvVar5 == (void *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = FUN_664cfc30(pvVar5,pcVar4,*(undefined4 *)((int)param_1 + 0x44));
        }
        local_2c = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
LAB_664cd3db:
          local_10 = 2;
          goto LAB_664cd375;
        }
        iVar3 = FUN_664cfd10(puVar6);
        if (iVar3 == 0) {
          FUN_664cfbb0(*(void **)((int)param_1 + 0x38),(int)puVar6);
          local_38 = 0;
          if (*(short *)(puVar6 + 2) != 0) {
            do {
              local_8 = 0;
              pvVar5 = operator_new(0x4a);
              if (pvVar5 == (void *)0x0) {
                piVar7 = (int *)0x0;
              }
              else {
                piVar7 = (int *)FUN_664cf470(pvVar5,local_20,0,*(int **)((int)param_1 + 0x44),
                                             local_2c,(short)local_38);
              }
              if (piVar7 == (int *)0x0) goto LAB_664cd3db;
              FUN_664cf580((int)piVar7);
              iVar3 = FUN_664cf670(piVar7);
              if (iVar3 == 0) {
                iVar3 = FUN_664cf5e0(piVar7,&local_24);
                pcVar4 = local_20;
                if (iVar3 == 0) {
                  iVar3 = (**(code **)*local_24)(local_24,&DAT_664dcd10,&local_c);
                  pcVar4 = local_20;
                  if (iVar3 != 0) {
                    sprintf(local_878,s___35s_Not_a_valid_library_664f0108,local_20);
                    piVar2 = *(int **)((int)param_1 + 0x44);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 0xc))(piVar2,2,0,0,local_878,0);
                    }
                    sprintf(local_878,s___35s_QueryInterface_IRMAPlugin__664f00b8,pcVar4);
                    piVar2 = *(int **)((int)param_1 + 0x44);
                    if (piVar2 != (int *)0x0) {
                      (**(code **)(*piVar2 + 0xc))(piVar2,7,0,0,local_878,0);
                    }
                    local_10 = 4;
                    (**(code **)(*local_24 + 8))(local_24);
                    goto LAB_664ccff1;
                  }
                  local_4c = 0;
                  (**(code **)(*local_c + 0xc))
                            (local_c,local_74,&local_28,local_78,local_70,&local_4c);
                  FUN_664cf3e0(*(void **)((int)param_1 + 0x30),(int)piVar7);
                  iVar3 = FUN_664cd3f0(param_1,local_28,&local_40);
                  if (iVar3 != 0) {
                    iVar3 = FUN_664cd490(param_1,local_c,local_28);
                    local_8 = 1;
                    local_18[local_40] = iVar3;
                  }
                  iVar3 = (**(code **)*local_c)(local_c,&DAT_664dc880,&local_48);
                  if (iVar3 == 0) {
                    FUN_664cebe0(*(void **)((int)param_1 + 0x10),piVar7,(char *)0x0,(char *)0x0);
                    (**(code **)(*local_48 + 8))(local_48);
                    local_8 = local_8 | 2;
                  }
                  iVar8 = (**(code **)*local_c)(local_c,&DAT_664dced0,&local_6c);
                  if (iVar8 == 0) {
                    FUN_664cda70(*(void **)((int)param_1 + 0x14),piVar7,0,0,(int *)0x0);
                    (**(code **)(*local_6c + 8))(local_6c);
                    local_8 = local_8 | 4;
                  }
                  iVar9 = (**(code **)*local_c)(local_c,&DAT_664dd960,&local_50);
                  if (iVar9 == 0) {
                    FUN_664cda70(*(void **)((int)param_1 + 0x1c),piVar7,0,0,(int *)0x0);
                    (**(code **)(*local_50 + 8))(local_50);
                    local_8 = local_8 | 8;
                  }
                  iVar10 = (**(code **)*local_c)(local_c,&DAT_664dca10,&local_68);
                  if (iVar10 == 0) {
                    FUN_664ce360(*(void **)((int)param_1 + 0x18),piVar7,0);
                    (**(code **)(*local_68 + 8))(local_68);
                    local_8 = local_8 | 0x10;
                  }
                  iVar11 = (**(code **)*local_c)(local_c,&DAT_664dcee0,&local_58);
                  if (iVar11 == 0) {
                    FUN_664ce010(*(void **)((int)param_1 + 0x20),piVar7,0);
                    (**(code **)(*local_58 + 8))(local_58);
                    local_8 = local_8 | 0x20;
                  }
                  iVar12 = (**(code **)*local_c)(local_c,&DAT_664dd0b0,&local_64);
                  if (iVar12 == 0) {
                    FUN_664cf070(*(void **)((int)param_1 + 0x24),piVar7,0);
                    (**(code **)(*local_64 + 8))(local_64);
                    local_8 = local_8 | 0x40;
                  }
                  iVar13 = (**(code **)*local_c)(local_c,&DAT_664dd270,&local_1c);
                  if (iVar13 == 0) {
                    FUN_664cf3e0(*(void **)((int)param_1 + 0x28),(int)piVar7);
                    (**(code **)(*local_1c + 8))(local_1c);
                    local_8 = local_8 | 0x80;
                  }
                  iVar14 = (**(code **)*local_c)(local_c,&DAT_664dd240,&local_1c);
                  if (iVar14 == 0) {
                    FUN_664cf3e0(*(void **)((int)param_1 + 0x28),(int)piVar7);
                    (**(code **)(*local_1c + 8))(local_1c);
                    local_8 = local_8 | 0x100;
                  }
                  iVar15 = (**(code **)*local_c)(local_c,&DAT_664dc5f0,&local_60);
                  if (iVar15 == 0) {
                    FUN_664cf3e0(*(void **)((int)param_1 + 0x34),(int)piVar7);
                    (**(code **)(*local_60 + 8))(local_60);
                    local_8 = local_8 | 0x200;
                  }
                  if (iVar15 != 0 &&
                      (iVar14 != 0 &&
                      (iVar13 != 0 &&
                      (iVar12 != 0 &&
                      (iVar11 != 0 && (iVar10 != 0 && (iVar9 != 0 && (iVar8 != 0 && iVar3 != 0))))))
                      )) {
                    FUN_664cf3e0(*(void **)((int)param_1 + 0x2c),(int)piVar7);
                    local_8 = local_8 | 0x400;
                  }
                  iVar3 = (**(code **)*local_c)(local_c,&DAT_664dd7d0,&local_44);
                  if (iVar3 == 0) {
                    FUN_664ce6a0(*(void **)((int)param_1 + 0xc),piVar7,(char *)0x0);
                    (**(code **)(*local_44 + 8))(local_44);
                    local_8 = local_8 | 0x800;
                  }
                  (**(code **)(*local_24 + 8))(local_24);
                  (**(code **)(*local_c + 8))(local_c);
                  FUN_664cf5a0(piVar7);
                  sprintf(local_878,s___20s___55_55s_664f00a8,local_34,local_28);
                  piVar7 = *(int **)((int)param_1 + 0x44);
                  if (piVar7 != (int *)0x0) {
                    (**(code **)(*piVar7 + 0xc))(piVar7,6,0,0,local_878,0);
                  }
                  sprintf(local_878,s___20ld_664f00a0,local_4c);
                  local_54 = 0xf;
                  do {
                    pcVar4 = &DAT_664e2818;
                    if ((local_8 >> ((byte)local_54 & 0x1f) & 1) == 0) {
                      pcVar4 = (char *)&DAT_664e3338;
                    }
                    uVar16 = 0xffffffff;
                    do {
                      pcVar19 = pcVar4;
                      if (uVar16 == 0) break;
                      uVar16 = uVar16 - 1;
                      pcVar19 = pcVar4 + 1;
                      cVar1 = *pcVar4;
                      pcVar4 = pcVar19;
                    } while (cVar1 != '\0');
                    uVar16 = ~uVar16;
                    iVar3 = -1;
                    pcVar4 = local_878;
                    do {
                      pcVar18 = pcVar4;
                      if (iVar3 == 0) break;
                      iVar3 = iVar3 + -1;
                      pcVar18 = pcVar4 + 1;
                      cVar1 = *pcVar4;
                      pcVar4 = pcVar18;
                    } while (cVar1 != '\0');
                    pcVar4 = pcVar19 + -uVar16;
                    pcVar19 = pcVar18 + -1;
                    for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                      *(undefined4 *)pcVar19 = *(undefined4 *)pcVar4;
                      pcVar4 = pcVar4 + 4;
                      pcVar19 = pcVar19 + 4;
                    }
                    for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *pcVar19 = *pcVar4;
                      pcVar4 = pcVar4 + 1;
                      pcVar19 = pcVar19 + 1;
                    }
                    local_54 = local_54 + -1;
                  } while (-1 < local_54);
                  piVar7 = *(int **)((int)param_1 + 0x44);
                  if (piVar7 != (int *)0x0) {
                    (**(code **)(*piVar7 + 0xc))(piVar7,7,0,0,local_878,0);
                  }
                }
                else {
                  local_10 = 4;
                  sprintf(local_878,s___35s_Not_a_valid_library_664f0108,local_20);
                  piVar2 = *(int **)((int)param_1 + 0x44);
                  if (piVar2 != (int *)0x0) {
                    (**(code **)(*piVar2 + 0xc))(piVar2,2,0,0,local_878,0);
                  }
                  sprintf(local_878,s___35s_RMACreateInstance___failed_664f00e4,pcVar4);
                  piVar2 = *(int **)((int)param_1 + 0x44);
                  if (piVar2 == (int *)0x0) {
LAB_664ccff1:
                    FUN_664cf5a0(piVar7);
                  }
                  else {
                    (**(code **)(*piVar2 + 0xc))(piVar2,7,0,0,local_878,0);
                    FUN_664cf5a0(piVar7);
                  }
                }
              }
              else {
                sprintf(local_878,s___35s_Not_a_valid_library_664f0108,local_20);
                piVar2 = *(int **)((int)param_1 + 0x44);
                if (piVar2 == (int *)0x0) goto LAB_664ccff1;
                (**(code **)(*piVar2 + 0xc))(piVar2,2,0,0,local_878,0);
                FUN_664cf5a0(piVar7);
              }
              local_38 = local_38 + 1;
            } while ((ushort)local_38 < *(ushort *)(local_2c + 2));
          }
          local_34 = FUN_664d65b0(local_14);
          iVar3 = local_34;
        }
        else {
          sprintf(local_878,s___35s_Not_a_valid_library_664f0108,pcVar4);
          piVar7 = *(int **)((int)param_1 + 0x44);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0xc))(piVar7,2,0,0,local_878,0);
          }
          iVar3 = FUN_664d65b0(local_14);
          local_34 = iVar3;
          FUN_664cff00(puVar6);
        }
      }
      FUN_664cf850((int)param_1);
      FUN_664b0670();
    }
  }
LAB_664cd375:
  if (local_14 != (int *)0x0) {
    (**(code **)*local_14)(1);
  }
  if (local_5c != (char *)0x0) {
    operator_delete(local_5c);
  }
  uVar16 = 0;
  piVar7 = local_18;
  if (local_3c != 0) {
    do {
      if (*piVar7 == 0) {
        FUN_664cd5a0(param_1,uVar16);
        local_10 = 0x13;
      }
      uVar16 = uVar16 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar16 < local_3c);
  }
  if (local_18 != (int *)0x0) {
    operator_delete(local_18);
  }
  return local_10;
}


