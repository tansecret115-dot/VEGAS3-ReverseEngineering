/* Module: vegas30.exe
   Function: FUN_0055cc00
   Address: 0055cc00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0055cc00(HWND param_1,undefined4 param_2)

{
  UINT UVar1;
  LPCSTR pCVar2;
  HWND pHVar3;
  int *piVar4;
  int iVar5;
  int unaff_ESI;
  int iVar6;
  int *unaff_EDI;
  int iVar7;
  uint bEnable;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int *local_68c;
  int local_688;
  int local_684;
  UINT UStack_680;
  int local_67c;
  undefined4 local_678;
  int local_674;
  int iStack_66c;
  undefined4 local_668;
  uint local_664;
  int local_660;
  undefined1 uStack_645;
  uchar auStack_644 [127];
  undefined1 uStack_5c5;
  uchar auStack_5c4 [259];
  undefined1 uStack_4c1;
  WCHAR aWStack_420 [260];
  WCHAR aWStack_218 [8];
  undefined1 local_208 [512];
  undefined4 uStack_8;
  
  iVar6 = -1;
  local_684 = -0x7ff8fff2;
  local_67c = -1;
  local_664 = 0;
  local_668 = 0;
  local_660 = FUN_005ec620();
  if (local_660 != 0) {
    local_688 = 0;
    local_684 = FUN_005ec8a0(param_2,&local_688,4,0);
    if ((-1 < local_684) && (local_684 = FUN_005ed3f0(local_688), -1 < local_684)) {
      local_68c = (int *)0x0;
      local_684 = FUN_005f1150(&local_68c);
      if (-1 < local_684) {
        local_674 = 1;
        local_678 = 1;
        iVar6 = (**(code **)(*local_68c + 0x10))(local_68c,local_208,0x104,1);
        if (-1 < iVar6) {
          if ((&stack0x00000000 == (undefined1 *)0x218) || (aWStack_218[0] != L'\0')) {
            WideCharToMultiByte(0,0,aWStack_218,-1,(LPSTR)auStack_5c4,0x104,(LPCSTR)0x0,(LPBOOL)0x0)
            ;
          }
          else if (&stack0x00000000 != (undefined1 *)0x5c4) {
            auStack_5c4[0] = '\0';
          }
          uStack_4c1 = 0;
          SetDlgItemTextA(param_1,0x3ea,(LPCSTR)auStack_5c4);
        }
        if (*(UINT **)(unaff_ESI + 0x130) == (UINT *)0x0) {
          UStack_680 = 0;
        }
        else {
          UStack_680 = **(UINT **)(unaff_ESI + 0x130);
        }
        UVar1 = UStack_680;
        SetDlgItemInt(param_1,0x3f3,UStack_680,0);
        iVar6 = 0;
        if (0 < (int)UVar1) {
          do {
            if ((local_684 == 0) && (local_688 == 0)) break;
            iVar5 = *(int *)(*(int *)(*(int *)(unaff_ESI + 0x130) + 8) + iVar6 * 4);
            auStack_5c4[0] = '\0';
            local_664 = local_664 & 0xffffff00;
            auStack_644[0] = '\0';
            iVar7 = *(int *)(iVar5 + 4);
            if (iVar7 == 0) {
              iVar5 = iVar6 + 1;
              uVar10 = _SfGetString_8(DAT_00647204,0x6d7b);
              SfPrintF(auStack_5c4,uVar10,iVar5);
              SetDlgItemTextA(param_1,0x5dc,(LPCSTR)auStack_5c4);
            }
            else if (iVar7 == 2) {
              if (local_684 != 0) {
                local_67c = 0x3ed;
                iVar7 = 0x3f4;
                if ((*(byte *)(iVar5 + 0x8c) & 2) != 0) {
                  pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d6e);
                  goto LAB_0055cde8;
                }
                aWStack_420[0] = L'\0';
                (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,aWStack_420,0x104,iVar6,2);
                if (aWStack_420[0] == L'\0') {
                  _SfAudio_GetAttribsText_12(*(undefined4 *)(iVar5 + 0x2c),auStack_644,0x80);
                }
                else {
                  WideCharToMultiByte(0,0,aWStack_420,-1,(LPSTR)auStack_644,0x80,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                  uStack_5c5 = 0;
                }
                iVar5 = *(int *)(*(int *)(iVar5 + 0x2c) + 4);
                if (iVar5 == 0) {
                  uVar9 = 0;
                }
                else {
                  local_668 = 0;
                  iStack_66c = iVar5;
                  uVar9 = ftol();
                }
                _SfNanoTimeToTextEx_20(&local_664,&DAT_0064b110,uVar9,2);
                local_684 = 0;
                goto LAB_0055cdf5;
              }
            }
            else if ((iVar7 == 3) && (local_688 != 0)) {
              local_67c = 0x3ee;
              iVar7 = 0x3f5;
              if ((*(byte *)(iVar5 + 0x8c) & 2) == 0) {
                aWStack_420[0] = L'\0';
                (**(code **)(*unaff_EDI + 0x14))(unaff_EDI,aWStack_420,0x104,iVar6,2);
                if (aWStack_420[0] == L'\0') {
                  _SfVideo_GetAttribsText_12(*(undefined4 *)(iVar5 + 0x30),auStack_644,0x80);
                }
                else {
                  WideCharToMultiByte(0,0,aWStack_420,-1,(LPSTR)auStack_644,0x80,(LPCSTR)0x0,
                                      (LPBOOL)0x0);
                  uStack_5c5 = 0;
                }
                if (*(double *)(iVar5 + 0x48) == _DAT_00610fd8) {
                  pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6622);
                  lstrcpynA((LPSTR)&local_664,pCVar2,0x20);
                  uStack_645 = 0;
                  piVar4 = (int *)FUN_005f95c0(uStack_8,1);
                  local_68c = piVar4;
                  if (-1 < (int)piVar4) {
                    local_674 = FUN_005f96e0(uStack_8,&local_678);
                    local_674 = local_674 + (1 - (int)piVar4);
                  }
                  local_688 = 0;
                }
                else {
                  uVar10 = 2;
                  uVar9 = ftol(2);
                  _SfNanoTimeToTextEx_20(&local_664,&DAT_0064b110,uVar9,uVar10);
                  SfPrintF(auStack_5c4,"$, $.3f fps",*(undefined4 *)(iVar5 + 0x48),
                           *(undefined4 *)(iVar5 + 0x4c));
                  iVar5 = lstrlenA((LPCSTR)auStack_644);
                  _mbsncat(auStack_644,auStack_5c4,0x7f - iVar5);
                  local_688 = 0;
                }
              }
              else {
                pCVar2 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d6e);
LAB_0055cde8:
                lstrcpynA((LPSTR)auStack_644,pCVar2,0x80);
                uStack_5c5 = 0;
              }
LAB_0055cdf5:
              SetDlgItemTextA(param_1,local_67c,(LPCSTR)auStack_644);
              if (iVar7 != 0) {
                SetDlgItemTextA(param_1,iVar7,(LPCSTR)&local_664);
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)UStack_680);
        }
        (**(code **)(*unaff_EDI + 8))(unaff_EDI);
        local_68c = (int *)0x0;
        iVar6 = local_67c;
      }
      FUN_005ed410(local_688,0,0);
      _SfErrorHandler_DetailsInit_0();
    }
  }
  bVar8 = iVar6 < 0;
  if (bVar8) {
    puVar12 = &DAT_0060f98c;
    pHVar3 = GetDlgItem(param_1,0x630);
    SfSetWindowText(pHVar3,puVar12);
    puVar12 = &DAT_0060f98c;
    pHVar3 = GetDlgItem(param_1,0x438);
    SfSetWindowText(pHVar3,puVar12);
  }
  else {
    puVar11 = &DAT_0061052c;
    pHVar3 = GetDlgItem(param_1,0x630);
    SfSetWindowText(pHVar3,puVar11,iVar6);
    uVar13 = local_664;
    iVar6 = (local_664 - 1) + local_67c;
    puVar11 = &DAT_0061052c;
    pHVar3 = GetDlgItem(param_1,0x438);
    SfSetWindowText(pHVar3,puVar11,iVar6);
    piVar4 = (int *)GetWindowLongA(param_1,8);
    *(int *)(*piVar4 + 0x34) = local_67c;
    *(undefined4 *)(*piVar4 + 0x38) = local_668;
    *(uint *)(*piVar4 + 0x3c) = uVar13;
  }
  bEnable = (uint)!bVar8;
  uVar13 = bEnable;
  pHVar3 = GetDlgItem(param_1,0x470);
  EnableWindow(pHVar3,uVar13);
  uVar13 = bEnable;
  pHVar3 = GetDlgItem(param_1,0x630);
  EnableWindow(pHVar3,uVar13);
  uVar13 = bEnable;
  pHVar3 = GetDlgItem(param_1,0x631);
  EnableWindow(pHVar3,uVar13);
  uVar13 = bEnable;
  pHVar3 = GetDlgItem(param_1,0x438);
  EnableWindow(pHVar3,uVar13);
  pHVar3 = GetDlgItem(param_1,0x632);
  EnableWindow(pHVar3,bEnable);
  return local_684;
}


