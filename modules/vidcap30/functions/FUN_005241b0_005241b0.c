/* Module: vidcap30.exe
   Function: FUN_005241b0
   Address: 005241b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005241b0(LPCSTR param_1,LPSTR param_2)

{
  LPVOID pvVar1;
  HGLOBAL pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *lpString1;
  LPCVOID pMem;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint uVar9;
  HANDLE local_44;
  HANDLE local_40;
  LPVOID local_3c;
  HANDLE local_38;
  int local_34;
  LPVOID local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  uint local_18;
  int *local_14;
  uint local_10;
  LPVOID local_c;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  *param_2 = '\0';
  local_30 = (LPVOID)0x0;
  local_44 = (HANDLE)0x0;
  local_38 = (HANDLE)0x0;
  local_40 = (HANDLE)0x0;
  local_34 = 0;
  pvVar2 = GlobalAlloc(2,0x5000);
  local_c = GlobalLock(pvVar2);
  pMem = (LPCVOID)0x0;
  if (local_c != (LPVOID)0x0) {
    pvVar2 = GlobalAlloc(2,0x5000);
    local_30 = GlobalLock(pvVar2);
    if (local_30 != (LPVOID)0x0) {
      pvVar2 = GlobalAlloc(2,0x5000);
      local_3c = GlobalLock(pvVar2);
      pMem = local_3c;
      if ((local_3c != (LPVOID)0x0) &&
         (WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)0x0,&local_38), pMem = local_3c,
         local_38 != (HANDLE)0x0)) {
        while ((pvVar1 = local_c, iVar3 = FUN_005233c0(local_38,&local_10,local_c), local_4 = iVar3,
               iVar3 == 0xea || ((iVar3 == 0x103 || (pMem = local_3c, iVar3 == 0))))) {
          local_18 = 0;
          if (local_10 != 0) {
            piVar7 = (int *)((int)pvVar1 + 0x14);
            do {
              local_14 = piVar7;
              if (iVar6 != 0) break;
              local_28 = *piVar7;
              if (local_28 == 0) {
                local_28 = piVar7[2];
              }
              if (local_40 != (HANDLE)0x0) {
                WNetCloseEnum(local_40);
              }
              WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar7 + -5),&local_40);
              if (local_40 != (HANDLE)0x0) {
                while (((pvVar1 = local_30, iVar4 = FUN_005233c0(local_40,&local_1c,local_30),
                        local_8 = iVar4, iVar4 == 0xea || (iVar4 == 0x103)) ||
                       (piVar7 = local_14, iVar3 = local_4, iVar4 == 0))) {
                  local_24 = 0;
                  if (local_1c != 0) {
                    piVar7 = (int *)((int)pvVar1 + 0x14);
                    do {
                      local_20 = piVar7;
                      if (iVar6 != 0) break;
                      iVar3 = *piVar7;
                      if (iVar3 == 0) {
                        iVar3 = piVar7[2];
                      }
                      if (local_44 != (HANDLE)0x0) {
                        WNetCloseEnum(local_44);
                      }
                      WNetOpenEnumA(2,1,0,(LPNETRESOURCEA)(piVar7 + -5),&local_44);
                      if (local_44 != (HANDLE)0x0) {
                        while (((pvVar1 = local_3c,
                                iVar5 = FUN_005233c0(local_44,&local_2c,local_3c), iVar5 == 0xea ||
                                (iVar5 == 0x103)) ||
                               (iVar6 = local_34, piVar7 = local_20, iVar4 = local_8, iVar5 == 0)))
                        {
                          uVar9 = 0;
                          if (local_2c != 0) {
                            puVar8 = (undefined4 *)((int)pvVar1 + 0x14);
                            do {
                              lpString1 = (char *)*puVar8;
                              if (lpString1 == (char *)0x0) {
                                lpString1 = (char *)puVar8[2];
                              }
                              if ((*lpString1 == '\\') && (lpString1[1] == '\\')) {
                                lpString1 = lpString1 + 2;
                              }
                              iVar6 = lstrcmpiA(lpString1,param_1);
                              if (iVar6 == 0) {
                                wsprintfA(param_2,"%s\\%s",local_28,iVar3);
                                local_34 = 1;
                                break;
                              }
                              uVar9 = uVar9 + 1;
                              puVar8 = puVar8 + 8;
                            } while (uVar9 < local_2c);
                          }
                          iVar6 = local_34;
                          piVar7 = local_20;
                          iVar4 = local_8;
                          if ((iVar5 == 0x103) || (local_34 != 0)) break;
                        }
                      }
                      local_24 = local_24 + 1;
                      piVar7 = piVar7 + 8;
                      local_20 = piVar7;
                    } while (local_24 < local_1c);
                  }
                  piVar7 = local_14;
                  iVar3 = local_4;
                  if ((iVar4 == 0x103) || (iVar6 != 0)) break;
                }
              }
              local_18 = local_18 + 1;
              piVar7 = piVar7 + 8;
              local_14 = piVar7;
            } while (local_18 < local_10);
          }
          pMem = local_3c;
          if ((iVar3 == 0x103) || (iVar6 != 0)) break;
        }
      }
    }
  }
  if (local_44 != (HANDLE)0x0) {
    WNetCloseEnum(local_44);
  }
  if (local_40 != (HANDLE)0x0) {
    WNetCloseEnum(local_40);
  }
  if (local_38 != (HANDLE)0x0) {
    WNetCloseEnum(local_38);
  }
  if (pMem != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(pMem);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pMem);
    GlobalFree(pvVar2);
  }
  pvVar1 = local_30;
  if (local_30 != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(local_30);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  pvVar1 = local_c;
  if (local_c != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle(local_c);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle(pvVar1);
    GlobalFree(pvVar2);
  }
  return;
}


