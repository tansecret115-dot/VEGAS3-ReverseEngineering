/* Module: sctplug.dll
   Function: FUN_00403090
   Address: 00403090
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00403090(int param_1)

{
  short sVar1;
  ushort uVar2;
  HWND hWnd;
  HWND pHVar3;
  LRESULT LVar4;
  LPCVOID pMem;
  HGLOBAL pvVar5;
  BYTE *pBVar6;
  int iVar7;
  undefined2 *pMem_00;
  HCURSOR hCursor;
  LPSTR lParam;
  byte *pbVar8;
  SIZE_T dwBytes;
  int iVar9;
  int unaff_EBX;
  HCURSOR unaff_EBP;
  LRESULT *pLVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  undefined1 *puVar14;
  UINT UVar15;
  WPARAM WVar16;
  WPARAM wParam;
  LPARAM LVar17;
  uint uVar18;
  undefined1 *puVar19;
  WPARAM local_b0;
  HCURSOR local_ac;
  undefined1 local_a8 [4];
  LRESULT local_a4 [2];
  int local_9c;
  uchar local_98 [4];
  undefined2 *puStack_94;
  SIZE_T SStack_90;
  
  local_9c = param_1;
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d3);
  LVar17 = 0;
  WVar16 = 0;
  UVar15 = 0x147;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d2);
  local_b0 = SendMessageA(pHVar3,UVar15,WVar16,LVar17);
  if (local_b0 == 0xffffffff) {
    EnableWindow(hWnd,0);
    return;
  }
  EnableWindow(hWnd,1);
  LVar17 = 0;
  UVar15 = 0x150;
  WVar16 = local_b0;
  pHVar3 = GetDlgItem(*(HWND *)(param_1 + 0x10),0x7d2);
  LVar4 = SendMessageA(pHVar3,UVar15,WVar16,LVar17);
  local_a4[0] = *(LRESULT *)(LVar4 + 0x84);
  local_a4[1] = LVar4;
  local_ac = (HCURSOR)SendMessageA(hWnd,0x146,0,0);
  local_b0 = 0;
  if (0 < (int)local_ac) {
    do {
      pMem = (LPCVOID)SendMessageA(hWnd,0x150,local_b0,0);
      if (pMem != (LPCVOID)0x0) {
        pvVar5 = GlobalHandle(pMem);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem);
        GlobalFree(pvVar5);
      }
      local_b0 = local_b0 + 1;
      LVar4 = local_a4[1];
    } while ((int)local_b0 < (int)local_ac);
  }
  SendMessageA(hWnd,0x14b,0,0);
  if (*(int *)(LVar4 + 0x80) == 1) {
    FUN_0040d100(DAT_0043cd30,0x3ec);
    iVar7 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
    sVar1 = *(short *)(iVar7 + 2);
    if (sVar1 == 1) {
      uVar18 = 0x3ed;
    }
    else if (sVar1 == 2) {
      uVar18 = 0x3ee;
    }
    else if (*(int *)(iVar7 + 0x12) == 1) {
      uVar18 = 0x3ec;
    }
    else {
      uVar18 = 0x3ef;
    }
    pBVar6 = (BYTE *)FUN_0040d100(DAT_0043cd30,uVar18);
    FUN_00412100(local_98,pBVar6);
    WVar16 = SendMessageA(hWnd,0x143,0,(LPARAM)local_98);
    if (-1 < (int)WVar16) {
      SendMessageA(hWnd,0x151,WVar16,0);
      SendMessageA(hWnd,0x14e,WVar16,0);
      return;
    }
  }
  else {
    puVar19 = local_a8;
    iVar7 = acmMetrics(0,0x32,puVar19);
    dwBytes = unaff_EBX + 0x40;
    if ((iVar7 == 0) && (dwBytes != 0x40)) {
      pvVar5 = GlobalAlloc(0x42,dwBytes);
      pMem_00 = GlobalLock(pvVar5);
      if (pMem_00 != (undefined2 *)0x0) {
        iVar7 = *(int *)(*(int *)(param_1 + 0x30) + 0x424);
        sVar1 = *(short *)(iVar7 + 2);
        uVar2 = *(ushort *)(iVar7 + 0xe);
        iVar7 = *(int *)(iVar7 + 4);
        pMem_00[7] = uVar2;
        uVar2 = (uVar2 >> 3) * sVar1;
        pMem_00[6] = uVar2;
        pMem_00[1] = sVar1;
        *(uint *)(pMem_00 + 4) = (uint)uVar2 * iVar7;
        *pMem_00 = 1;
        *(int *)(pMem_00 + 2) = iVar7;
        pMem_00[8] = 0;
        pLVar10 = local_a4;
        for (iVar7 = 0x26; iVar7 != 0; iVar7 = iVar7 + -1) {
          *pLVar10 = 0;
          pLVar10 = pLVar10 + 1;
        }
        local_a4[0] = 0x98;
        local_9c = 1;
        puStack_94 = pMem_00;
        SStack_90 = dwBytes;
        hCursor = (HCURSOR)FUN_00410a20(0x7f02);
        local_ac = SetCursor(hCursor);
        puVar14 = &stack0xffffff48;
        iVar7 = acmDriverOpen(puVar14,local_b0,0);
        if (iVar7 == 0) {
          acmFormatEnumA(puVar19,&local_b0,&LAB_00402f80,dwBytes,0x100000);
          acmDriverClose(puVar14,0);
        }
        SetCursor(unaff_EBP);
        pvVar5 = GlobalHandle(pMem_00);
        GlobalUnlock(pvVar5);
        pvVar5 = GlobalHandle(pMem_00);
        GlobalFree(pvVar5);
        LVar4 = SendMessageA(hWnd,0x146,0,0);
        if (LVar4 < 1) {
          lParam = FUN_0040d100(DAT_0043cd30,0x3eb);
          WVar16 = SendMessageA(hWnd,0x143,0,(LPARAM)lParam);
          SendMessageA(hWnd,0x151,WVar16,0);
          SendMessageA(hWnd,0x14e,WVar16,0);
          return;
        }
        SendMessageA(hWnd,0x14e,0,0);
        WVar16 = 0;
        if (0 < LVar4) {
          do {
            wParam = WVar16;
            pbVar8 = (byte *)SendMessageA(hWnd,0x150,WVar16,0);
            if (pbVar8 != (byte *)0x0) {
              if ((*(short *)pbVar8 == 3) || (*(short *)pbVar8 == 1)) {
                iVar7 = 0x10;
              }
              else {
                iVar7 = *(ushort *)(pbVar8 + 0x10) + 0x12;
              }
              pbVar11 = *(byte **)(*(int *)(*(int *)(unaff_EBX + 0x70) + 0x424) + 0x16);
              if (pbVar11 != (byte *)0x0) {
                if ((*(short *)pbVar11 == 3) || (*(short *)pbVar11 == 1)) {
                  iVar9 = 0x10;
                }
                else {
                  iVar9 = *(ushort *)(pbVar11 + 0x10) + 0x12;
                }
                if (iVar7 == iVar9) {
                  bVar12 = false;
                  iVar9 = 0;
                  bVar13 = true;
                  do {
                    if (iVar7 == 0) break;
                    iVar7 = iVar7 + -1;
                    bVar12 = *pbVar8 < *pbVar11;
                    bVar13 = *pbVar8 == *pbVar11;
                    pbVar8 = pbVar8 + 1;
                    pbVar11 = pbVar11 + 1;
                  } while (bVar13);
                  if (!bVar13) {
                    iVar9 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  }
                  WVar16 = wParam;
                  if (iVar9 == 0) {
                    SendMessageA(hWnd,0x14e,wParam,0);
                    return;
                  }
                }
              }
            }
            WVar16 = WVar16 + 1;
            if (LVar4 <= (int)WVar16) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}


