/* Module: vegas30.exe
   Function: FUN_005c1560
   Address: 005c1560
   Source: Ghidra pseudocode (Stage 10 batch) */


LPCWSTR FUN_005c1560(LPCWSTR param_1,int param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  LPSTR lpMultiByteStr;
  LPCWSTR pWVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  WCHAR WVar12;
  int *piStack_2a4;
  LPCWSTR pWStack_2a0;
  undefined4 uStack_29c;
  LPCWSTR *ppWStack_298;
  int *piStack_294;
  int *piStack_290;
  LPCWSTR *ppWStack_28c;
  undefined4 uStack_288;
  int **ppiStack_284;
  int *piStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  int **ppiStack_270;
  CHAR local_260 [259];
  undefined1 local_15d;
  CHAR local_15c [259];
  undefined1 local_59;
  int local_58 [8];
  LPCWSTR local_38;
  undefined4 local_34;
  LPCWSTR local_30;
  LPCWSTR local_2c;
  LPCWSTR local_28;
  undefined4 *local_20;
  int *local_1c;
  LPCWSTR local_18;
  undefined1 local_14 [4];
  LPCWSTR local_10;
  LPCWSTR local_c;
  LPCWSTR local_8;
  
  piVar3 = (int *)param_1;
  ppiStack_270 = &local_1c;
  uStack_274 = 1;
  uStack_278 = 0;
  uStack_27c = 0;
  piStack_280 = (int *)param_1;
  local_8 = (LPCWSTR)0x8004e008;
  local_20 = (undefined4 *)0x0;
  local_c = (LPCWSTR)0x0;
  ppiStack_284 = (int **)0x5c1590;
  iVar4 = (**(code **)(*(int *)param_1 + 0x14))();
  if (-1 < iVar4) {
    ppiStack_284 = (int **)&param_1;
    ppWStack_28c = &local_c;
    uStack_288 = 4;
    piStack_290 = piVar3;
    piStack_294 = (int *)0x5c15a4;
    iVar4 = (**(code **)(*piVar3 + 0xc))();
    if (-1 < iVar4) {
      if (param_1 != (LPCWSTR)0x4) {
        local_c = (LPCWSTR)0x0;
      }
      ppiStack_284 = (int **)0x0;
      uStack_288 = 0;
      ppWStack_28c = (LPCWSTR *)local_18;
      piStack_290 = local_1c;
      piStack_294 = piVar3;
      ppWStack_298 = (LPCWSTR *)0x5c15c1;
      (**(code **)(*piVar3 + 0x14))();
    }
  }
  ppiStack_284 = &local_1c;
  uStack_288 = 1;
  ppWStack_28c = (LPCWSTR *)0x0;
  piStack_290 = (int *)0x0;
  piStack_294 = piVar3;
  param_1 = (LPCWSTR)0x0;
  ppWStack_298 = (LPCWSTR *)0x5c15d6;
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if (iVar4 < 0) {
LAB_005c160f:
    if (param_1 != (LPCWSTR)0x38) goto LAB_005c17d6;
    pWStack_2a0 = (LPCWSTR)local_58;
    piVar11 = local_58;
    for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar11 = 0;
      piVar11 = piVar11 + 1;
    }
    ppWStack_298 = &local_10;
    uStack_29c = 0x38;
    piStack_2a4 = piVar3;
    local_8 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))();
    if ((int)local_8 < 0) goto LAB_005c1e2d;
    if ((local_10 == (LPCWSTR)0x38) && (local_58[1] == 2)) {
      lpMultiByteStr = (LPSTR)0x0;
      if (local_38 != (LPCWSTR)0x0) {
        uVar10 = (uint)local_38 >> 1;
        local_8 = (LPCWSTR)0x8007000e;
        lpMultiByteStr = calloc(1,uVar10);
        if (lpMultiByteStr == (LPSTR)0x0) goto LAB_005c1e2d;
        local_8 = local_38;
        param_1 = local_38;
        if ((LPCWSTR)(uVar10 * 2) <= local_38) {
          param_1 = (LPCWSTR)(uVar10 * 2);
        }
        FUN_0060ac30();
        local_c = (LPCWSTR)&piStack_2a4;
        local_18 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))();
        if (-1 < (int)local_18) {
          if ((local_c == (LPCWSTR)0x0) || (*local_c != L'\0')) {
            WideCharToMultiByte(0,0,local_c,-1,lpMultiByteStr,uVar10,(LPCSTR)0x0,(LPBOOL)0x0);
          }
          else {
            *lpMultiByteStr = '\0';
          }
          lpMultiByteStr[uVar10 - 1] = '\0';
          if (param_1 < local_8) {
            (**(code **)(*piVar3 + 0x14))();
            lpMultiByteStr[uVar10 - 1] = '\0';
          }
        }
        local_8 = local_18;
      }
      if (-1 < (int)local_8) {
        param_1 = (LPCWSTR)0x0;
        local_8 = (LPCWSTR)FUN_005ed0e0();
        if ((int)local_8 < 0) {
          local_8 = (LPCWSTR)0x80004005;
        }
        else {
          puVar5 = calloc(1,0x28);
          local_20 = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0x10;
            puVar5[1] = 0;
            puVar5[6] = param_1;
            if ((param_3 == 0) || (iVar4 = FUN_005ec620(), iVar4 != 0)) {
              FUN_005ed3f0();
            }
            puVar5[8] = lpMultiByteStr;
            puVar5[7] = local_58[2];
            puVar5[2] = local_58[4];
            puVar5[3] = local_58[5];
            puVar5[4] = local_58[6];
            puVar5[5] = local_58[7];
            goto LAB_005c1e2d;
          }
          local_8 = (LPCWSTR)0x8007000e;
        }
      }
      if (lpMultiByteStr != (LPSTR)0x0) {
        free(lpMultiByteStr);
      }
      goto LAB_005c1e2d;
    }
LAB_005c1e26:
    local_8 = (LPCWSTR)0x8004e008;
    goto LAB_005c1e2d;
  }
  ppWStack_298 = &local_c;
  pWStack_2a0 = (LPCWSTR)&param_1;
  uStack_29c = 4;
  piStack_2a4 = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0xc))();
  if (iVar4 < 0) goto LAB_005c160f;
  if (local_c != (LPCWSTR)0x4) {
    param_1 = (LPCWSTR)0x0;
  }
  ppWStack_298 = (LPCWSTR *)0x0;
  uStack_29c = 0;
  pWStack_2a0 = local_18;
  piStack_2a4 = local_1c;
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if (-1 < iVar4) goto LAB_005c160f;
LAB_005c17d6:
  ppWStack_298 = (LPCWSTR *)local_14;
  uStack_29c = 1;
  pWStack_2a0 = (LPCWSTR)0x0;
  piStack_2a4 = (int *)0x0;
  param_1 = (LPCWSTR)0x0;
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if ((iVar4 < 0) || (iVar4 = (**(code **)(*piVar3 + 0xc))(), iVar4 < 0)) {
LAB_005c1824:
    if (param_1 == (LPCWSTR)0x28) {
      piVar11 = local_58 + 4;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      local_8 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))();
      if ((int)local_8 < 0) goto LAB_005c1e2d;
      if (local_18 == (LPCWSTR)0x28) {
        param_1 = (LPCWSTR)0x0;
        if (local_28 != (LPCWSTR)0x0) {
          uVar10 = (uint)local_28 >> 1;
          local_8 = (LPCWSTR)0x8007000e;
          param_1 = calloc(1,uVar10);
          if (param_1 == (LPCWSTR)0x0) goto LAB_005c1e2d;
          local_8 = local_28;
          if ((LPCWSTR)(uVar10 * 2) <= local_28) {
            local_8 = (LPCWSTR)(uVar10 * 2);
          }
          FUN_0060ac30();
          local_c = (LPCWSTR)&stack0xfffffd48;
          local_10 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))();
          if (-1 < (int)local_10) {
            if ((local_c == (LPCWSTR)0x0) || (*local_c != L'\0')) {
              WideCharToMultiByte(0,0,local_c,-1,(LPSTR)param_1,uVar10,(LPCSTR)0x0,(LPBOOL)0x0);
            }
            else {
              *(CHAR *)param_1 = '\0';
            }
            *(CHAR *)((int)param_1 + (uVar10 - 1)) = '\0';
            if (local_8 < local_28) {
              (**(code **)(*piVar3 + 0x14))();
              *(CHAR *)((int)param_1 + (uVar10 - 1)) = '\0';
            }
          }
          local_8 = local_10;
        }
        iVar4 = param_2;
        if (-1 < (int)local_8) {
          iVar8 = 0;
          pcVar1 = (char *)(param_2 + 0x1e4);
          if (*(char *)(param_2 + 0x1e4) == '\0') goto LAB_005c1979;
          iVar8 = *(int *)(param_2 + 0x1ec);
          if ((*(byte *)(iVar8 + 0x18) & 2) != 2) {
            bVar2 = *(byte *)(*(int *)(iVar8 + 0x10) + 0x18);
            iVar6 = *(int *)(iVar8 + 0x10);
            while ((bVar2 & 2) != 2) {
              bVar2 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
              iVar8 = iVar6;
              iVar6 = *(int *)(iVar6 + 0x10);
            }
          }
LAB_005c196f:
          if (*pcVar1 == '\0') {
LAB_005c1979:
            iVar6 = 0;
          }
          else {
            iVar6 = *(int *)(iVar4 + 0x1f0);
          }
          if (iVar8 == iVar6) goto LAB_005c1a63;
          iVar6 = FUN_005f2a80();
          if (iVar6 == 0) {
            if ((iVar8 != 0) && ((*(byte *)(iVar8 + 0x18) & 2) != 2)) {
              iVar6 = *(int *)(iVar8 + 0x14);
              iVar9 = iVar8;
              if ((*(byte *)(iVar6 + 0x18) & 2) == 2) {
                do {
                  iVar8 = *(int *)(iVar9 + 0xc);
                  if (*(int *)(iVar8 + 0x10) == iVar9) break;
                  iVar9 = iVar8;
                } while ((*(byte *)(iVar8 + 0x18) & 2) != 2);
              }
              else {
                bVar2 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
                iVar8 = iVar6;
                iVar6 = *(int *)(iVar6 + 0x10);
                while ((bVar2 & 2) != 2) {
                  bVar2 = *(byte *)(*(int *)(iVar6 + 0x10) + 0x18);
                  iVar8 = iVar6;
                  iVar6 = *(int *)(iVar6 + 0x10);
                }
              }
            }
            goto LAB_005c196f;
          }
          iVar4 = *(int *)(iVar8 + 4);
          if (iVar4 == 0) {
LAB_005c1a63:
            local_8 = (LPCWSTR)0x80004005;
          }
          else {
            puVar5 = calloc(1,0x28);
            local_20 = puVar5;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0x10;
              puVar5[1] = 0;
              puVar5[6] = iVar4;
              if ((param_3 == 0) || (iVar4 = FUN_005ec620(), iVar4 != 0)) {
                FUN_005ed3f0();
              }
              puVar5[8] = param_1;
              puVar5[7] = local_58[6];
              puVar5[2] = local_38;
              puVar5[3] = local_34;
              puVar5[4] = local_30;
              puVar5[5] = local_2c;
              goto LAB_005c1e2d;
            }
            local_8 = (LPCWSTR)0x8007000e;
          }
        }
        if (param_1 != (LPCWSTR)0x0) {
          free(param_1);
        }
        goto LAB_005c1e2d;
      }
      goto LAB_005c1e26;
    }
  }
  else {
    if (local_18 != (LPCWSTR)0x4) {
      param_1 = (LPCWSTR)0x0;
    }
    iVar4 = (**(code **)(*piVar3 + 0x14))();
    if (-1 < iVar4) goto LAB_005c1824;
  }
  param_1 = (LPCWSTR)0x0;
  iVar4 = (**(code **)(*piVar3 + 0x14))();
  if ((-1 < iVar4) && (iVar4 = (**(code **)(*piVar3 + 0xc))(), -1 < iVar4)) {
    if (local_18 != (LPCWSTR)0x4) {
      param_1 = (LPCWSTR)0x0;
    }
    iVar4 = (**(code **)(*piVar3 + 0x14))(piVar3);
    if (iVar4 < 0) goto LAB_005c1e2d;
  }
  if (param_1 != (LPCWSTR)0x30) goto LAB_005c1e2d;
  piVar11 = local_58 + 2;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = piVar3;
  local_8 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))();
  WVar12 = (WCHAR)piVar11;
  if ((int)local_8 < 0) goto LAB_005c1e2d;
  if (local_18 != (LPCWSTR)&DAT_00000030) goto LAB_005c1e26;
  param_1 = (LPCWSTR)0x0;
  if (local_30 != (LPCWSTR)0x0) {
    uVar10 = (uint)local_30 >> 1;
    local_8 = (LPCWSTR)0x8007000e;
    param_1 = calloc(1,uVar10);
    if (param_1 == (LPCWSTR)0x0) goto LAB_005c1e2d;
    local_8 = local_30;
    if ((LPCWSTR)(uVar10 * 2) <= local_30) {
      local_8 = (LPCWSTR)(uVar10 * 2);
    }
    FUN_0060ac30();
    local_c = (LPCWSTR)&stack0xfffffd34;
    local_10 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))(piVar3,&stack0xfffffd34,local_8,&local_8);
    if (-1 < (int)local_10) {
      if ((local_c == (LPCWSTR)0x0) || (*local_c != L'\0')) {
        WideCharToMultiByte(0,0,local_c,-1,(LPSTR)param_1,uVar10,(LPCSTR)0x0,(LPBOOL)0x0);
      }
      else {
        *(CHAR *)param_1 = '\0';
      }
      *(CHAR *)((int)param_1 + (uVar10 - 1)) = '\0';
      if (local_8 < local_30) {
        (**(code **)(*piVar3 + 0x14))(piVar3,(int)local_30 - (int)local_8,0,1,0);
        *(CHAR *)((int)param_1 + (uVar10 - 1)) = '\0';
      }
    }
    local_8 = local_10;
  }
  if (-1 < (int)local_8) {
    local_15c[0] = '\0';
    pWVar7 = local_8;
    if (local_2c != (LPCWSTR)0x0) {
      local_10 = local_2c;
      pWVar7 = local_2c;
      if ((LPCWSTR)0x207 < local_2c) {
        pWVar7 = (LPCWSTR)0x208;
      }
      local_c = pWVar7;
      FUN_0060ac30();
      pWVar7 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))(piVar3,&stack0xfffffd34,pWVar7,&local_c);
      if (-1 < (int)pWVar7) {
        if ((&stack0x00000000 == (undefined1 *)0x2cc) || (WVar12 != L'\0')) {
          WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd34,-1,local_15c,0x104,(LPCSTR)0x0,
                              (LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x15c) {
          local_15c[0] = '\0';
        }
        local_59 = 0;
        if (local_c < local_10) {
          (**(code **)(*piVar3 + 0x14))(piVar3,(int)local_10 - (int)local_c,0,1,0);
          local_59 = 0;
        }
      }
    }
    local_8 = pWVar7;
    if (-1 < (int)local_8) {
      local_260[0] = '\0';
      pWVar7 = local_8;
      if (local_28 != (LPCWSTR)0x0) {
        local_10 = local_28;
        pWVar7 = local_28;
        if ((LPCWSTR)0x207 < local_28) {
          pWVar7 = (LPCWSTR)0x208;
        }
        local_c = pWVar7;
        FUN_0060ac30();
        pWVar7 = (LPCWSTR)(**(code **)(*piVar3 + 0xc))(piVar3,&stack0xfffffd34,pWVar7,&local_c);
        if (-1 < (int)pWVar7) {
          if ((&stack0x00000000 == (undefined1 *)0x2cc) || (WVar12 != L'\0')) {
            WideCharToMultiByte(0,0,(LPCWSTR)&stack0xfffffd34,-1,local_260,0x104,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (&stack0x00000000 != (undefined1 *)0x260) {
            local_260[0] = '\0';
          }
          local_15d = 0;
          if (local_c < local_10) {
            (**(code **)(*piVar3 + 0x14))(piVar3,(int)local_10 - (int)local_c,0,1,0);
            local_15d = 0;
          }
        }
      }
      local_8 = pWVar7;
      if (-1 < (int)local_8) {
        local_c = (LPCWSTR)0x0;
        if (param_3 != 0) {
          local_8 = (LPCWSTR)0x8007000e;
          iVar4 = FUN_005ec620();
          if (iVar4 == 0) goto LAB_005c1e13;
        }
        local_8 = (LPCWSTR)FUN_005ec8a0(local_15c,&local_c,1,0);
        if (-1 < (int)local_8) {
          puVar5 = calloc(1,0x28);
          local_20 = puVar5;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0x10;
            puVar5[1] = 0;
            puVar5[6] = local_c;
            FUN_005ed3f0(local_c);
            puVar5[8] = param_1;
            puVar5[7] = local_58[4];
            puVar5[2] = local_58[6];
            puVar5[3] = local_58[7];
            puVar5[4] = local_38;
            puVar5[5] = local_34;
            goto LAB_005c1e2d;
          }
          local_8 = (LPCWSTR)0x8007000e;
        }
      }
    }
  }
LAB_005c1e13:
  if (param_1 != (LPCWSTR)0x0) {
    free(param_1);
  }
LAB_005c1e2d:
  *param_4 = local_20;
  return local_8;
}


