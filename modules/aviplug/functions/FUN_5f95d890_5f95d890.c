/* Module: aviplug.dll
   Function: FUN_5f95d890
   Address: 5f95d890
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f95d890(void *param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  HWND pHVar5;
  HWND pHVar6;
  LPCVOID pMem;
  HGLOBAL pvVar7;
  int iVar8;
  undefined2 *pMem_00;
  HCURSOR hCursor;
  LRESULT LVar9;
  LPSTR lParam;
  byte *pbVar10;
  ushort *lParam_00;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  UINT UVar16;
  WPARAM WVar17;
  LPARAM LVar18;
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
  puStack_c = &DAT_5f9d9380;
  puStack_10 = &DAT_5f9d5b26;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffe58;
  ExceptionList = &local_14;
  pHVar5 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3ea);
  LVar18 = 0;
  WVar17 = 0;
  UVar16 = 0x147;
  local_40 = pHVar5;
  pHVar6 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3e9);
  WVar17 = SendMessageA(pHVar6,UVar16,WVar17,LVar18);
  LVar18 = 0;
  if (WVar17 == 0xffffffff) {
    EnableWindow(pHVar5,0);
    ExceptionList = local_14;
    return;
  }
  UVar16 = 0x150;
  pHVar6 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3e9);
  local_30 = SendMessageA(pHVar6,UVar16,WVar17,LVar18);
  local_3c = *(undefined4 *)(local_30 + 0x84);
  local_28 = SendMessageA(pHVar5,0x146,0,0);
  local_2c = 0;
  if (0 < local_28) {
    do {
      pMem = (LPCVOID)SendMessageA(pHVar5,0x150,local_2c,0);
      if (pMem != (LPCVOID)0x0) {
        pvVar7 = GlobalHandle(pMem);
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(pMem);
        GlobalFree(pvVar7);
      }
      local_2c = local_2c + 1;
      pHVar5 = local_40;
    } while ((int)local_2c < local_28);
  }
  SendMessageA(pHVar5,0x14b,0,0);
  if ((*(int *)(local_30 + 0x80) == 1) || (*(int *)(local_30 + 0x80) == 3)) {
    pvVar7 = GlobalAlloc(0x42,0x12);
    lParam_00 = GlobalLock(pvVar7);
    if (*(int *)(local_30 + 0x80) == 3) {
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
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
      **(undefined2 **)(*(int *)((int)param_1 + 0x34) + 0x424) = 1;
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
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
    FUN_5f98caa0(lParam_00,local_c8);
    EnableWindow(local_40,0);
    local_44 = SendMessageA(local_40,0x143,0,(LPARAM)local_c8);
    if (-1 < (int)local_44) {
      SendMessageA(local_40,0x151,local_44,(LPARAM)lParam_00);
      SendMessageA(local_40,0x14e,local_44,0);
      FUN_5f95d300(param_1,0,(uint)(*(int *)(local_30 + 0x80) == 3),(int)lParam_00);
    }
  }
  else {
    FUN_5f95d300(param_1,1,0,0);
    iVar8 = acmMetrics(0,0x32,&local_20);
    local_20 = local_20 + 0x40;
    if ((iVar8 == 0) && (local_20 != 0x40)) {
      pvVar7 = GlobalAlloc(0x42,local_20);
      pMem_00 = GlobalLock(pvVar7);
      if (pMem_00 != (undefined2 *)0x0) {
        iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x424);
        sVar1 = *(short *)(iVar8 + 2);
        uVar2 = *(ushort *)(iVar8 + 0xe);
        iVar8 = *(int *)(iVar8 + 4);
        uVar4 = *(uint *)(local_30 + 0x80);
        *pMem_00 = (short)uVar4;
        pMem_00[1] = sVar1;
        *(int *)(pMem_00 + 2) = iVar8;
        pMem_00[7] = uVar2;
        uVar2 = (uVar2 >> 3) * sVar1;
        pMem_00[6] = uVar2;
        *(uint *)(pMem_00 + 4) = (uint)uVar2 * iVar8;
        pMem_00[8] = 0;
        puVar12 = local_16c;
        local_38 = pMem_00;
        for (iVar8 = 0x26; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
        local_16c[0] = 0x98;
        local_16c[2] = uVar4 & 0xffff;
        local_158 = local_20;
        local_15c = pMem_00;
        hCursor = (HCURSOR)FUN_5f99e880(0x7f02);
        local_d0 = SetCursor(hCursor);
        iVar8 = acmDriverOpen(&local_cc,local_3c,0);
        if (iVar8 == 0) {
          local_8 = iVar8;
          local_24 = acmFormatEnumA(local_cc,local_16c,&LAB_5f95d790,param_1,0x10000);
          local_8 = 0xffffffff;
          acmDriverClose(local_cc,0);
        }
        SetCursor(local_d0);
        pvVar7 = GlobalHandle(pMem_00);
        GlobalUnlock(pvVar7);
        pvVar7 = GlobalHandle(pMem_00);
        GlobalFree(pvVar7);
        pHVar5 = local_40;
        LVar9 = SendMessageA(local_40,0x146,0,0);
        local_d4 = LVar9;
        if (LVar9 < 1) {
          lParam = FUN_5f9811c0(DAT_5f9f5978,0x12);
          WVar17 = SendMessageA(pHVar5,0x143,0,(LPARAM)lParam);
          SendMessageA(pHVar5,0x151,WVar17,0);
          SendMessageA(pHVar5,0x14e,WVar17,0);
          ExceptionList = local_14;
          return;
        }
        SendMessageA(pHVar5,0x14e,0,0);
        if ((*(int *)((int)param_1 + 0xb4) != 0) && (local_2c = 0, 0 < LVar9)) {
          do {
            pbVar10 = (byte *)SendMessageA(pHVar5,0x150,local_2c,0);
            if (pbVar10 != (byte *)0x0) {
              pbVar13 = *(byte **)((int)param_1 + 0xb4);
              if ((*(short *)pbVar10 == 3) || (*(short *)pbVar10 == 1)) {
                iVar8 = 0x10;
              }
              else {
                iVar8 = *(ushort *)(pbVar10 + 0x10) + 0x12;
              }
              if ((*(short *)pbVar13 == 3) || (*(short *)pbVar13 == 1)) {
                iVar11 = 0x10;
              }
              else {
                iVar11 = *(ushort *)(pbVar13 + 0x10) + 0x12;
              }
              if (iVar8 == iVar11) {
                bVar14 = false;
                iVar11 = 0;
                bVar15 = true;
                do {
                  if (iVar8 == 0) break;
                  iVar8 = iVar8 + -1;
                  bVar14 = *pbVar10 < *pbVar13;
                  bVar15 = *pbVar10 == *pbVar13;
                  pbVar10 = pbVar10 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (bVar15);
                if (!bVar15) {
                  iVar11 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
                }
                pHVar5 = local_40;
                if (iVar11 == 0) {
                  SendMessageA(local_40,0x14e,local_2c,0);
                  ExceptionList = local_14;
                  return;
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


