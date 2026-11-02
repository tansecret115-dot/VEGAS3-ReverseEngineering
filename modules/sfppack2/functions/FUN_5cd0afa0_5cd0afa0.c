/* Module: sfppack2.dll
   Function: FUN_5cd0afa0
   Address: 5cd0afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cd0afa0(HWND param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 *puVar4;
  HWND pHVar5;
  int iVar6;
  HDC pHVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_44;
  int local_40;
  HDC local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_4;
  
  puVar4 = (undefined4 *)GetWindowLongA(param_1,0);
  if (puVar4[0x1c] != 0) {
    if (((puVar4[7] == 0) && (pHVar5 = GetCapture(), pHVar5 == param_1)) && (puVar4[9] != -1)) {
      local_38 = *(uint *)(puVar4[0x2d] + puVar4[9] * 8);
      local_34 = *(int *)(puVar4[0x2d] + 4 + puVar4[9] * 8);
      if (((HWND)puVar4[0x1b] != (HWND)0x0) && (puVar4[0x19] == 0)) {
        if ((int)puVar4[0xd] < 1) {
          uVar11 = (uint)*(ushort *)(puVar4 + 9);
          uVar9 = uVar11;
        }
        else {
          uVar11 = (uint)*(ushort *)(puVar4 + 0xd);
          uVar9 = (uint)*(ushort *)(puVar4 + 0xe);
        }
        PostMessageA((HWND)puVar4[0x1b],0x612,0,uVar9 << 0x10 | uVar11);
      }
    }
    else {
      local_18 = param_2;
      local_14 = param_3;
      FUN_5cd099b0((int)puVar4,(int *)&local_18,(int *)&local_38);
    }
    uVar9 = puVar4[0x24];
    if (((int)local_38 < (int)uVar9) || (uVar9 = puVar4[0x25], (int)uVar9 < (int)local_38)) {
      local_38 = uVar9;
    }
    iVar6 = puVar4[0x22];
    if ((local_34 < iVar6) || (iVar6 = puVar4[0x23], iVar6 < local_34)) {
      local_34 = iVar6;
    }
    if ((HWND)puVar4[0x1c] != (HWND)0x0) {
      PostMessageA((HWND)puVar4[0x1c],0x618,0,local_34 << 0x10 | local_38 & 0xffff);
    }
  }
  pHVar5 = GetCapture();
  if (pHVar5 == param_1) {
    if (puVar4[0x14] == 0) {
      if (puVar4[7] != 0) {
        pHVar7 = GetDC(param_1);
        if (-1 < (int)puVar4[0x11]) {
          FUN_5cd0b420(pHVar7,(int)puVar4,puVar4[0x11]);
        }
        FUN_5cd0b420(pHVar7,(int)puVar4,param_2);
        puVar4[0x11] = param_2;
        puVar4[0x12] = param_3;
        ReleaseDC(param_1,pHVar7);
        return;
      }
      if (puVar4[0x13] == 0) {
        iVar6 = puVar4[9];
        if (iVar6 == -1) {
          return;
        }
        uVar9 = puVar4[0x1e];
        local_c = puVar4[0x1f];
        uVar11 = puVar4[0x20];
        local_4 = puVar4[0x21];
        local_3c = GetDC(param_1);
        iVar1 = iVar6 + 1;
        local_40 = iVar6 + -1;
        FUN_5cd09b60(puVar4,local_3c,local_40,iVar1);
        local_28 = uVar9;
        if (((int)uVar9 <= (int)param_2) && (local_28 = uVar11, (int)param_2 <= (int)uVar11)) {
          local_28 = param_2;
        }
        if ((int)param_3 < (int)local_c) {
          local_24 = local_c;
        }
        else {
          local_24 = local_4;
          if ((int)param_3 <= (int)local_4) {
            local_24 = param_3;
          }
        }
        if ((iVar6 == 0) || (puVar4[0x28] + -1 == iVar6)) {
          bVar3 = true;
          param_2 = *(uint *)(puVar4[0x2d] + iVar6 * 8);
        }
        else {
          bVar3 = false;
        }
        FUN_5cd099b0((int)puVar4,(int *)&local_28,&local_30);
        iVar8 = FUN_5cd0a430((int)puVar4,iVar6,&local_44);
        pHVar7 = local_3c;
        iVar2 = local_30;
        if (iVar8 != 0) {
          iVar8 = puVar4[0x2f] + local_44 * 0x1c;
          if ((*(int *)(puVar4[0x2f] + 8 + local_44 * 0x1c) != 0) &&
             ((iVar10 = *(int *)(iVar8 + 0xc), local_2c < iVar10 ||
              (iVar10 = *(int *)(iVar8 + 0x10), iVar10 < local_2c)))) {
            local_2c = iVar10;
          }
          if (((*(int *)(iVar8 + 4) != 0) &&
              (iVar2 = *(int *)(iVar8 + 0x14), *(int *)(iVar8 + 0x14) <= local_30)) &&
             (iVar2 = local_30, *(int *)(iVar8 + 0x18) < local_30)) {
            iVar2 = *(int *)(iVar8 + 0x18);
          }
        }
        local_30 = iVar2;
        iVar6 = iVar6 * 8;
        iVar2 = puVar4[0x2d];
        *(int *)(iVar6 + iVar2) = local_30;
        ((int *)(iVar6 + iVar2))[1] = local_2c;
        if (!bVar3) {
          iVar2 = puVar4[0x2d];
          uVar9 = *(uint *)(iVar6 + iVar2);
          param_2 = *(int *)(iVar6 + -8 + iVar2) + 1;
          if (((int)param_2 <= (int)uVar9) &&
             (uVar11 = *(int *)(iVar2 + iVar1 * 8) - 1, param_2 = uVar9, (int)uVar11 < (int)uVar9))
          {
            param_2 = uVar11;
          }
        }
        *(uint *)(iVar6 + puVar4[0x2d]) = param_2;
        FUN_5cd09b60(puVar4,local_3c,local_40,iVar1);
      }
      else {
        pHVar7 = GetDC(param_1);
        if (pHVar7 == (HDC)0x0) {
          return;
        }
        uVar9 = ((int)param_2 < 1) - 1 & param_2;
        uVar11 = ((int)param_3 < 1) - 1 & param_3;
        iVar6 = puVar4[0x11];
        if (-1 < iVar6) {
          local_24 = puVar4[0x10];
          local_28 = puVar4[0xf];
          local_20 = (puVar4[0x20] - puVar4[0x1e]) + -1;
          if (iVar6 <= (int)local_20) {
            local_20 = iVar6;
          }
          iVar6 = puVar4[0x12];
          if (iVar6 < 0) {
            local_1c = 0;
          }
          else {
            local_1c = (puVar4[0x21] - puVar4[0x1f]) + -1;
            if (iVar6 <= (int)local_1c) {
              local_1c = iVar6;
            }
          }
          FUN_5cd0aef0(pHVar7,(int *)&local_28);
        }
        local_24 = puVar4[0x10];
        local_28 = puVar4[0xf];
        puVar4[0x11] = uVar9;
        puVar4[0x12] = uVar11;
        if ((int)uVar9 < 0) {
          local_20 = 0;
        }
        else {
          local_20 = (puVar4[0x20] - puVar4[0x1e]) - 1;
          if ((int)uVar9 <= (int)local_20) {
            local_20 = uVar9;
          }
        }
        if ((int)uVar11 < 0) {
          local_1c = 0;
          FUN_5cd0aef0(pHVar7,(int *)&local_28);
        }
        else {
          local_1c = (puVar4[0x21] - puVar4[0x1f]) - 1;
          if ((int)uVar11 <= (int)local_1c) {
            local_1c = uVar11;
          }
          FUN_5cd0aef0(pHVar7,(int *)&local_28);
        }
      }
      ReleaseDC(param_1,pHVar7);
    }
    else {
      local_14 = param_3;
      local_18 = param_2;
      iVar6 = FUN_5cd0d9d0((uint)puVar4,param_2,param_3,puVar4 + 0xf);
      if (iVar6 != 0) {
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
    }
  }
  return;
}


