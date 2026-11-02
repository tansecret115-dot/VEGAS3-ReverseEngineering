/* Module: encn3260.dll
   Function: FUN_6649c050
   Address: 6649c050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6649c050(int param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 *puVar8;
  bool bVar9;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar2 = param_2;
  iVar5 = *param_2;
  if ((((iVar5 == DAT_664dcf60) && (param_2[1] == DAT_664dcf64)) && (param_2[2] == DAT_664dcf68)) &&
     (param_2[3] == DAT_664dcf6c)) {
    puVar1 = operator_new(0x28);
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)FUN_664bad50(puVar1);
      *param_3 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
LAB_6649c363:
    *param_3 = 0;
    (*(code *)puRam00000000[1])(0);
    return 0;
  }
  if (((iVar5 == DAT_664dcf70) && (param_2[1] == DAT_664dcf74)) &&
     ((param_2[2] == DAT_664dcf78 && (param_2[3] == DAT_664dcf7c)))) {
    piVar2 = operator_new(0x19);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      *(undefined2 *)(piVar2 + 4) = 0;
      *(undefined1 *)((int)piVar2 + 0x12) = 0;
      *(undefined2 *)((int)piVar2 + 0x13) = 0;
      *(undefined4 *)((int)piVar2 + 0x15) = 0;
      *piVar2 = (int)&PTR_FUN_664de370;
      *param_3 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  else {
    if (((iVar5 == DAT_664dcf80) && (param_2[1] == DAT_664dcf84)) &&
       ((param_2[2] == DAT_664dcf88 && (param_2[3] == DAT_664dcf8c)))) {
      piVar2 = operator_new(0x1d);
      if (piVar2 != (int *)0x0) {
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        *(undefined2 *)(piVar2 + 4) = 0;
        *(undefined1 *)((int)piVar2 + 0x12) = 0;
        *(undefined2 *)((int)piVar2 + 0x13) = 0;
        *(undefined4 *)((int)piVar2 + 0x15) = 0;
        *(undefined4 *)((int)piVar2 + 0x19) = 0;
        *piVar2 = (int)&PTR_FUN_664dea88;
        *param_3 = (int)piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
      goto LAB_6649c363;
    }
    if ((((iVar5 == DAT_664dcf90) && (param_2[1] == DAT_664dcf94)) && (param_2[2] == DAT_664dcf98))
       && (param_2[3] == DAT_664dcf9c)) {
      piVar2 = operator_new(0x6c);
      if (piVar2 == (int *)0x0) {
        *param_3 = 0;
        (*(code *)puRam00000000[1])(0);
        return 0;
      }
      *piVar2 = (int)&PTR_LAB_664ddfd0;
      piVar2[1] = 0;
      FUN_664bdbb0(piVar2 + 2,10);
      FUN_664bdbb0(piVar2 + 9,10);
      FUN_664bdbb0(piVar2 + 0x10,10);
      piVar2[0x17] = 0;
      piVar2[0x18] = 0;
      piVar2[0x19] = 0;
      piVar2[0x1a] = 0;
      *piVar2 = (int)&PTR_FUN_664ddf90;
      *param_3 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
    if (((iVar5 == DAT_664dc990) && (param_2[1] == DAT_664dc994)) &&
       ((param_2[2] == DAT_664dc998 && (param_2[3] == DAT_664dc99c)))) {
      puVar1 = operator_new(0x20);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = (int *)FUN_664d2670(puVar1);
        *param_3 = (int)piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
    }
    else {
      if (((iVar5 == DAT_664dd1b0) && (param_2[1] == DAT_664dd1b4)) &&
         ((param_2[2] == DAT_664dd1b8 && (param_2[3] == DAT_664dd1bc)))) {
        uVar3 = FUN_664c29b0(param_3);
        return uVar3;
      }
      if ((((iVar5 == DAT_664dd5a0) && (param_2[1] == DAT_664dd5a4)) && (param_2[2] == DAT_664dd5a8)
          ) && (param_2[3] == DAT_664dd5ac)) {
        puVar1 = operator_new(0x38);
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = FUN_664c1430(puVar1);
          *param_3 = (int)piVar2;
          (**(code **)(*piVar2 + 4))(piVar2);
          return 0;
        }
        goto LAB_6649c363;
      }
      if (((iVar5 != DAT_664dc8d0) || (param_2[1] != DAT_664dc8d4)) ||
         ((param_2[2] != DAT_664dc8d8 || (param_2[3] != DAT_664dc8dc)))) {
        if (((iVar5 == DAT_664dcda0) && (param_2[1] == DAT_664dcda4)) &&
           ((param_2[2] == DAT_664dcda8 && (param_2[3] == DAT_664dcdac)))) {
          piVar2 = (int *)0x0;
          local_8 = (int *)0x0;
          param_2 = (int *)0x0;
          bVar9 = true;
          iVar5 = (**(code **)**(undefined4 **)(param_1 + 8))
                            (*(undefined4 **)(param_1 + 8),&DAT_664dcb00,&local_8);
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*local_8 + 0xc))
                              (local_8,s_DoNotUseWindowlessSite_664e31c4,&param_2);
            if (iVar5 == 0) {
              pcVar6 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
              iVar5 = atoi(pcVar6);
              bVar9 = iVar5 != 1;
            }
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
              param_2 = (int *)0x0;
            }
          }
          iVar5 = (**(code **)**(undefined4 **)(param_1 + 8))
                            (*(undefined4 **)(param_1 + 8),&DAT_664dcb00,&local_8);
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*local_8 + 0xc))(local_8,s_UseWindowless_664e31b4,&param_2);
            if (iVar5 == 0) {
              pcVar6 = (char *)(**(code **)(*param_2 + 0x1c))(param_2);
              iVar5 = atoi(pcVar6);
              bVar9 = iVar5 == 1;
            }
            if (param_2 != (int *)0x0) {
              (**(code **)(*param_2 + 8))(param_2);
              param_2 = (int *)0x0;
            }
          }
          if (local_8 != (int *)0x0) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          if (!bVar9) {
            pvVar4 = operator_new(0x11d);
            if (pvVar4 == (void *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = FUN_6649eeb0(pvVar4,*(int **)(param_1 + 8),0);
            }
            if (piVar7 != (int *)0x0) {
              piVar2 = piVar7 + 2;
            }
            *param_3 = (int)piVar2;
            uVar3 = (**(code **)*piVar2)(piVar2,&DAT_664dcda0,param_3);
            return uVar3;
          }
          pvVar4 = operator_new(0x22c);
          if (pvVar4 == (void *)0x0) {
            *param_3 = 0;
            uVar3 = (*(code *)*puRam00000000)(0,&DAT_664dcda0,param_3);
            return uVar3;
          }
          piVar2 = FUN_664a5700(pvVar4,*(int *)(param_1 + 8),0);
          *param_3 = (int)piVar2;
          uVar3 = (**(code **)*piVar2)(piVar2,&DAT_664dcda0,param_3);
          return uVar3;
        }
        if ((((iVar5 == DAT_664dcdb0) && (param_2[1] == DAT_664dcdb4)) &&
            (param_2[2] == DAT_664dcdb8)) && (param_2[3] == DAT_664dcdbc)) {
          pvVar4 = operator_new(0x22c);
          if (pvVar4 == (void *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = FUN_664a5700(pvVar4,*(int *)(param_1 + 8),1);
          }
          *param_3 = (int)piVar2;
          uVar3 = (**(code **)*piVar2)(piVar2,&DAT_664dcda0,param_3);
          return uVar3;
        }
        if (((iVar5 == DAT_664dce20) && (param_2[1] == DAT_664dce24)) &&
           ((param_2[2] == DAT_664dce28 && (param_2[3] == DAT_664dce2c)))) {
          puVar8 = operator_new(0x61);
          puVar1 = (undefined4 *)0x0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_6649dc90(puVar8);
          }
          if (puVar8 != (undefined4 *)0x0) {
            puVar1 = puVar8 + 3;
          }
          *param_3 = (int)puVar1;
          uVar3 = (**(code **)*puVar1)(puVar1,&DAT_664dce20,param_3);
          return uVar3;
        }
        if (((iVar5 == DAT_664dcd30) && (param_2[1] == DAT_664dcd34)) &&
           ((param_2[2] == DAT_664dcd38 && (param_2[3] == DAT_664dcd3c)))) {
          param_2 = (int *)0x0;
          (**(code **)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 **)(param_1 + 8),&DAT_664dd890,&param_2);
          pvVar4 = operator_new(0x18);
          if (pvVar4 == (void *)0x0) {
            puVar1 = (undefined4 *)0x0;
          }
          else {
            puVar1 = FUN_664d21a0(pvVar4,param_2);
          }
          piVar2 = param_3;
          *param_3 = (int)puVar1;
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))(param_2);
            param_2 = (int *)0x0;
          }
          puVar1 = (undefined4 *)*piVar2;
          uVar3 = (**(code **)*puVar1)(puVar1,&DAT_664dcd30,piVar2);
          return uVar3;
        }
        local_8 = (int *)0x0;
        (**(code **)**(undefined4 **)(param_1 + 8))
                  (*(undefined4 **)(param_1 + 8),&DAT_664dd890,&local_8);
        piVar7 = param_3;
        local_14 = 0;
        *param_3 = 0;
        if (local_8 == (int *)0x0) {
          local_10 = (int *)0x0;
          (**(code **)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 **)(param_1 + 8),&DAT_664dd880,&local_10);
          *piVar7 = 0;
          if (local_10 != (int *)0x0) {
            local_1c = *(int *)local_10[0xd];
            local_20 = *(int *)(local_1c + 4);
            while (local_20 != 0) {
              param_3 = (int *)0x0;
              if (local_20 == 0) {
                pvVar4 = (void *)0x0;
              }
              else {
                puVar1 = (undefined4 *)FUN_664bab80(local_20);
                pvVar4 = (void *)*puVar1;
              }
              FUN_664cf5e0(pvVar4,&param_3);
              if (param_3 != (int *)0x0) {
                local_c = (int *)0x0;
                iVar5 = (**(code **)*param_3)(param_3,&DAT_664dcd10,&local_c);
                if (iVar5 == 0) {
                  (**(code **)(*local_c + 0x10))(local_c,*(undefined4 *)(param_1 + 8));
                  (**(code **)(*local_c + 8))(local_c);
                  iVar5 = (**(code **)*param_3)(param_3,&DAT_664dc5f0,&local_18);
                  if (iVar5 == 0) {
                    iVar5 = (**(code **)(*local_18 + 0xc))(local_18,param_2,piVar7);
                    if (iVar5 != 0) {
                      *piVar7 = 0;
                    }
                    (**(code **)(*local_18 + 8))(local_18);
                  }
                }
                (**(code **)(*param_3 + 8))(param_3);
                FUN_66494490();
                if (*piVar7 != 0) {
                  return 0;
                }
              }
              FUN_664bab40(&local_20);
            }
            if (local_10 != (int *)0x0) {
              (**(code **)(*local_10 + 8))(local_10);
            }
          }
        }
        else {
          iVar5 = (**(code **)(*local_8 + 0x34))(local_8,piVar2,&local_14);
          if (-1 < iVar5) {
            *piVar7 = local_14;
            if (local_8 == (int *)0x0) {
              return 0;
            }
            (**(code **)(*local_8 + 8))(local_8);
            return 0;
          }
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
        }
        *piVar7 = 0;
        return 0x80004002;
      }
      pvVar4 = operator_new(0x30);
      if (pvVar4 != (void *)0x0) {
        piVar2 = FUN_664acd20(pvVar4,*(int **)(param_1 + 8));
        *param_3 = (int)piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
    }
  }
  *param_3 = 0;
  (*(code *)puRam00000000[1])(0);
  return 0;
}


