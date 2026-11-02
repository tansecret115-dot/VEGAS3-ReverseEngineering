/* Module: vidcap30.exe
   Function: FUN_0044bec0
   Address: 0044bec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0044bec0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  LPCSTR lpString1;
  bool bVar2;
  WPARAM wParam;
  HWND hWnd;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  HGDIOBJ pvVar8;
  int iVar9;
  DWORD dw;
  UINT_PTR UVar10;
  int iVar11;
  undefined4 *puVar12;
  HDC hdc;
  bool bVar13;
  HBITMAP local_4a8;
  int local_4a4;
  uint local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  int local_490;
  int local_48c;
  WPARAM local_488;
  undefined8 local_484;
  uint local_47c;
  HWND local_478;
  int local_474;
  int local_470;
  int local_46c;
  int local_468;
  int local_464;
  int local_460;
  int local_45c;
  int local_458;
  HGDIOBJ local_454;
  int local_450;
  int local_44c;
  int local_448;
  int local_444;
  undefined1 local_438 [796];
  undefined1 local_11c [284];
  
  local_488 = param_2[9];
  uVar3 = 0;
  if (param_2[3] == 1) {
    if (*(int *)(param_1 + 0x2f8) == 0) {
      uVar3 = 0x20;
      *(undefined4 *)(param_1 + 0x304) = 0;
    }
  }
  else if (param_2[3] == 0x10001) {
    if (*(int *)(param_1 + 0x2fc) != 0) {
      uVar3 = FUN_00420110(local_488,param_2 + 0xd);
      return uVar3;
    }
    if (*(int *)(param_1 + 0x300) != 0) {
      local_478 = (HWND)*param_2;
      uVar3 = *(undefined4 *)(param_2[0xb] + 0xc);
      iVar4 = FUN_0044c6e0(uVar3);
      local_484._0_4_ = DAT_005bb4e0;
      bVar13 = DAT_005bb798 == 0;
      local_47c = 0;
      local_484._4_4_ = DAT_005bb4e4;
      pcVar5 = (char *)FUN_0046ed20();
      local_48c = 0;
      local_4a0 = 0;
      FUN_0044cb00(uVar3,local_438);
      if (iVar4 != 0) {
        local_484 = FUN_00444440(iVar4);
        if ((*(byte *)(iVar4 + 0x38) & 2) != 0) {
          lpString1 = *(LPCSTR *)(iVar4 + 0x14);
          local_48c = 0;
          if (*pcVar5 != '\0') {
            puVar12 = *(undefined4 **)(pcVar5 + 8);
            bVar1 = *(byte *)(puVar12 + 6);
            while ((bVar1 & 2) != 2) {
              iVar6 = lstrcmpiA(lpString1,(LPCSTR)*puVar12);
              if (iVar6 == 0) break;
              if (iVar6 < 0) {
                puVar12 = (undefined4 *)puVar12[4];
              }
              else {
                puVar12 = (undefined4 *)puVar12[5];
              }
              bVar1 = *(byte *)(puVar12 + 6);
            }
            if ((*(byte *)(puVar12 + 6) & 2) != 2) {
              local_48c = puVar12[1];
              if ((((((*(uint *)(local_48c + 0x124) & 0x400) == 0) &&
                    (*(int *)(local_48c + 0x370) != 0)) &&
                   (*(int *)(local_48c + 0x360) == *(int *)(local_48c + 0x368))) &&
                  (*(int *)(local_48c + 0x364) == *(int *)(local_48c + 0x36c))) ||
                 ((*(uint *)(local_48c + 0x124) & 0x800) != 0)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              local_47c = (uint)!bVar2;
            }
          }
        }
        local_4a0 = *(uint *)(iVar4 + 0x38) >> 2 & 1;
      }
      hWnd = local_478;
      wParam = local_488;
      if (((bVar13) || ((*(int *)(param_1 + 0x308) != 0 && (((byte)DAT_005ba4b4 & 4) != 0)))) ||
         (local_4a4 = 0, local_47c != 0)) {
        local_4a4 = 1;
      }
      if (&stack0x00000000 == (undefined1 *)0x49c) {
        piVar7 = (int *)0x0;
      }
      else {
        local_49c = 0;
        piVar7 = &local_49c;
      }
      SendMessageA(local_478,0x100e,local_488,(LPARAM)piVar7);
      if (&stack0x00000000 == (undefined1 *)0x474) {
        piVar7 = (int *)0x0;
      }
      else {
        local_474 = 1;
        piVar7 = &local_474;
      }
      SendMessageA(hWnd,0x100e,wParam,(LPARAM)piVar7);
      if (&stack0x00000000 == (undefined1 *)0x464) {
        piVar7 = (int *)0x0;
      }
      else {
        local_464 = 2;
        piVar7 = &local_464;
      }
      SendMessageA(hWnd,0x100e,wParam,(LPARAM)piVar7);
      if (DAT_005bb7b4 == 0) {
        hdc = CreateCompatibleDC((HDC)param_2[4]);
      }
      else {
        hdc = (HDC)0x0;
      }
      if (DAT_005bb7b4 == 0) {
        local_4a8 = CreateCompatibleBitmap
                              ((HDC)param_2[4],local_494 - local_49c,local_490 - local_498);
      }
      else {
        local_4a8 = (HBITMAP)0x0;
      }
      iVar6 = local_490;
      iVar4 = local_494;
      if ((hdc == (HDC)0x0) || (local_4a8 == (HBITMAP)0x0)) {
        dw = GdiSetBatchLimit(1);
        FUN_0041fb50(local_478,local_488,local_484,DAT_005bb83c,param_2[4],local_11c,local_4a4,
                     &local_49c,&local_474,&local_464,DAT_005bb9d0,DAT_005bb9e0,local_4a0);
        GdiSetBatchLimit(dw);
      }
      else {
        local_444 = local_498;
        local_44c = local_498;
        local_448 = local_49c;
        local_450 = local_49c;
        pvVar8 = GetCurrentObject((HDC)param_2[4],6);
        local_454 = SelectObject(hdc,pvVar8);
        pvVar8 = SelectObject(hdc,local_4a8);
        iVar11 = -local_450;
        local_49c = local_49c + iVar11;
        local_494 = local_494 + iVar11;
        iVar9 = -local_44c;
        local_498 = local_498 + iVar9;
        local_490 = local_490 + iVar9;
        local_474 = local_474 + iVar11;
        local_46c = local_46c + iVar11;
        local_470 = local_470 + iVar9;
        local_468 = local_468 + iVar9;
        local_464 = local_464 + iVar11;
        local_45c = local_45c + iVar11;
        local_460 = local_460 + iVar9;
        local_458 = local_458 + iVar9;
        FUN_0041fb50(local_478,local_488,local_484,DAT_005bb83c,hdc,local_11c,local_4a4,&local_49c,
                     &local_474,&local_464,DAT_005bb9d0,DAT_005bb9e0,local_4a0);
        BitBlt((HDC)param_2[4],local_448,local_444,iVar4 - local_448,iVar6 - local_444,hdc,0,0,
               0xcc0020);
        local_4a8 = SelectObject(hdc,pvVar8);
        SelectObject(hdc,local_454);
      }
      if (local_4a8 != (HBITMAP)0x0) {
        DeleteObject(local_4a8);
      }
      if (hdc != (HDC)0x0) {
        DeleteDC(hdc);
      }
      if (local_48c != 0) {
        if (local_4a4 == 0) {
          KillTimer(*(HWND *)(param_1 + 8),10);
          UVar10 = SetTimer(*(HWND *)(param_1 + 8),10,
                            ((*(int *)(param_1 + 0x304) < 1) - 1 & 0xfffffe3e) + 500,(TIMERPROC)0x0)
          ;
          if (UVar10 == 0) {
            *(undefined4 *)(param_1 + 0x308) = 1;
            return 4;
          }
          *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + 1;
        }
        else if (local_47c == 0) {
          *(undefined4 *)(param_1 + 0x308) = 0;
          return 4;
        }
      }
      return 4;
    }
  }
  return uVar3;
}


