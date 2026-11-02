/* Module: rmbe3260.dll
   Function: FUN_66022920
   Address: 66022920
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_66022920(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int local_34;
  int local_30;
  float local_24;
  float local_20;
  float local_1c;
  uint local_18;
  void *local_14;
  int local_10;
  int *local_c;
  int *local_8;
  
  local_c = (int *)0x0;
  local_14 = param_1;
  local_10 = (**(code **)**(undefined4 **)((int)param_1 + 0x28))
                       (*(undefined4 **)((int)param_1 + 0x28),&DAT_66065898,&local_c);
  if (-1 < local_10) {
    if (((*(int *)((int)param_1 + 0x30) != 0) && (*(int *)((int)param_1 + 0x34) != 0)) &&
       (*(int *)((int)param_1 + 0x38) != 0)) {
      FUN_6605cda0(&local_34);
      local_18 = 0;
      (**(code **)(*local_c + 0x18))(local_c,&local_18);
      uVar5 = 0;
      if (local_18 != 0) {
        do {
          iVar6 = 0;
          local_1c = 0.0;
          (**(code **)(*local_c + 0x1c))(local_c,uVar5,&local_1c);
          local_8 = (int *)0x0;
          local_10 = (**(code **)(**(int **)((int)param_1 + 0x34) + 0xc))
                               (*(int **)((int)param_1 + 0x34),local_1c,&local_8);
          local_20 = 0.0;
          if (-1 < local_10) {
            local_10 = (**(code **)(*local_8 + 0x1c))(local_8,&local_20);
          }
          bVar2 = false;
          if (-1 < local_10) {
            if (0 < local_30) {
              do {
                piVar1 = *(int **)(local_34 + iVar6 * 4);
                local_24 = 0.0;
                if (piVar1 != (int *)0x0) {
                  local_10 = (**(code **)(*piVar1 + 0x1c))(piVar1,&local_24);
                }
                if (local_20 < local_24) {
                  FUN_6605cf60(&local_34,iVar6,local_8,1);
                  bVar2 = true;
                  break;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < local_30);
            }
            if (!bVar2) {
              FUN_6605cf30(&local_34,local_30,local_8);
              bVar2 = true;
            }
          }
          if ((!bVar2) && (local_8 != (int *)0x0)) {
            (**(code **)(*local_8 + 8))(local_8);
            local_8 = (int *)0x0;
          }
          uVar5 = uVar5 + 1;
          param_1 = local_14;
        } while (uVar5 < local_18);
      }
      iVar6 = 0;
      if (0 < local_30) {
        do {
          piVar7 = (int *)0x0;
          piVar1 = *(int **)(local_34 + iVar6 * 4);
          if (piVar1 != (int *)0x0) {
            if (0 < iVar6) {
              piVar7 = *(int **)(local_34 + -4 + iVar6 * 4);
            }
            local_1c = *(float *)((int)local_14 + 0x1c);
            if ((local_1c != 0.0) && (piVar7 != (int *)0x0)) {
              local_20 = 0.0;
              local_24 = 0.0;
              (**(code **)(*piVar1 + 0x1c))(piVar1,&local_20);
              local_10 = (**(code **)(*piVar7 + 0x1c))(piVar7,&local_24);
              if (local_20 <= local_24 + local_24) {
                local_1c = 0.0;
              }
            }
            if ((*(int *)((int)local_14 + 0x1c) == 0) || (iVar6 != 0)) {
              iVar4 = 0;
            }
            else {
              iVar4 = 1;
            }
            if ((*(int *)((int)local_14 + 0x1c) == 0) || (iVar6 != 0)) {
              iVar3 = 0;
            }
            else {
              iVar3 = 1;
            }
            FUN_66022b90(local_14,local_c,piVar1,local_1c,iVar4,iVar3);
            if (*(int *)((int)local_14 + 0x1c) == 0) break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_30);
      }
      iVar6 = 0;
      if (local_c != (int *)0x0) {
        (**(code **)(*local_c + 8))(local_c);
        local_c = (int *)0x0;
      }
      if (0 < local_30) {
        do {
          piVar1 = *(int **)(local_34 + iVar6 * 4);
          if (piVar1 != (int *)0x0) {
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < local_30);
      }
      FUN_6605cdc0(&local_34,0,0xffffffff);
      FUN_6605cdb0(&local_34);
      return local_10;
    }
    local_10 = -0x7ffbfff9;
  }
  return local_10;
}


