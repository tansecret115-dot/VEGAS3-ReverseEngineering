/* Module: vegas30.exe
   Function: FUN_00432f40
   Address: 00432f40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00432f40(int *param_1)

{
  uchar *_Source;
  byte bVar1;
  bool bVar2;
  HGLOBAL pvVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LPCSTR lpString2;
  LPCSTR lpString1;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 local_e88 [515];
  uchar local_c85 [261];
  uchar local_b80 [516];
  undefined1 local_97c [260];
  int local_878;
  undefined1 local_874;
  uchar local_671 [265];
  undefined4 local_568;
  undefined1 local_564 [260];
  undefined1 local_460 [260];
  char local_35c [260];
  CHAR local_258 [260];
  uchar local_154 [260];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  HANDLE local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int *local_10;
  int local_c;
  char *local_8;
  
  local_8 = (char *)((int)param_1 + 0x1e4);
  iVar11 = 0;
  iVar10 = 0;
  if ((*local_8 != '\0') && (0 < *(int *)((int)param_1 + 0x1e8))) {
    local_35c[0] = '\0';
    local_460[0] = 0;
    local_564[0] = 0;
    local_154[0] = '\0';
    local_34 = 0;
    local_30 = 0;
    local_14 = 0;
    pvVar3 = GlobalAlloc(2,*(int *)((int)param_1 + 0x1e8) * 4);
    piVar4 = GlobalLock(pvVar3);
    if (piVar4 == (int *)0x0) {
      return -0x7ff8fff2;
    }
    local_14 = 0;
    local_20 = piVar4;
    if ((*local_8 != '\0') &&
       (local_14 = *(int *)(local_8 + 8), (*(byte *)(local_14 + 0x18) & 2) != 2)) {
      bVar1 = *(byte *)(*(int *)(local_14 + 0x10) + 0x18);
      iVar9 = *(int *)(local_14 + 0x10);
      while ((bVar1 & 2) != 2) {
        bVar1 = *(byte *)(*(int *)(iVar9 + 0x10) + 0x18);
        local_14 = iVar9;
        iVar9 = *(int *)(iVar9 + 0x10);
      }
    }
    while( true ) {
      if (*(char *)((int)param_1 + 0x1e4) == '\0') {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)((int)param_1 + 0x1f0);
      }
      if (local_14 == iVar9) break;
      uVar7 = *(uint *)(*(int *)(local_14 + 4) + 0x134);
      if (((uVar7 & 0x20) != 0) && ((uVar7 & 2) == 0)) {
        *piVar4 = *(int *)(local_14 + 4);
        iVar11 = iVar11 + 1;
        piVar4 = piVar4 + 1;
      }
      FUN_00436e20();
    }
    local_14 = iVar11;
    if ((iVar11 < 1) || (((byte)DAT_0064761c & 0x10) == 0)) {
      local_50 = 0;
      piVar4 = &local_878;
      for (iVar9 = 0xc5; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      local_258[0] = '\0';
      local_2c = (HANDLE)FUN_0054cdb0(local_258,0x104);
      local_38 = (uint)(local_2c == (HANDLE)0xffffffff);
      local_48 = 0;
      local_1c = 0;
      local_8 = (char *)0x0;
      if (0 < iVar11) {
        local_10 = local_20;
        do {
          iVar11 = *local_10;
          bVar2 = false;
          *(uint *)(iVar11 + 0x134) = *(uint *)(iVar11 + 0x134) | 2;
          FUN_005f3120(&local_18,0,0);
          if (local_18 == -0x7ffb1ff6) {
            if (local_35c[0] != '\0') {
              _mbscpy(local_154,(uchar *)(iVar11 + 0x170));
              iVar10 = FUN_005c4200(local_154,(int)param_1 + 0xb8,local_564,local_460,local_35c);
              if (iVar10 == 0) {
                local_c = 7;
                if (local_30 == 0) {
                  _SfGetPathNameFromFilePath_12(local_154,local_97c,0x104);
                  FUN_00401f40();
                  puVar12 = local_97c;
                  uVar5 = _SfGetFileNamePtrA_4(local_154);
                  uVar6 = _SfGetString_8(DAT_00647204,0x5123);
                  local_c = SfMsgBox_Custom(0,0x4a,0,uVar6,uVar5,puVar12);
                  if (local_c == 100) {
                    local_30 = 1;
                    goto LAB_00433263;
                  }
                  if (local_c == 6) goto LAB_00433263;
                }
                else {
LAB_00433263:
                  FUN_005b83b0(param_1,1);
                  local_28 = 0;
                  local_40 = 0;
                  iVar10 = FUN_005ec8a0(local_154,&local_28,0,&local_40);
                  if (iVar10 < 0) {
                    iVar10 = 0;
                  }
                  else {
                    iVar10 = FUN_004e9f70(param_1,0x243,0);
                    if (-1 < iVar10) {
                      if (local_40 != 0) {
                        iVar10 = FUN_004eb0f0(param_1,0x27,local_28);
                      }
                      if (-1 < iVar10) {
                        iVar10 = FUN_00433850(param_1,iVar11,local_28,1);
                        if (iVar10 < 0) {
                          FUN_005ed410(local_28,0,0);
                        }
                        else {
                          iVar10 = FUN_004eb0f0(param_1,0x28,iVar11);
                          if (-1 < iVar10) {
                            FUN_005ed410(iVar11,0,0);
                            bVar2 = true;
                            FUN_004eb2b0(param_1);
                            FUN_004ea040(param_1,0);
                            goto LAB_0043332e;
                          }
                        }
                        FUN_004ea040(param_1,1);
                      }
                    }
                  }
LAB_0043332e:
                  FUN_005b84d0(param_1,1);
                }
                if (local_c == 2) {
                  iVar10 = -0x7ffb1ff4;
                  break;
                }
              }
              else {
                local_30 = 0;
              }
            }
            if (iVar10 < 0) break;
            if (bVar2) goto LAB_004337b2;
            if (local_18 != -0x7ffb1ff6) goto LAB_00433605;
            FUN_00401f40();
            local_c = 1;
            if (local_34 == 0) {
              local_874 = 0;
              _mbscpy(local_671,(uchar *)(iVar11 + 0x170));
              local_878 = (int)param_1 + 0x1e4;
              local_568 = 1;
              iVar9 = FUN_0054cc50(iVar11);
              if ((iVar9 != 0) && (local_38 == 0)) {
                local_568 = 0;
              }
              local_c = _SfDialogBoxParam_20
                                  (DAT_00647204,0x546,DAT_00647624,&LAB_0055e820,&local_878);
              _mbscpy(local_154,local_671);
            }
            if (local_48 != 0) {
LAB_004335b2:
              if (local_38 == 0) {
                uVar7 = FUN_0054ccb0(local_2c,iVar11);
                local_1c = local_1c | uVar7;
                goto LAB_004337b2;
              }
              goto LAB_0043375f;
            }
            if (local_c != 0) {
              if (local_c != 1) {
                if (local_c == 2) {
                  local_34 = 1;
                }
                else {
                  if (local_c == 3) goto LAB_004335a3;
                  if (local_c == 4) goto LAB_004335b2;
                  if ((local_c != 5) || (local_38 != 0)) goto LAB_0043375f;
                  uVar7 = FUN_0054ccb0(local_2c,iVar11);
                  local_1c = local_1c | uVar7;
                  local_48 = 1;
                  local_34 = 1;
                }
              }
              goto LAB_004337b2;
            }
            _SfGetPathNameFromFilePath_12(local_154,local_35c,0x104);
            iVar10 = iVar11 + 0x170;
            lpString2 = (LPCSTR)_SfGetFileNamePtrA_4(iVar10);
            lpString1 = (LPCSTR)_SfGetFileNamePtrA_4(local_154);
            iVar9 = lstrcmpiA(lpString1,lpString2);
            if (iVar9 == 0) {
              _SfGetBasePathRelative_16(iVar10,local_154,local_460,0x104);
              _SfGetBasePathRelative_16(local_154,iVar10,local_564,0x104);
            }
            FUN_005b83b0(param_1,1);
            local_24 = 0;
            local_4c = 0;
            iVar10 = FUN_005ec8a0(local_154,&local_24,0,&local_4c);
            bVar2 = false;
            if ((-1 < iVar10) && (iVar10 = FUN_004e9f70(param_1,0x243,0), -1 < iVar10)) {
              if (local_4c != 0) {
                iVar10 = FUN_004eb0f0(param_1,0x27,local_24);
              }
              if (-1 < iVar10) {
                iVar10 = FUN_00433850(param_1,iVar11,local_24,1);
                if (iVar10 < 0) {
                  FUN_005ed410(local_24,0,0);
LAB_00433548:
                  uVar5 = 1;
                }
                else {
                  iVar10 = FUN_004eb0f0(param_1,0x28,iVar11);
                  if (iVar10 < 0) goto LAB_00433548;
                  FUN_005ed410(iVar11,0,0);
                  bVar2 = true;
                  FUN_004eb2b0(param_1);
                  uVar5 = 0;
                }
                FUN_004ea040(param_1,uVar5);
                if (-1 < iVar10) goto LAB_00433750;
              }
            }
            iVar9 = iVar11 + 0x170;
            uVar5 = _SfGetString_8(DAT_00647204,0x50f9);
            SfErrorHandler_DetailsAddString(iVar10,uVar5,iVar9);
            iVar10 = 0;
LAB_00433750:
            FUN_005b84d0(param_1,1);
            if (!bVar2) {
LAB_0043375f:
              FUN_005f3120(&local_18,local_b80,0x203);
              _mbscat(local_b80,"\r\n");
              _mbscat(local_b80,(uchar *)(iVar11 + 0x170));
              SfErrorHandler_DetailsAddString(local_18,local_b80);
            }
          }
          else {
LAB_00433605:
            bVar2 = false;
            if (((local_18 == -0x7ffb1fb9) && (local_50 == 0)) &&
               (lVar8 = SfShowFioInstallWizard
                                  (DAT_00647624,DAT_0064b510,(char *)(iVar11 + 0x170),3,1),
               lVar8 == 0)) {
              local_50 = 1;
            }
            FUN_005f3120(&local_18,local_e88,0x203);
            _mbscpy(local_c85,(uchar *)(iVar11 + 0x170));
            iVar9 = _SfDialogBoxParam_20(DAT_00647204,0x55d,DAT_00647624,&LAB_00562c80,local_e88);
            if (iVar9 == 2) {
LAB_004335a3:
              iVar10 = -0x7ffb1ff4;
              goto LAB_0043375f;
            }
            if (iVar9 == 0x1389) {
              FUN_005b83b0(param_1,1);
              local_3c = 0;
              local_44 = 0;
              iVar10 = FUN_005ec8a0(local_c85,&local_3c,0,&local_44);
              if ((-1 < iVar10) && (iVar10 = FUN_004e9f70(param_1,0x243,0), -1 < iVar10)) {
                if (local_44 != 0) {
                  iVar10 = FUN_004eb0f0(param_1,0x27,local_3c);
                }
                if (-1 < iVar10) {
                  iVar10 = FUN_00433850(param_1,iVar11,local_3c,1);
                  if ((iVar10 < 0) || (iVar10 = FUN_004eb0f0(param_1,0x28,iVar11), iVar10 < 0)) {
                    uVar5 = 1;
                  }
                  else {
                    FUN_005ed410(iVar11,0,0);
                    bVar2 = true;
                    FUN_004eb2b0(param_1);
                    uVar5 = 0;
                  }
                  FUN_004ea040(param_1,uVar5);
                }
              }
              goto LAB_00433750;
            }
            if (iVar9 != 0x138a) goto LAB_0043375f;
          }
LAB_004337b2:
          local_8 = local_8 + 1;
          local_10 = local_10 + 1;
        } while ((int)local_8 < local_14);
      }
      if (local_2c != (HANDLE)0xffffffff) {
        CloseHandle(local_2c);
      }
      if ((local_1c == 0) || (iVar10 < 0)) {
        DeleteFileA(local_258);
      }
      else {
        FUN_0054cbc0(DAT_00647624,local_258);
      }
    }
    else {
      FUN_0060ac30();
      lstrcpynA(&stack0xfffff16c,
                "Error: some media files could not be found or had errors when opened",0x1a68);
      iVar10 = lstrlenA(&stack0xfffff16c);
      local_10 = (int *)0x0;
      iVar10 = 0x1a68 - iVar10;
      if (0 < iVar11) {
        param_1 = local_20;
        do {
          local_8 = (char *)*param_1;
          iVar11 = lstrlenA(";");
          if (iVar10 < iVar11) break;
          _mbscat(&stack0xfffff16c,";");
          _Source = (uchar *)(local_8 + 0x170);
          local_8 = (char *)lstrlenA((LPCSTR)_Source);
          if (iVar10 - iVar11 < (int)local_8) break;
          _mbscat(&stack0xfffff16c,_Source);
          iVar10 = (iVar10 - iVar11) - (int)local_8;
          local_10 = (int *)((int)local_10 + 1);
          param_1 = param_1 + 1;
        } while ((int)local_10 < local_14);
      }
      FUN_004100d0(&stack0xfffff16c);
      iVar10 = -0x7fffbffb;
    }
    piVar4 = local_20;
    pvVar3 = GlobalHandle(local_20);
    GlobalUnlock(pvVar3);
    pvVar3 = GlobalHandle(piVar4);
    GlobalFree(pvVar3);
    if (iVar10 == -0x7ffb1ff4) {
      _SfErrorHandler_DetailsInit_0();
    }
  }
  return iVar10;
}


