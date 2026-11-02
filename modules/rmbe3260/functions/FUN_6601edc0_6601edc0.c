/* Module: rmbe3260.dll
   Function: FUN_6601edc0
   Address: 6601edc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_6601edc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined4 local_50 [5];
  LPCSTR local_3c [3];
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar2 = 0;
  local_2c = (int *)0x0;
  local_8 = (int *)0x0;
  FUN_660522e0(local_50);
  local_18 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (((*(int *)(param_1 + 0xa8) != 0) &&
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x34))(*(int **)(param_1 + 0x84),&local_18)
      , local_18 != 0)) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x84) + 0x38))(*(int **)(param_1 + 0x84),&local_1c),
     local_1c != 0)) {
    local_20 = local_1c;
  }
  if (((*(int *)(param_1 + 0xac) != 0) &&
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x34))(*(int **)(param_1 + 0x88),&local_c),
      local_c != 0)) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x88) + 0x38))(*(int **)(param_1 + 0x88),&local_1c),
     local_20 < local_1c)) {
    local_20 = local_1c;
  }
  if (((*(int *)(param_1 + 0xb0) != 0) &&
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x34))(*(int **)(param_1 + 0x8c),&local_10)
      , local_10 != 0)) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x8c) + 0x38))(*(int **)(param_1 + 0x8c),&local_1c),
     local_20 < local_1c)) {
    local_20 = local_1c;
  }
  if (((*(int *)(param_1 + 0xb4) != 0) &&
      (iVar2 = (**(code **)(**(int **)(param_1 + 0x90) + 0x34))(*(int **)(param_1 + 0x90),&local_14)
      , local_14 != 0)) &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 0x90) + 0x38))(*(int **)(param_1 + 0x90),&local_1c),
     local_20 < local_1c)) {
    local_20 = local_1c;
  }
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x94) + 0x34))(*(int **)(param_1 + 0x94),&local_24);
  }
  if (((local_18 == 0) && (local_c == 0)) && ((local_10 == 0 && (local_14 == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  if (local_18 == 0) {
    if (((local_c == 0) && (local_10 == 0)) && ((local_14 == 0 && (local_24 == 0)))) {
      iVar2 = -0x7ffbfd9f;
      goto LAB_6601ef51;
    }
    if ((((local_c == 0) && (local_10 == 0)) && (local_14 == 0)) && (local_24 != 0)) {
      iVar2 = 0;
      goto LAB_6601ef51;
    }
  }
  bVar4 = iVar2 < 0;
  if (!bVar4) {
    iVar2 = FUN_6604ee00((void *)(param_1 + 0x148),1,s_RMACreateRM1Merge_6606dc5c,(int)&local_2c);
    bVar4 = iVar2 < 0;
    if (!bVar4) {
      iVar2 = (**(code **)*local_2c)(local_2c,&DAT_66066128,&local_8);
      if (local_2c != (int *)0x0) {
        (**(code **)(*local_2c + 8))(local_2c);
        local_2c = (int *)0x0;
      }
      bVar4 = iVar2 < 0;
    }
  }
  if ((!bVar4) && (local_8 != (int *)0x0)) {
    if ((*(int *)(param_1 + 0xbc) == 0) || ((local_18 == 0 && (local_c == 0)))) {
      if ((local_18 != 0) &&
         (iVar2 = (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0xf0)), iVar2 < 0)
         ) goto LAB_6601ef51;
      if (local_c != 0) {
        iVar2 = (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0xfc));
        goto joined_r0x6601f05d;
      }
    }
    else {
      iVar2 = (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x108));
joined_r0x6601f05d:
      if (iVar2 < 0) goto LAB_6601ef51;
    }
    if (((((local_10 == 0) ||
          (iVar2 = (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x114)),
          -1 < iVar2)) &&
         ((local_14 == 0 ||
          (iVar2 = (**(code **)(*local_8 + 0xc))(local_8,*(undefined4 *)(param_1 + 0x120)),
          -1 < iVar2)))) && (-1 < iVar2)) &&
       ((((local_18 != 0 || (local_c != 0)) || (local_10 != 0)) || (local_14 != 0)))) {
      local_28 = (int *)0x0;
      iVar2 = (**(code **)*local_8)(local_8,&DAT_66066138,&local_28);
      if (-1 < iVar2) {
        if (local_20 != 0) {
          (**(code **)(*local_28 + 0xc))(local_28,local_20);
        }
        (**(code **)(*local_28 + 0x10))(local_28,*(undefined4 *)(param_1 + 0x1d6));
        if (local_28 != (int *)0x0) {
          (**(code **)(*local_28 + 8))(local_28);
          local_28 = (int *)0x0;
        }
      }
      local_30 = (int *)0x0;
      local_20 = 0x80004005;
      if (((0 < *(int *)(param_1 + 0x1ca)) &&
          (local_20 = (**(code **)*local_8)(local_8,&DAT_66066298,&local_30), -1 < (int)local_20))
         && (iVar2 = 0, 0 < *(int *)(param_1 + 0x1ca))) {
        do {
          (**(code **)(*local_30 + 0xc))
                    (local_30,0,*(undefined4 *)(*(int *)(param_1 + 0x1c6) + iVar2 * 4));
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 0x1ca));
      }
      iVar2 = (**(code **)(*local_8 + 0x10))(local_8,*(undefined4 *)(param_1 + 0xe4));
      iVar3 = 0;
      if (-1 < (int)local_20) {
        if (0 < *(int *)(param_1 + 0x1ca)) {
          do {
            (**(code **)(*local_30 + 0x10))
                      (local_30,0,*(undefined4 *)(*(int *)(param_1 + 0x1c6) + iVar3 * 4));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(param_1 + 0x1ca));
        }
        (**(code **)(*local_30 + 8))(local_30);
      }
    }
    goto LAB_6601ef51;
  }
  if ((((*(int *)(param_1 + 0xbc) == 0) || ((local_18 == 0 && (local_c == 0)))) || (local_10 != 0))
     || ((local_14 != 0 || (local_24 != 0)))) {
    if (local_18 == 0) {
LAB_6601f1f8:
      if (local_c != 0) goto LAB_6601f201;
    }
    else {
      if (local_c == 0) {
        if (((local_10 == 0) && (local_14 == 0)) && (local_24 == 0)) goto LAB_6601f21c;
        goto LAB_6601f1f8;
      }
LAB_6601f201:
      if (((local_18 == 0) && (local_10 == 0)) && ((local_14 == 0 && (local_24 == 0))))
      goto LAB_6601f21c;
    }
    iVar2 = -0x7ffbfd9e;
  }
  else {
LAB_6601f21c:
    FUN_6605b650(local_3c);
    if (*(int *)(param_1 + 0xbc) == 0) {
      if (local_18 == 0) {
        if (local_c == 0) {
          iVar2 = -0x7ffbfd9e;
        }
        else {
          FUN_6605b900(local_3c,(int *)(param_1 + 0xfc));
        }
      }
      else {
        FUN_6605b900(local_3c,(int *)(param_1 + 0xf0));
      }
    }
    else {
      FUN_6605b900(local_3c,(int *)(param_1 + 0x108));
    }
    if (0 < *(int *)(local_3c[0] + -8)) {
      CopyFileA(local_3c[0],*(LPCSTR *)(param_1 + 0xe4),0);
      iVar2 = 0;
    }
    FUN_6605b770((int *)local_3c);
  }
LAB_6601ef51:
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  if (((iVar2 < 0) && (iVar2 != -0x7ffbfd9f)) && (iVar2 != -0x7ffbfd9e)) {
    iVar2 = -0x7ffbfda5;
  }
  FUN_66052300(local_50);
  return iVar2;
}


