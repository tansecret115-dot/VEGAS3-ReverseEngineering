/* Module: vegas30k.dll
   Function: FUN_010a4d10
   Address: 010a4d10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_010a4d10(HWND param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  LONG LVar4;
  HWND pHVar5;
  int iVar6;
  HDC pHVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int local_44;
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
  
  LVar4 = GetWindowLongA(param_1,0);
  if (*(int *)(LVar4 + 0x70) != 0) {
    if (((*(int *)(LVar4 + 0x1c) == 0) && (pHVar5 = GetCapture(), pHVar5 == param_1)) &&
       (*(int *)(LVar4 + 0x24) != -1)) {
      local_38 = *(uint *)(*(int *)(LVar4 + 0xb4) + *(int *)(LVar4 + 0x24) * 8);
      local_34 = *(int *)(*(int *)(LVar4 + 0xb4) + 4 + *(int *)(LVar4 + 0x24) * 8);
      if ((*(HWND *)(LVar4 + 0x6c) != (HWND)0x0) && (*(int *)(LVar4 + 100) == 0)) {
        if (*(int *)(LVar4 + 0x34) < 1) {
          uVar10 = (uint)*(ushort *)(LVar4 + 0x24);
          uVar11 = uVar10;
        }
        else {
          uVar10 = (uint)*(ushort *)(LVar4 + 0x34);
          uVar11 = (uint)*(ushort *)(LVar4 + 0x38);
        }
        PostMessageA(*(HWND *)(LVar4 + 0x6c),0x612,0,uVar11 << 0x10 | uVar10);
      }
    }
    else {
      local_18 = param_2;
      local_14 = param_3;
      FUN_010a3720(LVar4,&local_18,&local_38);
    }
    uVar11 = *(uint *)(LVar4 + 0x90);
    if (((int)local_38 < (int)uVar11) ||
       (uVar11 = *(uint *)(LVar4 + 0x94), (int)uVar11 < (int)local_38)) {
      local_38 = uVar11;
    }
    iVar6 = *(int *)(LVar4 + 0x88);
    if ((local_34 < iVar6) || (iVar6 = *(int *)(LVar4 + 0x8c), iVar6 < local_34)) {
      local_34 = iVar6;
    }
    if (*(HWND *)(LVar4 + 0x70) != (HWND)0x0) {
      PostMessageA(*(HWND *)(LVar4 + 0x70),0x618,0,local_34 << 0x10 | local_38 & 0xffff);
    }
  }
  pHVar5 = GetCapture();
  if (pHVar5 == param_1) {
    if (*(int *)(LVar4 + 0x50) == 0) {
      if (*(int *)(LVar4 + 0x1c) != 0) {
        pHVar7 = GetDC(param_1);
        if (-1 < *(int *)(LVar4 + 0x44)) {
          FUN_010a5190(pHVar7,LVar4,*(int *)(LVar4 + 0x44));
        }
        FUN_010a5190(pHVar7,LVar4,param_2);
        *(uint *)(LVar4 + 0x44) = param_2;
        *(uint *)(LVar4 + 0x48) = param_3;
        ReleaseDC(param_1,pHVar7);
        return;
      }
      if (*(int *)(LVar4 + 0x4c) == 0) {
        iVar6 = *(int *)(LVar4 + 0x24);
        if (iVar6 == -1) {
          return;
        }
        uVar11 = *(uint *)(LVar4 + 0x78);
        local_c = *(uint *)(LVar4 + 0x7c);
        uVar10 = *(uint *)(LVar4 + 0x80);
        local_4 = *(uint *)(LVar4 + 0x84);
        local_3c = GetDC(param_1);
        iVar1 = iVar6 + 1;
        local_40 = iVar6 + -1;
        FUN_010a38d0(LVar4,local_3c,local_40,iVar1);
        local_28 = uVar11;
        if (((int)uVar11 <= (int)param_2) && (local_28 = uVar10, (int)param_2 <= (int)uVar10)) {
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
        if ((iVar6 == 0) || (*(int *)(LVar4 + 0xa0) + -1 == iVar6)) {
          bVar3 = true;
          param_2 = *(uint *)(*(int *)(LVar4 + 0xb4) + iVar6 * 8);
        }
        else {
          bVar3 = false;
        }
        FUN_010a3720(LVar4,&local_28,&local_30);
        iVar8 = FUN_010a41a0(LVar4,iVar6,&local_44);
        pHVar7 = local_3c;
        iVar2 = local_30;
        if (iVar8 != 0) {
          iVar8 = *(int *)(LVar4 + 0xbc) + local_44 * 0x1c;
          if ((*(int *)(*(int *)(LVar4 + 0xbc) + 8 + local_44 * 0x1c) != 0) &&
             ((iVar9 = *(int *)(iVar8 + 0xc), local_2c < iVar9 ||
              (iVar9 = *(int *)(iVar8 + 0x10), iVar9 < local_2c)))) {
            local_2c = iVar9;
          }
          if (((*(int *)(iVar8 + 4) != 0) &&
              (iVar2 = *(int *)(iVar8 + 0x14), *(int *)(iVar8 + 0x14) <= local_30)) &&
             (iVar2 = local_30, *(int *)(iVar8 + 0x18) < local_30)) {
            iVar2 = *(int *)(iVar8 + 0x18);
          }
        }
        local_30 = iVar2;
        iVar6 = iVar6 * 8;
        piVar12 = (int *)(iVar6 + *(int *)(LVar4 + 0xb4));
        *piVar12 = local_30;
        piVar12[1] = local_2c;
        if (!bVar3) {
          iVar2 = *(int *)(LVar4 + 0xb4);
          uVar11 = *(uint *)(iVar6 + iVar2);
          param_2 = *(int *)(iVar6 + -8 + iVar2) + 1;
          if (((int)param_2 <= (int)uVar11) &&
             (uVar10 = *(int *)(iVar2 + iVar1 * 8) - 1, param_2 = uVar11, (int)uVar10 < (int)uVar11)
             ) {
            param_2 = uVar10;
          }
        }
        *(uint *)(iVar6 + *(int *)(LVar4 + 0xb4)) = param_2;
        FUN_010a38d0(LVar4,local_3c,local_40,iVar1);
      }
      else {
        pHVar7 = GetDC(param_1);
        if (pHVar7 == (HDC)0x0) {
          return;
        }
        param_2 = ((int)param_2 < 1) - 1 & param_2;
        param_3 = ((int)param_3 < 1) - 1 & param_3;
        iVar6 = *(int *)(LVar4 + 0x44);
        if (-1 < iVar6) {
          local_24 = *(undefined4 *)(LVar4 + 0x40);
          local_28 = *(uint *)(LVar4 + 0x3c);
          local_20 = (*(int *)(LVar4 + 0x80) - *(int *)(LVar4 + 0x78)) + -1;
          if (iVar6 <= (int)local_20) {
            local_20 = iVar6;
          }
          iVar6 = *(int *)(LVar4 + 0x48);
          if (iVar6 < 0) {
            local_1c = 0;
          }
          else {
            local_1c = (*(int *)(LVar4 + 0x84) - *(int *)(LVar4 + 0x7c)) + -1;
            if (iVar6 <= (int)local_1c) {
              local_1c = iVar6;
            }
          }
          FUN_010a4c60(pHVar7,&local_28);
        }
        local_24 = *(uint *)(LVar4 + 0x40);
        local_28 = *(uint *)(LVar4 + 0x3c);
        *(uint *)(LVar4 + 0x44) = param_2;
        *(uint *)(LVar4 + 0x48) = param_3;
        if ((int)param_2 < 0) {
          local_20 = 0;
        }
        else {
          local_20 = (*(int *)(LVar4 + 0x80) - *(int *)(LVar4 + 0x78)) - 1;
          if ((int)param_2 <= (int)local_20) {
            local_20 = param_2;
          }
        }
        if ((int)param_3 < 0) {
          local_1c = 0;
          FUN_010a4c60(pHVar7,&local_28);
        }
        else {
          local_1c = (*(int *)(LVar4 + 0x84) - *(int *)(LVar4 + 0x7c)) - 1;
          if ((int)param_3 <= (int)local_1c) {
            local_1c = param_3;
          }
          FUN_010a4c60(pHVar7,&local_28);
        }
      }
      ReleaseDC(param_1,pHVar7);
    }
    else {
      local_14 = param_3;
      local_18 = param_2;
      iVar6 = FUN_010a7740(LVar4,param_2,param_3,LVar4 + 0x3c);
      if (iVar6 != 0) {
        InvalidateRect(param_1,(RECT *)0x0,0);
        return;
      }
    }
  }
  return;
}


