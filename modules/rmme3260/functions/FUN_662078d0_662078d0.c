/* Module: rmme3260.dll
   Function: FUN_662078d0
   Address: 662078d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662078d0(int param_1,byte *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4c [11];
  int local_20 [3];
  int local_14 [3];
  int *local_8;
  
  FUN_6621ad90(local_4c);
  FUN_662500f0(local_14);
  local_8 = (int *)0x0;
  iVar1 = FUN_6621afc0(local_4c,param_2,param_3);
  if ((-1 < iVar1) && (*(int *)(param_1 + 0x60) == 0)) {
    piVar2 = *(int **)(param_1 + 0x5c);
    if (piVar2 == (int *)0x0) {
      iVar1 = -0x7ffbfff9;
    }
    else {
      iVar1 = (**(code **)(*piVar2 + 0xc))(piVar2,&DAT_6626a628,param_1 + 0x60);
    }
  }
  if (((-1 < iVar1) && (*(int *)(param_1 + 0x60) != 0)) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))
                        (*(int **)(param_1 + 0x5c),&DAT_6626a5f8,&local_8), -1 < iVar1)) {
    if (local_8 == (int *)0x0) goto LAB_66207b6e;
    piVar2 = FUN_6621b200(local_4c,local_20);
    FUN_662503a0(local_14,piVar2);
    FUN_66250210(local_20);
    iVar5 = *local_8;
    iVar1 = *(int *)(local_14[0] + -8) + 1;
    iVar3 = FUN_662506b0(local_14,*(int *)(local_14[0] + -8));
    (**(code **)(iVar5 + 0x10))(local_8,iVar3,iVar1);
    (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))
              (*(int **)(param_1 + 0x60),s_Title_6626f51c,local_8);
    FUN_66250730(local_14,-1);
    if (local_8 != (int *)0x0) {
      (**(code **)(*local_8 + 8))(local_8);
      local_8 = (int *)0x0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))
                      (*(int **)(param_1 + 0x5c),&DAT_6626a5f8,&local_8);
    if (-1 < iVar1) {
      if (local_8 == (int *)0x0) goto LAB_66207b6e;
      piVar2 = FUN_6621b2e0(local_4c,local_20);
      FUN_662503a0(local_14,piVar2);
      FUN_66250210(local_20);
      iVar5 = *local_8;
      iVar1 = *(int *)(local_14[0] + -8) + 1;
      iVar3 = FUN_662506b0(local_14,*(int *)(local_14[0] + -8));
      (**(code **)(iVar5 + 0x10))(local_8,iVar3,iVar1);
      (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))
                (*(int **)(param_1 + 0x60),s_Author_6626f514,local_8);
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 8))(local_8);
        local_8 = (int *)0x0;
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))
                        (*(int **)(param_1 + 0x5c),&DAT_6626a5f8,&local_8);
      if (-1 < iVar1) {
        if (local_8 == (int *)0x0) goto LAB_66207b6e;
        piVar2 = FUN_6621b3c0(local_4c,local_20);
        FUN_662503a0(local_14,piVar2);
        FUN_66250210(local_20);
        iVar5 = *local_8;
        iVar1 = *(int *)(local_14[0] + -8) + 1;
        iVar3 = FUN_662506b0(local_14,*(int *)(local_14[0] + -8));
        (**(code **)(iVar5 + 0x10))(local_8,iVar3,iVar1);
        (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))
                  (*(int **)(param_1 + 0x60),s_Copyright_6626f508,local_8);
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
        iVar1 = (**(code **)(**(int **)(param_1 + 0x5c) + 0xc))
                          (*(int **)(param_1 + 0x5c),&DAT_6626a5f8,&local_8);
        if (-1 < iVar1) {
          if (local_8 == (int *)0x0) goto LAB_66207b6e;
          piVar2 = FUN_6621b4a0(local_4c,local_20);
          FUN_662503a0(local_14,piVar2);
          FUN_66250210(local_20);
          iVar3 = *local_8;
          iVar5 = *(int *)(local_14[0] + -8) + 1;
          iVar4 = FUN_662506b0(local_14,*(int *)(local_14[0] + -8));
          (**(code **)(iVar3 + 0x10))(local_8,iVar4,iVar5);
          (**(code **)(**(int **)(param_1 + 0x60) + 0x1c))
                    (*(int **)(param_1 + 0x60),s_Comment_6626f500,local_8);
          if (local_8 == (int *)0x0) goto LAB_66207b6e;
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
      }
    }
  }
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
LAB_66207b6e:
  FUN_66250210(local_14);
  FUN_6621ae10(local_4c);
  return iVar1;
}


