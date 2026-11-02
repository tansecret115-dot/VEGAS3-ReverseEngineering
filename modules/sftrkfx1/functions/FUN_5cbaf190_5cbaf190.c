/* Module: sftrkfx1.dll
   Function: FUN_5cbaf190
   Address: 5cbaf190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbaf190(HWND param_1,uint *param_2)

{
  uint *puVar1;
  HDC hdc;
  HDC pHVar2;
  HBITMAP h;
  HGDIOBJ pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  tagSIZE *ptVar9;
  tagSIZE local_34;
  HGDIOBJ local_2c;
  tagSIZE local_28;
  tagSIZE local_20;
  tagSIZE local_18;
  tagRECT local_10;
  
  puVar1 = param_2;
  hdc = GetDC(param_1);
  local_34.cx = (LONG)hdc;
  if ((HGDIOBJ)param_2[0x10] == (HGDIOBJ)0x0) {
    local_28.cy = 8;
    param_2[0x11] = 8;
  }
  else {
    local_2c = SelectObject(hdc,(HGDIOBJ)param_2[0x10]);
    FUN_5cbdd410((HGDIOBJ)param_2[0x10],"0",1,&local_28);
    param_2[0x11] = local_28.cx;
  }
  param_2[0x12] = local_28.cy;
  if ((HDC)param_2[0x13] != (HDC)0x0) {
    if (param_2[0x14] != 0) {
      SelectObject((HDC)param_2[0x13],(HGDIOBJ)param_2[0x15]);
    }
    DeleteDC((HDC)param_2[0x13]);
    param_2[0x13] = 0;
  }
  if ((HGDIOBJ)param_2[0x14] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_2[0x14]);
    param_2[0x14] = 0;
  }
  GetClientRect(param_1,&local_10);
  iVar6 = local_10.bottom - local_10.top;
  GetTextExtentPoint32A(hdc,(LPCSTR)(param_2 + 0x2b),1,&local_20);
  if ((*param_2 & 0x40) == 0) {
    param_2[0x1d] = local_10.top + 2;
    puVar8 = param_2 + 0x18;
    param_2[0x1f] = local_10.bottom - 2;
    uVar4 = (local_10.right - iVar6) + 4;
    param_2[0x1e] = local_10.right;
    param_2[0x1c] = uVar4;
    *puVar8 = uVar4;
    param_2[0x19] = param_2[0x1d];
    param_2[0x1a] = local_10.right;
    param_2[0x1b] = param_2[0x1f];
    param_2[0x1a] = param_2[0x1a] + (4 - iVar6);
    *puVar8 = *puVar8 + (4 - iVar6);
    uVar4 = param_2[0x12];
    if ((int)param_2[0x12] <= local_20.cy) {
      uVar4 = local_20.cy;
    }
    uVar4 = uVar4 + 4;
  }
  else {
    if (local_20.cy < (int)param_2[0x12]) {
      local_20.cy = param_2[0x12];
    }
    uVar4 = local_20.cy + 6;
  }
  uVar4 = uVar4 + (uVar4 & 1);
  if ((*param_2 & 0x20) == 0) {
    local_10.bottom = local_10.top + uVar4;
  }
  else {
    local_10.top = local_10.bottom - uVar4;
  }
  if ((*param_2 & 0x40) != 0) {
    param_2[0x1d] = local_10.top;
    puVar8 = param_2 + 0x18;
    param_2[0x1e] = local_10.right;
    param_2[0x1f] = local_10.bottom;
    param_2[0x1c] = local_10.right - uVar4;
    *puVar8 = local_10.right - uVar4;
    param_2[0x19] = param_2[0x1d];
    param_2[0x1a] = param_2[0x1e];
    param_2[0x1b] = param_2[0x1f];
    param_2[0x1a] = param_2[0x1a] - uVar4;
    *puVar8 = *puVar8 - uVar4;
  }
  uVar7 = (int)uVar4 / 2 + 3;
  param_2[0x16] = uVar7;
  param_2[0x17] = uVar4;
  pHVar2 = CreateCompatibleDC(hdc);
  param_2[0x13] = (uint)pHVar2;
  if (pHVar2 != (HDC)0x0) {
    h = CreateCompatibleBitmap(hdc,uVar7 * 0xb,uVar4);
    param_2[0x14] = (uint)h;
    if (h == (HBITMAP)0x0) {
      DeleteDC((HDC)param_2[0x13]);
      param_2[0x13] = 0;
    }
    else {
      pvVar3 = SelectObject((HDC)param_2[0x13],h);
      param_2[0x15] = (uint)pvVar3;
      PatBlt((HDC)param_2[0x13],0,0,uVar7 * 0xb,uVar4,0x42);
      uVar5 = 0;
      param_2 = (uint *)0x0;
      do {
        if ((*puVar1 & 0x40) == 0) {
          FUN_5cbacda0(param_1,(HDC)puVar1[0x13],(int)param_2,0,uVar7,uVar4,uVar5,1);
        }
        else {
          FUN_5cbad650((HDC)puVar1[0x13],(int)param_2,0,uVar7,uVar4,uVar5,1);
        }
        uVar5 = uVar5 + 1;
        param_2 = (uint *)((int)param_2 + uVar7);
        hdc = (HDC)local_34.cx;
      } while (uVar5 < 0xb);
    }
  }
  local_10.left = puVar1[0x16];
  local_10.right = local_10.left;
  if (puVar1[2] == 0) {
    uVar4 = 0;
    if (puVar1[0x29] != 0) {
      puVar8 = puVar1 + 0x2b;
      do {
        ptVar9 = &local_34;
        iVar6 = lstrlenA((LPCSTR)puVar8);
        GetTextExtentPointA(hdc,(LPCSTR)puVar8,iVar6,ptVar9);
        puVar8[9] = local_10.left;
        local_10.right = (int)&((HDC)(local_34.cx + 4))->unused + local_10.left;
        puVar8[10] = local_10.top;
        puVar8[0xb] = local_10.right;
        puVar8[0xc] = local_10.bottom;
        local_10.left = local_10.right + puVar1[0x16];
        uVar4 = uVar4 + 1;
        puVar8 = puVar8 + 0xe;
      } while (uVar4 < puVar1[0x29]);
    }
  }
  else {
    uVar4 = 0;
    if (puVar1[0x29] != 0) {
      puVar8 = puVar1 + 0x2b;
      do {
        ptVar9 = &local_18;
        iVar6 = lstrlenA((LPCSTR)puVar8);
        GetTextExtentPointA(hdc,(LPCSTR)puVar8,iVar6,ptVar9);
        local_10.right = (local_18.cx - local_10.top) + local_10.bottom + 10 + local_10.left;
        puVar8[9] = local_10.left;
        puVar8[10] = local_10.top;
        puVar8[0xb] = local_10.right;
        puVar8[0xc] = local_10.bottom;
        local_10.left = local_10.right + puVar1[0x16];
        uVar4 = uVar4 + 1;
        hdc = (HDC)local_34.cx;
        puVar8 = puVar8 + 0xe;
      } while (uVar4 < puVar1[0x29]);
    }
  }
  puVar1[0x25] = local_10.left;
  puVar1[0x26] = local_10.bottom;
  puVar1[0x20] = puVar1[0x20] & 0xffffff80;
  FUN_5cbaf550(param_1,(int)puVar1,0);
  if (puVar1[0x10] != 0) {
    SelectObject(hdc,local_2c);
  }
  ReleaseDC(param_1,hdc);
  return;
}


