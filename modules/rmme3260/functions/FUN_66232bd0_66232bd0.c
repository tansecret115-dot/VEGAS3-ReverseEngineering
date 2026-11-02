/* Module: rmme3260.dll
   Function: FUN_66232bd0
   Address: 66232bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66232bd0(int param_1,int *param_2,int *param_3)

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
  if ((((iVar5 == DAT_6626a5f8) && (param_2[1] == DAT_6626a5fc)) && (param_2[2] == DAT_6626a600)) &&
     (param_2[3] == DAT_6626a604)) {
    puVar1 = operator_new(0x28);
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = (int *)FUN_662522d0(puVar1);
      *param_3 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
LAB_66232ee3:
    *param_3 = 0;
    (*(code *)puRam00000000[1])(0);
    return 0;
  }
  if (((iVar5 == DAT_6626a608) && (param_2[1] == DAT_6626a60c)) &&
     ((param_2[2] == DAT_6626a610 && (param_2[3] == DAT_6626a614)))) {
    piVar2 = operator_new(0x19);
    if (piVar2 != (int *)0x0) {
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      *(undefined2 *)(piVar2 + 4) = 0;
      *(undefined1 *)((int)piVar2 + 0x12) = 0;
      *(undefined2 *)((int)piVar2 + 0x13) = 0;
      *(undefined4 *)((int)piVar2 + 0x15) = 0;
      *piVar2 = (int)&PTR_FUN_6626b770;
      *param_3 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
  }
  else {
    if (((iVar5 == DAT_6626a618) && (param_2[1] == DAT_6626a61c)) &&
       ((param_2[2] == DAT_6626a620 && (param_2[3] == DAT_6626a624)))) {
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
        *piVar2 = (int)&PTR_FUN_6626c090;
        *param_3 = (int)piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
      goto LAB_66232ee3;
    }
    if ((((iVar5 == DAT_6626a628) && (param_2[1] == DAT_6626a62c)) && (param_2[2] == DAT_6626a630))
       && (param_2[3] == DAT_6626a634)) {
      piVar2 = operator_new(0x6c);
      if (piVar2 == (int *)0x0) {
        *param_3 = 0;
        (*(code *)puRam00000000[1])(0);
        return 0;
      }
      *piVar2 = (int)&PTR_LAB_6626b730;
      piVar2[1] = 0;
      FUN_66252680(piVar2 + 2,10);
      FUN_66252680(piVar2 + 9,10);
      FUN_66252680(piVar2 + 0x10,10);
      piVar2[0x17] = 0;
      piVar2[0x18] = 0;
      piVar2[0x19] = 0;
      piVar2[0x1a] = 0;
      *piVar2 = (int)&PTR_FUN_6626b6f0;
      *param_3 = (int)piVar2;
      (**(code **)(*piVar2 + 4))(piVar2);
      return 0;
    }
    if (((iVar5 == DAT_6626a9b8) && (param_2[1] == DAT_6626a9bc)) &&
       ((param_2[2] == DAT_6626a9c0 && (param_2[3] == DAT_6626a9c4)))) {
      puVar1 = operator_new(0x20);
      if (puVar1 != (undefined4 *)0x0) {
        piVar2 = (int *)FUN_662643f0(puVar1);
        *param_3 = (int)piVar2;
        (**(code **)(*piVar2 + 4))(piVar2);
        return 0;
      }
    }
    else {
      if (((iVar5 == DAT_6626b038) && (param_2[1] == DAT_6626b03c)) &&
         ((param_2[2] == DAT_6626b040 && (param_2[3] == DAT_6626b044)))) {
        uVar3 = FUN_66255b80(param_3);
        return uVar3;
      }
      if ((((iVar5 == DAT_6626a5b8) && (param_2[1] == DAT_6626a5bc)) && (param_2[2] == DAT_6626a5c0)
          ) && (param_2[3] == DAT_6626a5c4)) {
        puVar1 = operator_new(0x38);
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = FUN_662532e0(puVar1);
          *param_3 = (int)piVar2;
          (**(code **)(*piVar2 + 4))(piVar2);
          return 0;
        }
        goto LAB_66232ee3;
      }
      if (((iVar5 != DAT_6626a8e8) || (param_2[1] != DAT_6626a8ec)) ||
         ((param_2[2] != DAT_6626a8f0 || (param_2[3] != DAT_6626a8f4)))) {
        if (((iVar5 == DAT_6626abe8) && (param_2[1] == DAT_6626abec)) &&
           ((param_2[2] == DAT_6626abf0 && (param_2[3] == DAT_6626abf4)))) {
          piVar2 = (int *)0x0;
          local_8 = (int *)0x0;
          param_2 = (int *)0x0;
          bVar9 = true;
          iVar5 = (**(code **)**(undefined4 **)(param_1 + 8))
                            (*(undefined4 **)(param_1 + 8),&DAT_6626abb8,&local_8);
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*local_8 + 0xc))
                              (local_8,s_DoNotUseWindowlessSite_6626fcac,&param_2);
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
                            (*(undefined4 **)(param_1 + 8),&DAT_6626abb8,&local_8);
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*local_8 + 0xc))(local_8,s_UseWindowless_6626fc9c,&param_2);
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
              piVar7 = FUN_66234b90(pvVar4,*(int **)(param_1 + 8),0);
            }
            if (piVar7 != (int *)0x0) {
              piVar2 = piVar7 + 2;
            }
            *param_3 = (int)piVar2;
            uVar3 = (**(code **)*piVar2)(piVar2,&DAT_6626abe8,param_3);
            return uVar3;
          }
          pvVar4 = operator_new(0x22c);
          if (pvVar4 == (void *)0x0) {
            *param_3 = 0;
            uVar3 = (*(code *)*puRam00000000)(0,&DAT_6626abe8,param_3);
            return uVar3;
          }
          piVar2 = FUN_6623b2a0(pvVar4,*(int *)(param_1 + 8),0);
          *param_3 = (int)piVar2;
          uVar3 = (**(code **)*piVar2)(piVar2,&DAT_6626abe8,param_3);
          return uVar3;
        }
        if ((((iVar5 == DAT_6626ac18) && (param_2[1] == DAT_6626ac1c)) &&
            (param_2[2] == DAT_6626ac20)) && (param_2[3] == DAT_6626ac24)) {
          pvVar4 = operator_new(0x22c);
          if (pvVar4 == (void *)0x0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = FUN_6623b2a0(pvVar4,*(int *)(param_1 + 8),1);
          }
          *param_3 = (int)piVar2;
          uVar3 = (**(code **)*piVar2)(piVar2,&DAT_6626abe8,param_3);
          return uVar3;
        }
        if (((iVar5 == DAT_6626ac88) && (param_2[1] == DAT_6626ac8c)) &&
           ((param_2[2] == DAT_6626ac90 && (param_2[3] == DAT_6626ac94)))) {
          puVar8 = operator_new(0x61);
          puVar1 = (undefined4 *)0x0;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = FUN_66233960(puVar8);
          }
          if (puVar8 != (undefined4 *)0x0) {
            puVar1 = puVar8 + 3;
          }
          *param_3 = (int)puVar1;
          uVar3 = (**(code **)*puVar1)(puVar1,&DAT_6626ac88,param_3);
          return uVar3;
        }
        if (((iVar5 == DAT_6626ab28) && (param_2[1] == DAT_6626ab2c)) &&
           ((param_2[2] == DAT_6626ab30 && (param_2[3] == DAT_6626ab34)))) {
          param_2 = (int *)0x0;
          (**(code **)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 **)(param_1 + 8),&DAT_6626ab98,&param_2);
          pvVar4 = operator_new(0x18);
          if (pvVar4 == (void *)0x0) {
            puVar1 = (undefined4 *)0x0;
          }
          else {
            puVar1 = FUN_66265810(pvVar4,param_2);
          }
          piVar2 = param_3;
          *param_3 = (int)puVar1;
          if (param_2 != (int *)0x0) {
            (**(code **)(*param_2 + 8))(param_2);
            param_2 = (int *)0x0;
          }
          puVar1 = (undefined4 *)*piVar2;
          uVar3 = (**(code **)*puVar1)(puVar1,&DAT_6626ab28,piVar2);
          return uVar3;
        }
        local_8 = (int *)0x0;
        (**(code **)**(undefined4 **)(param_1 + 8))
                  (*(undefined4 **)(param_1 + 8),&DAT_6626ab98,&local_8);
        piVar7 = param_3;
        local_14 = 0;
        *param_3 = 0;
        if (local_8 == (int *)0x0) {
          local_10 = (int *)0x0;
          (**(code **)**(undefined4 **)(param_1 + 8))
                    (*(undefined4 **)(param_1 + 8),&DAT_6626ab88,&local_10);
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
                puVar1 = (undefined4 *)FUN_66250c10(local_20);
                pvVar4 = (void *)*puVar1;
              }
              FUN_66263580(pvVar4,&param_3);
              if (param_3 != (int *)0x0) {
                local_c = (int *)0x0;
                iVar5 = (**(code **)*param_3)(param_3,&DAT_6626ab08,&local_c);
                if (iVar5 == 0) {
                  (**(code **)(*local_c + 0x10))(local_c,*(undefined4 *)(param_1 + 8));
                  (**(code **)(*local_c + 8))(local_c);
                  iVar5 = (**(code **)*param_3)(param_3,&DAT_6626a7d8,&local_18);
                  if (iVar5 == 0) {
                    iVar5 = (**(code **)(*local_18 + 0xc))(local_18,param_2,piVar7);
                    if (iVar5 != 0) {
                      *piVar7 = 0;
                    }
                    (**(code **)(*local_18 + 8))(local_18);
                  }
                }
                (**(code **)(*param_3 + 8))(param_3);
                FUN_66268160();
                if (*piVar7 != 0) {
                  return 0;
                }
              }
              FUN_66250bf0(&local_20);
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
        piVar2 = FUN_66242a40(pvVar4,*(int **)(param_1 + 8));
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


