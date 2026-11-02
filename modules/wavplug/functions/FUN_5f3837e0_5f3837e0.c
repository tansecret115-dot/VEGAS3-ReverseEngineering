/* Module: wavplug.dll
   Function: FUN_5f3837e0
   Address: 5f3837e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f3837e0(void *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  HWND hWnd;
  HWND pHVar6;
  HGLOBAL pvVar7;
  int iVar8;
  undefined2 *pMem;
  HCURSOR hCursor;
  LRESULT LVar9;
  LPSTR lParam;
  byte *pbVar10;
  ushort *lParam_00;
  int iVar11;
  code *pcVar12;
  uint *puVar13;
  byte *pbVar14;
  bool bVar15;
  bool bVar16;
  UINT UVar17;
  WPARAM WVar18;
  LPARAM LVar19;
  uint local_16c [4];
  undefined2 *local_15c;
  SIZE_T local_158;
  LRESULT local_d4;
  HCURSOR local_d0;
  undefined4 local_cc;
  uchar local_c8 [132];
  WPARAM local_44;
  HWND local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  LPCVOID local_34;
  LRESULT local_30;
  WPARAM local_2c;
  LRESULT local_28;
  undefined4 local_24;
  SIZE_T local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_5f3ca678;
  puStack_10 = &DAT_5f3c7520;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe5c;
  ExceptionList = &local_14;
  hWnd = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d3);
  LVar19 = 0;
  WVar18 = 0;
  UVar17 = 0x147;
  local_40 = hWnd;
  pHVar6 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d2);
  local_2c = SendMessageA(pHVar6,UVar17,WVar18,LVar19);
  if (local_2c == 0xffffffff) {
    EnableWindow(hWnd,0);
    ExceptionList = local_14;
    return;
  }
  EnableWindow(hWnd,1);
  LVar19 = 0;
  UVar17 = 0x150;
  WVar18 = local_2c;
  pHVar6 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d2);
  local_30 = SendMessageA(pHVar6,UVar17,WVar18,LVar19);
  local_3c = *(undefined4 *)(local_30 + 0x84);
  local_28 = SendMessageA(hWnd,0x146,0,0);
  local_2c = 0;
  if (0 < local_28) {
    do {
      local_34 = (LPCVOID)SendMessageA(hWnd,0x150,local_2c,0);
      if (local_34 != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(local_34);
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(local_34);
        GlobalFree(pvVar7);
      }
      local_2c = local_2c + 1;
    } while ((int)local_2c < local_28);
  }
  SendMessageA(hWnd,0x14b,0,0);
  if ((*(int *)(local_30 + 0x80) == 1) || (*(int *)(local_30 + 0x80) == 3)) {
    pvVar7 = GlobalAlloc(0x42,0x12);
    lParam_00 = GlobalLock(pvVar7);
    if (*(int *)(local_30 + 0x80) == 3) {
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x30) + 0x424);
      uVar2 = *(ushort *)(iVar8 + 2);
      iVar8 = *(int *)(iVar8 + 4);
      *lParam_00 = 3;
      lParam_00[1] = uVar2;
      *(int *)(lParam_00 + 2) = iVar8;
      lParam_00[7] = 0x20;
      lParam_00[6] = uVar2 << 2;
      iVar8 = (uVar2 & 0x3fff) * 4 * iVar8;
    }
    else {
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x30) + 0x424);
      uVar2 = *(ushort *)(iVar8 + 2);
      uVar3 = *(ushort *)(iVar8 + 0xe);
      iVar8 = *(int *)(iVar8 + 4);
      *lParam_00 = 1;
      lParam_00[1] = uVar2;
      *(int *)(lParam_00 + 2) = iVar8;
      lParam_00[7] = uVar3;
      uVar2 = (uVar3 >> 3) * uVar2;
      lParam_00[6] = uVar2;
      iVar8 = (uint)uVar2 * iVar8;
    }
    *(int *)(lParam_00 + 4) = iVar8;
    lParam_00[8] = 0;
    puVar5 = *(undefined4 **)(*(int *)((int)param_1 + 0x30) + 0x424);
    *puVar5 = *(undefined4 *)lParam_00;
    puVar5[1] = *(undefined4 *)(lParam_00 + 2);
    puVar5[2] = *(undefined4 *)(lParam_00 + 4);
    puVar5[3] = *(undefined4 *)(lParam_00 + 6);
    *(ushort *)(puVar5 + 4) = lParam_00[8];
    iVar8 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x30) + 0x424) + 0x16);
    if (iVar8 != 0) {
      (**(code **)(**(int **)((int)param_1 + 0x2c) + 0x24))(*(int **)((int)param_1 + 0x2c),iVar8);
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x30) + 0x424) + 0x16) = 0;
    }
    FUN_5f39af10(lParam_00,local_c8);
    EnableWindow(hWnd,0);
    local_44 = SendMessageA(hWnd,0x143,0,(LPARAM)local_c8);
    if (-1 < (int)local_44) {
      SendMessageA(hWnd,0x151,local_44,(LPARAM)lParam_00);
      SendMessageA(hWnd,0x14e,local_44,0);
      FUN_5f383590(param_1,0,(uint)(*(int *)(local_30 + 0x80) == 3),(int)lParam_00);
    }
  }
  else {
    FUN_5f383590(param_1,1,0,0);
    EnableWindow(hWnd,1);
    iVar8 = acmMetrics(0,0x32,&local_20);
    local_20 = local_20 + 0x40;
    if ((iVar8 == 0) && (local_20 != 0x40)) {
      pvVar7 = GlobalAlloc(0x42,local_20);
      pMem = GlobalLock(pvVar7);
      if (pMem != (undefined2 *)0x0) {
        iVar8 = *(int *)(*(int *)((int)param_1 + 0x30) + 0x424);
        sVar1 = *(short *)(iVar8 + 2);
        uVar2 = *(ushort *)(iVar8 + 0xe);
        iVar8 = *(int *)(iVar8 + 4);
        uVar4 = *(uint *)(local_30 + 0x80);
        *pMem = (short)uVar4;
        pMem[1] = sVar1;
        *(int *)(pMem + 2) = iVar8;
        pMem[7] = uVar2;
        uVar2 = (uVar2 >> 3) * sVar1;
        pMem[6] = uVar2;
        *(uint *)(pMem + 4) = (uint)uVar2 * iVar8;
        pMem[8] = 0;
        puVar13 = local_16c;
        local_38 = pMem;
        for (iVar8 = 0x26; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = 0;
          puVar13 = puVar13 + 1;
        }
        local_16c[0] = 0x98;
        local_16c[2] = uVar4 & 0xffff;
        local_158 = local_20;
        local_15c = pMem;
        hCursor = (HCURSOR)FUN_5f39e190(0x7f02);
        local_d0 = SetCursor(hCursor);
        iVar8 = acmDriverOpen(&local_cc,local_3c,0);
        if (iVar8 == 0) {
          local_8 = iVar8;
          local_24 = acmFormatEnumA(local_cc,local_16c,&LAB_5f383490,param_1,0x10000);
          local_8 = 0xffffffff;
          acmDriverClose(local_cc,0);
        }
        SetCursor(local_d0);
        pvVar7 = GlobalHandle(pMem);
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(pMem);
        GlobalFree(pvVar7);
        pcVar12 = SendMessageA_exref;
        LVar9 = SendMessageA(hWnd,0x146,0,0);
        local_d4 = LVar9;
        if (LVar9 < 1) {
          lParam = FUN_5f397740(DAT_5f3db380,0x3eb);
          WVar18 = SendMessageA(hWnd,0x143,0,(LPARAM)lParam);
          SendMessageA(hWnd,0x151,WVar18,0);
          SendMessageA(hWnd,0x14e,WVar18,0);
          ExceptionList = local_14;
          return;
        }
        SendMessageA(hWnd,0x14e,0,0);
        local_2c = 0;
        if (0 < LVar9) {
          do {
            pbVar10 = (byte *)(*pcVar12)(hWnd,0x150,local_2c,0);
            if (pbVar10 != (byte *)0x0) {
              if ((*(short *)pbVar10 == 3) || (*(short *)pbVar10 == 1)) {
                iVar8 = 0x10;
              }
              else {
                iVar8 = *(ushort *)(pbVar10 + 0x10) + 0x12;
              }
              pbVar14 = *(byte **)(*(int *)(*(int *)((int)param_1 + 0x30) + 0x424) + 0x16);
              if (pbVar14 != (byte *)0x0) {
                if ((*(short *)pbVar14 == 3) || (*(short *)pbVar14 == 1)) {
                  iVar11 = 0x10;
                }
                else {
                  iVar11 = *(ushort *)(pbVar14 + 0x10) + 0x12;
                }
                if (iVar8 == iVar11) {
                  bVar15 = false;
                  iVar11 = 0;
                  bVar16 = true;
                  do {
                    if (iVar8 == 0) break;
                    iVar8 = iVar8 + -1;
                    bVar15 = *pbVar10 < *pbVar14;
                    bVar16 = *pbVar10 == *pbVar14;
                    pbVar10 = pbVar10 + 1;
                    pbVar14 = pbVar14 + 1;
                  } while (bVar16);
                  if (!bVar16) {
                    iVar11 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
                  }
                  pcVar12 = SendMessageA_exref;
                  if (iVar11 == 0) {
                    SendMessageA(hWnd,0x14e,local_2c,0);
                    ExceptionList = local_14;
                    return;
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            if (local_d4 <= (int)local_2c) {
              ExceptionList = local_14;
              return;
            }
          } while( true );
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}


