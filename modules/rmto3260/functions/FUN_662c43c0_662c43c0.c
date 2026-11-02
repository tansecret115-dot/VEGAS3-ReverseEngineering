/* Module: rmto3260.dll
   Function: FUN_662c43c0
   Address: 662c43c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662c43c0(int *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  void *this;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  char *pcStack_60;
  int **ppiStack_5c;
  int local_40 [3];
  char *local_34;
  int local_30;
  int local_2c [2];
  short local_24 [2];
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  iVar5 = 0;
  local_10 = (int *)0x0;
  FUN_662ef160(local_40,"ASMRuleBook");
  FUN_662eeff0(&pcStack_60,local_40);
  FUN_662dfd50(param_2);
  pcVar3 = operator_new((local_1c & 0xffff) + 1);
  if (pcVar3 == (char *)0x0) {
    iVar5 = -0x7ff8fff2;
  }
  local_34 = pcVar3;
  if (-1 < iVar5) {
    FUN_662eeff0(&stack0xffffff9c,local_40);
    iVar5 = FUN_662dfdb0(param_2);
    pcVar3[local_1c & 0xffff] = '\0';
    if (-1 < iVar5) {
      this = operator_new(10);
      if (this == (void *)0x0) {
        local_10 = (int *)0x0;
      }
      else {
        local_10 = FUN_662f28e0(this,pcVar3);
      }
      if (local_10 == (int *)0x0) {
        iVar5 = -0x7ff8fff2;
      }
    }
  }
  uVar7 = 0;
  if (-1 < iVar5) {
    local_c = (int *)0x0;
    local_20 = (uint)*(ushort *)(local_10 + 1);
    if (local_20 != 0) {
      do {
        if (iVar5 != 0) break;
        bVar2 = false;
        iVar5 = FUN_662f2b80(local_10,uVar7,&local_c);
        if (-1 < iVar5) {
          local_8 = (int *)0x0;
          ppiStack_5c = (int **)0x662c44d6;
          (**(code **)(*local_c + 0x30))();
          if (local_8 != (int *)0x0) {
            ppiStack_5c = (int **)local_8;
            pcStack_60 = (char *)0x662c44e3;
            pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))();
            if (*pcVar3 == 'T') {
LAB_662c44f6:
              bVar2 = true;
            }
            else {
              ppiStack_5c = (int **)local_8;
              pcStack_60 = (char *)0x662c44f1;
              pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))();
              if (*pcVar3 == 't') goto LAB_662c44f6;
            }
            if (local_8 != (int *)0x0) {
              ppiStack_5c = (int **)local_8;
              pcStack_60 = (char *)0x662c4508;
              (**(code **)(*local_8 + 8))();
              local_8 = (int *)0x0;
            }
          }
          ppiStack_5c = &local_8;
          pcStack_60 = s_PNMNonKeyFrameRule_6630a170;
          (**(code **)(*local_c + 0x30))();
          if (local_8 != (int *)0x0) {
            pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
            if (*pcVar3 == 'T') {
LAB_662c4541:
              bVar2 = true;
            }
            else {
              pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
              if (*pcVar3 == 't') goto LAB_662c4541;
            }
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
          }
          (**(code **)(*local_c + 0x30))(local_c,s_PNMThinningRule_6630a160,&local_8);
          if (local_8 != (int *)0x0) {
            pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
            if (*pcVar3 == 'T') {
LAB_662c458c:
              bVar2 = true;
            }
            else {
              pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
              if (*pcVar3 == 't') goto LAB_662c458c;
            }
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
          }
          (**(code **)(*local_c + 8))(local_c);
        }
        if ((bVar2) && (-1 < iVar5)) {
          ppiStack_5c = (int **)0x662c45c7;
          iVar5 = FUN_662dffa0(param_2,uVar7,local_24,&local_30);
          if (-1 < iVar5) {
            ppiStack_5c = (int **)0x662c45de;
            iVar5 = (**(code **)(*param_1 + 0x24))();
            if (-1 < iVar5) {
              *(undefined4 *)(local_18 + 0x26) = 1;
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)local_20);
    }
    local_18 = 0;
    if (0 < (int)local_20) {
      do {
        if (iVar5 != 0) break;
        bVar2 = false;
        iVar5 = FUN_662f2b80(local_10,local_18,&local_c);
        uVar6 = 0;
        if (-1 < iVar5) {
          local_8 = (int *)0x0;
          ppiStack_5c = (int **)0x662c4647;
          (**(code **)(*local_c + 0x30))();
          if (local_8 != (int *)0x0) {
            ppiStack_5c = (int **)local_8;
            pcStack_60 = (char *)0x662c4654;
            pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))();
            if (*pcVar3 == 'T') {
LAB_662c4667:
              bVar2 = true;
            }
            else {
              ppiStack_5c = (int **)local_8;
              pcStack_60 = (char *)0x662c4662;
              pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))();
              if (*pcVar3 == 't') goto LAB_662c4667;
            }
            if (local_8 != (int *)0x0) {
              ppiStack_5c = (int **)local_8;
              pcStack_60 = (char *)0x662c4679;
              (**(code **)(*local_8 + 8))();
              local_8 = (int *)0x0;
            }
          }
          ppiStack_5c = &local_8;
          pcStack_60 = s_PNMNonKeyFrameRule_6630a170;
          (**(code **)(*local_c + 0x30))();
          if (local_8 != (int *)0x0) {
            pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
            if (*pcVar3 == 'T') {
LAB_662c46ae:
              bVar2 = true;
            }
            else {
              pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
              if (*pcVar3 == 't') goto LAB_662c46ae;
            }
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
          }
          (**(code **)(*local_c + 0x30))(local_c,s_PNMThinningRule_6630a160,&local_8);
          if (local_8 != (int *)0x0) {
            pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
            if (*pcVar3 == 'T') {
LAB_662c46f5:
              bVar2 = true;
            }
            else {
              pcVar3 = (char *)(**(code **)(*local_8 + 0x1c))(local_8);
              if (*pcVar3 == 't') goto LAB_662c46f5;
            }
            if (local_8 != (int *)0x0) {
              (**(code **)(*local_8 + 8))(local_8);
              local_8 = (int *)0x0;
            }
          }
          (**(code **)(*local_c + 8))(local_c);
        }
        if ((bVar2) && (-1 < iVar5)) {
          ppiStack_5c = (int **)0x662c4737;
          iVar5 = FUN_662dffa0(param_2,local_18,local_24,&local_30);
          if (-1 < iVar5) {
            ppiStack_5c = (int **)0x662c474e;
            iVar5 = (**(code **)(*param_1 + 0x24))();
            if (iVar5 < 0) goto LAB_662c47e0;
            *(undefined4 *)(local_14 + 0x1a) = 1;
          }
          if (-1 < iVar5) {
            iVar1 = param_1[0x11];
            local_2c[0] = *(int *)(iVar1 + 4);
            if (iVar1 == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = (ushort)*(undefined4 *)(iVar1 + 0x10);
            }
            if (uVar8 != 0) {
              do {
                if (iVar5 != 0) break;
                piVar4 = (int *)FUN_662ed930(local_2c);
                iVar1 = *piVar4;
                if ((((*(short *)(iVar1 + 4) != local_24[0]) &&
                     (*(short *)(iVar1 + 6) == *(short *)(local_14 + 6))) &&
                    (*(int *)(iVar1 + 8) == local_30)) &&
                   ((*(int *)(iVar1 + 0x16) == 0 && (*(int *)(iVar1 + 0x26) == 0)))) {
                  *(undefined4 *)(iVar1 + 0x1e) = 1;
                  *(undefined4 *)(iVar1 + 0x1a) = 1;
                  *(undefined4 *)(local_14 + 0x1e) = 1;
                  *(undefined4 *)(local_14 + 0x1a) = 1;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < uVar8);
            }
          }
        }
LAB_662c47e0:
        local_18 = local_18 + 1;
      } while ((int)local_18 < (int)local_20);
    }
  }
  if (local_34 != (char *)0x0) {
    operator_delete(local_34);
  }
  piVar4 = local_10;
  if (local_10 != (int *)0x0) {
    FUN_662f2b40(local_10);
    operator_delete(piVar4);
  }
  FUN_662ef0f0(local_40);
  return iVar5;
}


