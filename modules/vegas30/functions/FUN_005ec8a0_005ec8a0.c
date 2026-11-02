/* Module: vegas30.exe
   Function: FUN_005ec8a0
   Address: 005ec8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_005ec8a0(char *param_1,undefined4 param_2,int *param_3,uint param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  LPCVOID pvVar4;
  int iVar5;
  int iVar6;
  HGLOBAL pvVar7;
  DWORD DVar8;
  int iVar9;
  uint uVar10;
  int local_18;
  int local_14;
  char *local_10;
  int local_c;
  LPCVOID local_8;
  uint local_4;
  
  *param_3 = 0;
  local_14 = 0;
  iVar9 = -0x7fffbffb;
  iVar6 = 0;
  if (*param_1 != '\0') {
    iVar9 = -0x7ffb1ff6;
    iVar5 = FUN_00436ff0(&param_2);
    if ((*(byte *)(iVar5 + 0x18) & 2) != 2) {
      iVar9 = 0;
      iVar6 = iVar5;
    }
  }
  uVar1 = param_4;
  if (-1 < iVar9) {
    iVar6 = *(int *)(iVar6 + 4);
    *param_3 = iVar6;
    if ((*(byte *)(iVar6 + 0x134) & 0x20) == 0) {
      return iVar9;
    }
    if ((param_4 & 4) != 0) {
      return iVar9;
    }
    local_14 = iVar9;
    iVar6 = FUN_005effc0(0);
    if (-1 < iVar6) {
      return iVar6;
    }
    if ((uVar1 & 1) == 0) {
      return iVar6;
    }
    return 0;
  }
  local_14 = -0x7ff8fff2;
  local_10 = (char *)FUN_005ec620();
  if (local_10 == (char *)0x0) {
    return local_14;
  }
  local_8 = (LPCVOID)0x0;
  local_14 = 0;
  local_4 = 0;
  local_18 = 0;
  if (param_1 != local_10) {
    iVar9 = -0x7fffbffb;
    if (*local_10 != '\0') {
      iVar9 = -0x7ffb1ff6;
      iVar5 = FUN_00436ff0(&param_2);
      if ((*(byte *)(iVar5 + 0x18) & 2) != 2) {
        iVar9 = 0;
        iVar6 = iVar5;
      }
    }
    if (iVar9 < 0) {
LAB_005ecba4:
      local_14 = 0;
    }
    else {
      local_8 = *(LPCVOID *)(iVar6 + 4);
      local_c = (int)local_8 + 0x170;
      local_4 = 1;
      iVar6 = -0x7fffbffb;
      if (*param_1 != '\0') {
        local_18 = 0;
        local_14 = iVar9;
        iVar6 = FUN_005edce0(&local_c,&local_8,&local_18);
        if (-1 < iVar6) {
          if (local_18 != *(int *)(param_1 + 8)) {
            do {
              iVar9 = *(int *)(local_18 + 0xc);
              if ((~*(byte *)(iVar9 + 0x18) & 1) == 0) break;
              iVar5 = *(int *)(*(int *)(iVar9 + 0xc) + 0x10);
              if (iVar9 == iVar5) {
                iVar5 = *(int *)(*(int *)(iVar9 + 0xc) + 0x14);
                if ((~*(byte *)(iVar5 + 0x18) & 1) == 0) {
                  if (local_18 == *(int *)(iVar9 + 0x14)) {
                    local_18 = iVar9;
                    FUN_005edc40(iVar9);
                  }
                  *(byte *)(*(int *)(local_18 + 0xc) + 0x18) =
                       *(byte *)(*(int *)(local_18 + 0xc) + 0x18) & 0xfe ^ 1;
                  iVar9 = *(int *)(*(int *)(local_18 + 0xc) + 0xc);
                  *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
                  FUN_005edc90(*(undefined4 *)(*(int *)(local_18 + 0xc) + 0xc));
                }
                else {
LAB_005eca2a:
                  *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe ^ 1;
                  *(byte *)(iVar5 + 0x18) = *(byte *)(iVar5 + 0x18) & 0xfe ^ 1;
                  iVar9 = *(int *)(*(int *)(local_18 + 0xc) + 0xc);
                  *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
                  local_18 = *(int *)(*(int *)(local_18 + 0xc) + 0xc);
                }
              }
              else {
                if ((~*(byte *)(iVar5 + 0x18) & 1) != 0) goto LAB_005eca2a;
                if (local_18 == *(int *)(iVar9 + 0x10)) {
                  local_18 = iVar9;
                  FUN_005edc90(iVar9);
                }
                *(byte *)(*(int *)(local_18 + 0xc) + 0x18) =
                     *(byte *)(*(int *)(local_18 + 0xc) + 0x18) & 0xfe ^ 1;
                iVar9 = *(int *)(*(int *)(local_18 + 0xc) + 0xc);
                *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
                FUN_005edc40(*(undefined4 *)(*(int *)(local_18 + 0xc) + 0xc));
              }
            } while (local_18 != *(int *)(param_1 + 8));
          }
          *(byte *)(*(int *)(param_1 + 8) + 0x18) =
               *(byte *)(*(int *)(param_1 + 8) + 0x18) & 0xfe ^ 1;
        }
      }
      if (iVar6 < 0) {
        return iVar6;
      }
      *(int *)((int)local_8 + 0x140) = *(int *)((int)local_8 + 0x140) + 1;
      *(uint *)((int)local_8 + 0x134) = *(uint *)((int)local_8 + 0x134) | 0x10;
      if (*(int *)(param_1 + 0x1c) != 0) {
        DAT_0064767c = DAT_0064767c | 0x100;
      }
      local_18 = 1;
      *param_3 = (int)local_8;
      if (((*(byte *)((int)local_8 + 0x134) & 0x20) != 0) && ((param_4 & 4) == 0)) {
        local_14 = iVar6;
        iVar6 = FUN_005effc0(0);
        local_14 = iVar6;
        if (-1 < iVar6) goto LAB_005ecbb8;
        if ((param_4 & 1) != 0) goto LAB_005ecba4;
      }
      local_14 = iVar6;
      if (iVar6 < 0) {
        return iVar6;
      }
    }
  }
LAB_005ecbb8:
  iVar6 = local_14;
  if (*param_3 != 0) goto LAB_005ed08e;
  local_8 = (LPCVOID)0x0;
  local_14 = FUN_005f0ea0(param_2,&local_8);
  if (local_14 < 0) {
    iVar6 = local_14;
    if ((param_4 & 1) == 0) {
      if (local_8 != (LPCVOID)0x0) {
        FUN_005f3120(&local_14,0,0);
        pvVar4 = local_8;
        if (local_8 != (LPCVOID)0x0) {
          FUN_005efea0();
          pvVar7 = GlobalHandle(pvVar4);
          GlobalUnlock(pvVar7);
          pvVar7 = GlobalHandle(pvVar4);
          GlobalFree(pvVar7);
        }
        local_8 = (LPCVOID)0x0;
        iVar6 = local_14;
      }
      goto LAB_005ed08e;
    }
    if (local_8 == (LPCVOID)0x0) goto LAB_005ed08e;
  }
  local_4 = (uint)(param_1 != local_10);
  local_c = (int)local_8 + 0x170;
  iVar6 = -0x7fffbffb;
  if (*param_1 != '\0') {
    param_4 = 0;
    iVar6 = FUN_005edce0(&local_c,&local_8,&param_4);
    if (-1 < iVar6) {
      if (param_4 != *(uint *)(param_1 + 8)) {
        do {
          uVar1 = *(uint *)(param_4 + 0xc);
          if ((~*(byte *)(uVar1 + 0x18) & 1) == 0) break;
          uVar10 = *(uint *)(*(int *)(uVar1 + 0xc) + 0x10);
          if (uVar1 == uVar10) {
            uVar10 = *(uint *)(*(int *)(uVar1 + 0xc) + 0x14);
            if ((~*(byte *)(uVar10 + 0x18) & 1) == 0) {
              if (param_4 == *(uint *)(uVar1 + 0x14)) {
                param_4 = uVar1;
                FUN_005edc40(uVar1);
              }
              *(byte *)(*(int *)(param_4 + 0xc) + 0x18) =
                   *(byte *)(*(int *)(param_4 + 0xc) + 0x18) & 0xfe ^ 1;
              iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 0xc);
              *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
              FUN_005edc90(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0xc));
            }
            else {
LAB_005eccd6:
              *(byte *)(uVar1 + 0x18) = *(byte *)(uVar1 + 0x18) & 0xfe ^ 1;
              *(byte *)(uVar10 + 0x18) = *(byte *)(uVar10 + 0x18) & 0xfe ^ 1;
              iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 0xc);
              *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
              param_4 = *(uint *)(*(int *)(param_4 + 0xc) + 0xc);
            }
          }
          else {
            if ((~*(byte *)(uVar10 + 0x18) & 1) != 0) goto LAB_005eccd6;
            if (param_4 == *(uint *)(uVar1 + 0x10)) {
              param_4 = uVar1;
              FUN_005edc90(uVar1);
            }
            *(byte *)(*(int *)(param_4 + 0xc) + 0x18) =
                 *(byte *)(*(int *)(param_4 + 0xc) + 0x18) & 0xfe ^ 1;
            iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 0xc);
            *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
            FUN_005edc40(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0xc));
          }
        } while (param_4 != *(uint *)(param_1 + 8));
      }
      *(byte *)(*(int *)(param_1 + 8) + 0x18) = *(byte *)(*(int *)(param_1 + 8) + 0x18) & 0xfe ^ 1;
    }
  }
  pcVar3 = local_10;
  iVar9 = 0;
  if (-1 < iVar6) {
    *(uint *)((int)local_8 + 0x134) = *(uint *)((int)local_8 + 0x134) | 0x10;
    if (param_1 == local_10) {
      if (*(int **)((int)local_8 + 0x130) != (int *)0x0) {
        iVar9 = **(int **)((int)local_8 + 0x130);
      }
      iVar5 = 0;
      if (0 < iVar9) {
        do {
          iVar2 = *(int *)(*(int *)(*(int *)((int)local_8 + 0x130) + 8) + iVar5 * 4);
          uVar1 = *(uint *)(iVar2 + 0x8c);
          if (((uVar1 & 0x60) != 0) && ((uVar1 & 2) == 0)) {
            *(uint *)(iVar2 + 0x8c) = uVar1 & 0xfffffffc;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar9);
      }
    }
    else {
      iVar6 = -0x7fffbffb;
      *(int *)((int)local_8 + 0x140) = *(int *)((int)local_8 + 0x140) + 1;
      local_c = (int)local_8 + 0x170;
      local_4 = 0;
      if (*local_10 != '\0') {
        param_4 = 0;
        iVar6 = FUN_005edce0(&local_c,&local_8,&param_4);
        if (-1 < iVar6) {
          if (param_4 != *(uint *)(pcVar3 + 8)) {
            do {
              uVar1 = *(uint *)(param_4 + 0xc);
              if ((~*(byte *)(uVar1 + 0x18) & 1) == 0) break;
              uVar10 = *(uint *)(*(int *)(uVar1 + 0xc) + 0x10);
              if (uVar1 == uVar10) {
                uVar10 = *(uint *)(*(int *)(uVar1 + 0xc) + 0x14);
                if ((~*(byte *)(uVar10 + 0x18) & 1) == 0) {
                  if (param_4 == *(uint *)(uVar1 + 0x14)) {
                    param_4 = uVar1;
                    FUN_005edc40(uVar1);
                  }
                  *(byte *)(*(int *)(param_4 + 0xc) + 0x18) =
                       *(byte *)(*(int *)(param_4 + 0xc) + 0x18) & 0xfe ^ 1;
                  iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 0xc);
                  *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
                  FUN_005edc90(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0xc));
                }
                else {
LAB_005eced0:
                  *(byte *)(uVar1 + 0x18) = *(byte *)(uVar1 + 0x18) & 0xfe ^ 1;
                  *(byte *)(uVar10 + 0x18) = *(byte *)(uVar10 + 0x18) & 0xfe ^ 1;
                  iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 0xc);
                  *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
                  param_4 = *(uint *)(*(int *)(param_4 + 0xc) + 0xc);
                }
              }
              else {
                if ((~*(byte *)(uVar10 + 0x18) & 1) != 0) goto LAB_005eced0;
                if (param_4 == *(uint *)(uVar1 + 0x10)) {
                  param_4 = uVar1;
                  FUN_005edc90(uVar1);
                }
                *(byte *)(*(int *)(param_4 + 0xc) + 0x18) =
                     *(byte *)(*(int *)(param_4 + 0xc) + 0x18) & 0xfe ^ 1;
                iVar9 = *(int *)(*(int *)(param_4 + 0xc) + 0xc);
                *(byte *)(iVar9 + 0x18) = *(byte *)(iVar9 + 0x18) & 0xfe;
                FUN_005edc40(*(undefined4 *)(*(int *)(param_4 + 0xc) + 0xc));
              }
            } while (param_4 != *(uint *)(pcVar3 + 8));
          }
          *(byte *)(*(int *)(pcVar3 + 8) + 0x18) = *(byte *)(*(int *)(pcVar3 + 8) + 0x18) & 0xfe ^ 1
          ;
        }
      }
      if (iVar6 < 0) {
        *(int *)((int)local_8 + 0x140) = *(int *)((int)local_8 + 0x140) + -1;
        param_4 = (int)local_8 + 0x170;
        if (((*param_1 != '\0') &&
            (iVar9 = FUN_00436ff0(&param_4), (*(byte *)(iVar9 + 0x18) & 2) != 2)) &&
           (local_c = iVar9, iVar9 = FUN_005ed7d0(&local_c,0), pvVar4 = local_8, -1 < iVar9)) {
          if (local_8 != (LPCVOID)0x0) {
            FUN_005efea0();
            pvVar7 = GlobalHandle(pvVar4);
            GlobalUnlock(pvVar7);
            pvVar7 = GlobalHandle(pvVar4);
            GlobalFree(pvVar7);
          }
          local_8 = (LPCVOID)0x0;
        }
      }
      else {
        local_18 = 1;
      }
    }
    if (-1 < iVar6) {
      if (*(int *)(param_1 + 0x1c) != 0) {
        DAT_0064767c = DAT_0064767c | 0x100;
      }
      *param_3 = (int)local_8;
      iVar6 = local_14;
    }
  }
LAB_005ed08e:
  local_14 = iVar6;
  if ((-1 < local_14) && (local_18 != 0)) {
    if (param_5 != (int *)0x0) {
      *param_5 = local_18;
    }
    DVar8 = GetCurrentThreadId();
    if (DVar8 == DAT_00647208) {
      PostMessageA(DAT_00647624,0x666,0,*(LPARAM *)((int)local_8 + 0x164));
    }
  }
  return local_14;
}


