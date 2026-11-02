/* Module: vegas30.exe
   Function: FUN_005c3d90
   Address: 005c3d90
   Source: Ghidra pseudocode (Stage 10 batch) */


long __thiscall FUN_005c3d90(int param_1,int *param_2,LPCSTR param_3)

{
  int iVar1;
  int iVar2;
  LPCSTR pCVar3;
  uint *puVar4;
  uint local_40 [4];
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x128);
  if (iVar1 < 3) {
    puVar4 = local_40;
    for (iVar1 = 0xe; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pCVar3 = (LPCSTR)(param_1 + 0x170);
    if (param_3 != (LPCSTR)0x0) {
      pCVar3 = param_3;
    }
    local_40[2] = *(int *)(param_1 + 0x110);
    local_40[3] = *(int *)(param_1 + 0x114);
    local_40[1] = *(uint *)(param_1 + 0x134) >> 9 & 1;
    local_40[0] = 0x38;
    local_30 = *(undefined4 *)(param_1 + 0x108);
    if (pCVar3 == (LPCSTR)0x0) {
      local_2c = 0;
    }
    else {
      iVar1 = lstrlenA(pCVar3);
      local_2c = iVar1 * 2 + 2;
    }
    if (param_3 == (LPCSTR)0x0) {
      local_14 = *(int *)(param_1 + 0x164);
    }
    else {
      local_14 = DAT_00646de0;
      DAT_00646de0 = DAT_00646de0 + 1;
    }
    local_28 = 0;
    if (*(LPCSTR *)(param_1 + 0x150) != (LPCSTR)0x0) {
      iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x150));
      local_28 = iVar1 * 2 + 2;
    }
    local_24 = 0;
    if (*(LPCSTR *)(param_1 + 0x154) != (LPCSTR)0x0) {
      iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x154));
      local_24 = iVar1 * 2 + 2;
    }
    if (*(undefined4 **)(param_1 + 0x138) == (undefined4 *)0x0) {
      local_1c = 0;
    }
    else {
      local_1c = **(undefined4 **)(param_1 + 0x138);
    }
    local_20 = *(undefined4 *)(param_1 + 0x13c);
    if (*(undefined4 **)(param_1 + 0x130) != (undefined4 *)0x0) {
      local_18 = **(undefined4 **)(param_1 + 0x130);
    }
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_40,0x38,0);
    if (-1 < iVar1) {
      if (local_40[1] != 0) {
        iVar1 = FUN_005bbe70(param_2,pCVar3,local_40[1]);
      }
      if (-1 < iVar1) {
        if (local_40[2] != 0) {
          iVar1 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0x150),local_40[2]);
        }
        if (-1 < iVar1) {
          if (local_40[3] != 0) {
            iVar1 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0x154),local_40[3]);
          }
          if (-1 < iVar1) {
            iVar2 = FUN_005f03a0(pCVar3);
            if (iVar2 != 0) {
              iVar1 = FUN_005c3400(param_2,pCVar3,local_8 != 0);
            }
            if (-1 < iVar1) {
              if (*(int **)(param_1 + 0x130) != (int *)0x0) {
                local_8 = **(int **)(param_1 + 0x130);
                iVar2 = 0;
                if (0 < local_8) {
                  do {
                    iVar1 = FUN_005c2ae0(param_2,param_1);
                    if (iVar1 < 0) {
                      return iVar1;
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < local_8);
                }
              }
              if ((-1 < iVar1) && (iVar2 = 0, 0 < local_2c)) {
                do {
                  iVar1 = tSFVIDEOFILTERCACHE::Persist
                                    (*(IStream **)
                                      (*(int *)(*(int *)(param_1 + 0x138) + 8) + iVar2 * 4),
                                     (int)param_2);
                  if (iVar1 < 0) {
                    return iVar1;
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < local_2c);
              }
            }
          }
        }
      }
    }
  }
  else {
    puVar4 = local_40;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    pCVar3 = (LPCSTR)(param_1 + 0x170);
    if (param_3 != (LPCSTR)0x0) {
      pCVar3 = param_3;
    }
    local_40[2] = *(undefined4 *)(param_1 + 0x110);
    local_40[1] = *(uint *)(param_1 + 0x134) >> 9 & 1;
    local_40[3] = *(undefined4 *)(param_1 + 0x114);
    local_30 = *(undefined4 *)(param_1 + 0x120);
    local_2c = *(int *)(param_1 + 0x124);
    local_24 = *(int *)(param_1 + 300);
    local_20 = *(undefined4 *)(param_1 + 0x108);
    local_40[0] = 0x40;
    local_28 = iVar1;
    if (pCVar3 == (LPCSTR)0x0) {
      local_1c = 0;
    }
    else {
      iVar1 = lstrlenA(pCVar3);
      local_1c = iVar1 * 2 + 2;
    }
    if (param_3 == (LPCSTR)0x0) {
      local_4 = *(int *)(param_1 + 0x164);
    }
    else {
      local_4 = DAT_00646de0;
      DAT_00646de0 = DAT_00646de0 + 1;
    }
    local_18 = 0;
    if (*(LPCSTR *)(param_1 + 0x150) != (LPCSTR)0x0) {
      iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x150));
      local_18 = iVar1 * 2 + 2;
    }
    local_14 = 0;
    if (*(LPCSTR *)(param_1 + 0x154) != (LPCSTR)0x0) {
      iVar1 = lstrlenA(*(LPCSTR *)(param_1 + 0x154));
      local_14 = iVar1 * 2 + 2;
    }
    if (*(undefined4 **)(param_1 + 0x138) == (undefined4 *)0x0) {
      local_c = 0;
    }
    else {
      local_c = **(undefined4 **)(param_1 + 0x138);
    }
    local_10 = *(undefined4 *)(param_1 + 0x13c);
    if (*(int **)(param_1 + 0x130) != (int *)0x0) {
      local_8 = **(int **)(param_1 + 0x130);
    }
    iVar1 = (**(code **)(*param_2 + 0x10))(param_2,local_40,0x40,0);
    if (-1 < iVar1) {
      if (local_2c != 0) {
        iVar1 = FUN_005bbe70(param_2,pCVar3,local_2c);
      }
      if (-1 < iVar1) {
        if (local_28 != 0) {
          iVar1 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0x150),local_28);
        }
        if (-1 < iVar1) {
          if (local_24 != 0) {
            iVar1 = FUN_005bbe70(param_2,*(undefined4 *)(param_1 + 0x154),local_24);
          }
          if (-1 < iVar1) {
            iVar2 = FUN_005f03a0(pCVar3);
            if (iVar2 != 0) {
              iVar1 = FUN_005c3400(param_2,pCVar3,local_8 != 0);
            }
            if (-1 < iVar1) {
              if (*(int **)(param_1 + 0x130) != (int *)0x0) {
                local_8 = **(int **)(param_1 + 0x130);
                iVar2 = 0;
                if (0 < local_8) {
                  do {
                    iVar1 = FUN_005c2ae0(param_2,param_1);
                    if (iVar1 < 0) {
                      return iVar1;
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar2 < local_8);
                }
              }
              if ((-1 < iVar1) && (iVar2 = 0, 0 < local_1c)) {
                while (iVar1 = tSFVIDEOFILTERCACHE::Persist
                                         (*(IStream **)
                                           (*(int *)(*(int *)(param_1 + 0x138) + 8) + iVar2 * 4),
                                          (int)param_2), -1 < iVar1) {
                  iVar2 = iVar2 + 1;
                  if (local_1c <= iVar2) {
                    return iVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


