/* Module: rmbe3260.dll
   Function: FUN_6602ca50
   Address: 6602ca50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6602ca50(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char local_168 [256];
  byte *local_68 [3];
  byte *local_5c [3];
  byte *local_50 [3];
  uint local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  int local_38 [3];
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14 [3];
  int *local_8;
  
  FUN_6602d4a0(param_1);
  FUN_6605b650(local_38);
  FUN_6605b650(local_14);
  local_8 = (int *)0x0;
  local_2c = 6;
  FUN_6605bfd0(local_38,s__s__d_6606cd1c);
  FUN_6605bfd0(local_14,s__s__s_6606cd0c);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
                    (*(int **)(param_1 + 0x3c),local_14[0],&local_8);
  *(uint *)(param_1 + 0x50) = (uint)(-1 < iVar1);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_6605bfd0(local_14,s__s__s_6606cd0c);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
                    (*(int **)(param_1 + 0x3c),local_14[0],&local_8);
  *(uint *)(param_1 + 0x54) = (uint)(-1 < iVar1);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if ((*(int *)(param_1 + 0x50) != 0) || (*(int *)(param_1 + 0x54) != 0)) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
              (*(int **)(param_1 + 0x3c),s_playercompatibility_6606dcd4,&local_2c);
    *(undefined4 *)(param_1 + 0xd0) = 0;
    local_3c = 0;
    iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                      (*(int **)(param_1 + 0x3c),s_totalduration_6606cc90,&local_3c);
    if (-1 < iVar1) {
      *(undefined4 *)(param_1 + 0xd0) = local_3c;
    }
    if (*(int *)(param_1 + 0x50) != 0) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x84))
                        (*(int **)(param_1 + 0x3c),s_AudioStreams_6606cc68);
      *(undefined4 *)(param_1 + 0xe0) = 0;
      *(undefined4 *)(param_1 + 0xd4) = 0;
      local_24 = uVar2;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                        (*(int **)(param_1 + 0x3c),s_currentaudiotime_6606cd24,&local_28);
      if (-1 < iVar1) {
        *(uint *)(param_1 + 0xac) = local_28;
      }
      local_20 = 1;
      if (uVar2 != 0) {
        local_18 = 1;
        do {
          puVar3 = operator_new(0x38);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            puVar3 = FUN_6602d8a0(puVar3);
          }
          FUN_6605bfd0(puVar3 + 5,s__s__d_6606cd1c);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
                            (*(int **)(param_1 + 0x3c),local_14[0],&local_8);
          if (-1 < iVar1) {
            pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
            FUN_6605b970(puVar3 + 8,pcVar4);
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
          }
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar3 + 0xb);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar3 + 2);
          *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + puVar3[2];
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar3 + 0xc);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar3 + 0xd);
          local_1c = (undefined4 *)0x0;
          *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + puVar3[0xd];
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],&local_1c);
          puVar3[3] = (uint)(local_1c != (undefined4 *)0x0);
          FUN_6605c9a0((void *)(param_1 + 0x90),(byte *)puVar3[5],(int)puVar3);
          FUN_6602d3b0((int)puVar3,(undefined4 *)(param_1 + 0x60));
          local_20 = local_20 + 1;
          local_18 = local_20 & 0xffff;
        } while (local_18 <= local_24);
      }
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x84))
                        (*(int **)(param_1 + 0x3c),s_VideoStreams_6606de44);
      *(undefined4 *)(param_1 + 0xdc) = 0;
      *(undefined4 *)(param_1 + 0xd8) = 0;
      local_28 = uVar2;
      iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                        (*(int **)(param_1 + 0x3c),s_currentvideotime_6606dec8,&local_24);
      if (-1 < iVar1) {
        *(uint *)(param_1 + 0xbc) = local_24;
      }
      local_20 = 1;
      if (uVar2 != 0) {
        local_18 = 1;
        do {
          puVar5 = (undefined4 *)0x0;
          puVar3 = operator_new(0x40);
          if (puVar3 != (undefined4 *)0x0) {
            puVar5 = FUN_6602d910(puVar3);
          }
          FUN_6605bfd0(puVar5 + 5,s__s__d_6606cd1c);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
                            (*(int **)(param_1 + 0x3c),local_14[0],&local_8);
          if (-1 < iVar1) {
            pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
            FUN_6605b970(puVar5 + 8,pcVar4);
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
          }
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar5 + 2);
          *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + puVar5[2];
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar5 + 0xb);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar5 + 0xc);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar5 + 0xe);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar5 + 0xd);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar5 + 0xf);
          local_1c = (undefined4 *)0x0;
          *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + puVar5[0xf];
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],&local_1c);
          puVar5[3] = (uint)(local_1c != (undefined4 *)0x0);
          FUN_6605c9a0((void *)(param_1 + 0x90),(byte *)puVar5[5],(int)puVar5);
          FUN_6602d3b0((int)puVar5,(undefined4 *)(param_1 + 0x70));
          local_20 = local_20 + 1;
          local_18 = local_20 & 0xffff;
        } while (local_18 <= local_28);
      }
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x84))
                      (*(int **)(param_1 + 0x3c),s_TargetStreams_6606db78);
    local_20 = 1;
    local_44 = uVar2;
    if (uVar2 != 0) {
      do {
        FUN_6605bfd0(local_38,s__s__d_6606cd1c);
        local_18 = 0;
        FUN_6605bfd0(local_14,s__s__s_6606cd0c);
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                  (*(int **)(param_1 + 0x3c),local_14[0],&local_18);
        if ((local_18 == 0) || (local_2c != 6)) {
          puVar3 = operator_new(0x40);
          if (puVar3 == (undefined4 *)0x0) {
            local_1c = (undefined4 *)0x0;
          }
          else {
            local_1c = FUN_6602d980(puVar3);
          }
          puVar3 = local_1c;
          local_40 = local_1c + 5;
          FUN_6605b900(local_40,local_38);
          puVar3[3] = (uint)(local_18 != 0);
          FUN_6605bfd0(local_14,s__s__s_6606cd0c);
          (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))
                    (*(int **)(param_1 + 0x3c),local_14[0],puVar3 + 1);
          if (puVar3[3] == 0) {
            uVar7 = 0xff;
            iVar1 = FUN_6605bc10(puVar3 + 0xd,0xff);
            FUN_6602e290(*(uint *)(&DAT_660678c8 + puVar3[1] * 4) | *(int *)(param_1 + 0xf4) << 0x10
                         ,iVar1,uVar7);
            FUN_6605bc90(puVar3 + 0xd,-1);
          }
          else {
            FUN_6602e290(*(int *)(param_1 + 0xf4) << 0x10 | 0x34,local_168,0xff);
            FUN_6605bfd0(puVar3 + 0xd,local_168);
          }
          puVar5 = (undefined4 *)0x0;
          puVar3[2] = 0;
          if (*(int *)(param_1 + 0x50) != 0) {
            FUN_6605b650(local_50);
            FUN_6605bfd0(local_14,s__s__s_6606cd0c);
            iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
                              (*(int **)(param_1 + 0x3c),local_14[0],&local_8);
            if (-1 < iVar1) {
              pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
              FUN_6605b970(local_50,pcVar4);
              if (local_8 != (int *)0x0) {
                (**(code **)(*local_8 + 8))(local_8);
                local_8 = (int *)0x0;
              }
              iVar1 = FUN_6605cad0((void *)(param_1 + 0x90),local_50[0],(int *)&local_24);
              if (iVar1 != 0) {
                puVar3[0xb] = local_24;
                puVar3[2] = puVar3[2] + *(int *)(local_24 + 8);
                if ((puVar3[3] != 0) && (*(int *)(local_24 + 0xc) == 0)) {
                  puVar6 = operator_new(0x38);
                  if (puVar6 != (undefined4 *)0x0) {
                    puVar5 = FUN_6602d8a0(puVar6);
                  }
                  iVar1 = puVar3[0xb];
                  puVar5[1] = *(undefined4 *)(iVar1 + 4);
                  puVar5[2] = *(undefined4 *)(iVar1 + 8);
                  puVar5[3] = *(undefined4 *)(iVar1 + 0xc);
                  puVar5[4] = *(undefined4 *)(iVar1 + 0x10);
                  FUN_6605b900(puVar5 + 5,(int *)(iVar1 + 0x14));
                  FUN_6605b900(puVar5 + 8,(int *)(iVar1 + 0x20));
                  puVar5[0xb] = *(undefined4 *)(iVar1 + 0x2c);
                  puVar5[0xc] = *(undefined4 *)(iVar1 + 0x30);
                  uVar7 = *(undefined4 *)(iVar1 + 0x34);
                  puVar5[3] = 1;
                  puVar5[4] = 1;
                  puVar5[0xd] = uVar7;
                  FUN_6605ba50(local_68,puVar5 + 5,s__duplicate_6606df44);
                  FUN_6605c9a0((void *)(param_1 + 0x90),local_68[0],(int)puVar5);
                  FUN_6602d3b0((int)puVar5,(undefined4 *)(param_1 + 0x60));
                  FUN_6605b770((int *)local_68);
                  puVar3 = local_1c;
                }
              }
            }
            FUN_6605b770((int *)local_50);
          }
          if (*(int *)(param_1 + 0x54) != 0) {
            FUN_6605b650(local_5c);
            FUN_6605bfd0(local_14,s__s__s_6606cd0c);
            iVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x2c))
                              (*(int **)(param_1 + 0x3c),local_14[0],&local_8);
            if (-1 < iVar1) {
              pcVar4 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
              FUN_6605b970(local_5c,pcVar4);
              if (local_8 != (int *)0x0) {
                (**(code **)(*local_8 + 8))(local_8);
                local_8 = (int *)0x0;
              }
              iVar1 = FUN_6605cad0((void *)(param_1 + 0x90),local_5c[0],(int *)&local_28);
              if (iVar1 != 0) {
                puVar3[0xc] = local_28;
                puVar3[2] = puVar3[2] + *(int *)(local_28 + 8);
              }
            }
            FUN_6605b770((int *)local_5c);
          }
          FUN_6605c9a0((void *)(param_1 + 0x90),(byte *)*local_40,(int)puVar3);
          FUN_6602d3b0((int)puVar3,(undefined4 *)(param_1 + 0x80));
          uVar2 = local_44;
        }
        local_20 = local_20 + 1;
      } while ((local_20 & 0xffff) <= uVar2);
    }
  }
  FUN_6605b770(local_14);
  FUN_6605b770(local_38);
  return;
}


