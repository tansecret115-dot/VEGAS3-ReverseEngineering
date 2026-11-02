/* Module: vegas30k.dll
   Function: FUN_0111a680
   Address: 0111a680
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0111a680(HWND param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  HDC hdc;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  tagSIZE *ptVar7;
  HGDIOBJ local_24;
  uint local_20;
  uint local_1c;
  tagSIZE local_18;
  tagRECT local_10;
  
  puVar2 = param_2;
  hdc = GetDC(param_1);
  if (((HGDIOBJ)param_2[0x11] == (HGDIOBJ)0x0) || ((*param_2 & 0x100) != 0)) {
    if ((HGDIOBJ)param_2[0x10] != (HGDIOBJ)0x0) {
      local_24 = SelectObject(hdc,(HGDIOBJ)param_2[0x10]);
      _SfGetTextExtent_16(param_2[0x10],&DAT_011da99c,1,&local_20);
      param_2[0x12] = local_20;
      param_2[0x13] = local_1c;
      goto LAB_0111a71d;
    }
    local_1c = 8;
    param_2[0x12] = 8;
  }
  else {
    local_24 = SelectObject(hdc,(HGDIOBJ)param_2[0x11]);
    _SfGetTextExtent_16(param_2[0x11],&DAT_011da99c,1,&local_20);
    param_2[0x12] = local_20;
  }
  param_2[0x13] = local_1c;
LAB_0111a71d:
  if ((HDC)param_2[0x15] != (HDC)0x0) {
    if (param_2[0x16] != 0) {
      SelectObject((HDC)param_2[0x15],(HGDIOBJ)param_2[0x17]);
    }
    DeleteDC((HDC)param_2[0x15]);
    param_2[0x15] = 0;
  }
  if ((HGDIOBJ)param_2[0x16] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_2[0x16]);
    param_2[0x16] = 0;
  }
  GetClientRect(param_1,&local_10);
  iVar3 = local_10.bottom - local_10.top;
  uVar4 = *param_2 & 0x40;
  if (uVar4 == 0) {
    param_2[0x20] = local_10.right;
    param_2[0x21] = local_10.bottom - 2;
    param_2[0x1e] = (local_10.right - iVar3) + 4;
    puVar1 = param_2 + 0x1a;
    param_2[0x1f] = local_10.top + 2;
    *puVar1 = param_2[0x1e];
    param_2[0x1b] = param_2[0x1f];
    param_2[0x1c] = param_2[0x20];
    param_2[0x1d] = param_2[0x21];
    param_2[0x1c] = param_2[0x1c] + (4 - iVar3);
    *puVar1 = *puVar1 + (4 - iVar3);
    uVar5 = param_2[0x13] + 4;
  }
  else {
    uVar5 = param_2[0x13] + 6;
  }
  uVar5 = uVar5 + (uVar5 & 1);
  if ((*param_2 & 0x20) == 0) {
    local_10.bottom = uVar5 + local_10.top;
  }
  else {
    local_10.top = local_10.bottom - uVar5;
  }
  if (uVar4 != 0) {
    param_2[0x20] = local_10.right;
    param_2[0x1f] = local_10.top;
    param_2[0x1e] = local_10.right - uVar5;
    puVar1 = param_2 + 0x1a;
    param_2[0x21] = local_10.bottom;
    *puVar1 = param_2[0x1e];
    param_2[0x1b] = param_2[0x1f];
    param_2[0x1c] = param_2[0x20];
    param_2[0x1d] = local_10.bottom;
    param_2[0x1c] = param_2[0x1c] - uVar5;
    *puVar1 = *puVar1 - uVar5;
  }
  puVar1 = param_2 + 0x18;
  *puVar1 = (int)uVar5 / 2 + 3;
  param_2[0x19] = uVar5;
  if (param_2[0x14] == 0) {
    uVar4 = FUN_01116ad0(uVar4,*param_2 & 0x20,puVar1);
    param_2[0x14] = uVar4;
  }
  local_10.left = *puVar1;
  local_10.right = local_10.left;
  if (param_2[2] == 0) {
    uVar4 = 0;
    if (param_2[0x2c] != 0) {
      puVar6 = param_2 + 0x4d;
      do {
        ptVar7 = &local_18;
        iVar3 = lstrlenA((LPCSTR)puVar6);
        GetTextExtentPointA(hdc,(LPCSTR)puVar6,iVar3,ptVar7);
        puVar6[9] = local_10.left;
        local_10.right = local_18.cx + 6 + local_10.left;
        puVar6[10] = local_10.top;
        puVar6[0xb] = local_10.right;
        puVar6[0xc] = local_10.bottom;
        local_10.left = local_10.right + *puVar1;
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 0xe;
      } while (uVar4 < param_2[0x2c]);
    }
  }
  else {
    puVar6 = param_2 + 0x2c;
    param_2 = (uint *)0x0;
    if (*puVar6 != 0) {
      puVar6 = puVar2 + 0x4d;
      do {
        ptVar7 = &local_18;
        iVar3 = lstrlenA((LPCSTR)puVar6);
        GetTextExtentPointA(hdc,(LPCSTR)puVar6,iVar3,ptVar7);
        if ((*puVar2 & 0x40) == 0) {
          iVar3 = (local_18.cx - local_10.top) + local_10.left + 10;
        }
        else {
          iVar3 = (local_18.cx - local_10.top) + local_10.left + 2;
        }
        local_10.right = iVar3 + local_10.bottom;
        puVar6[9] = local_10.left;
        puVar6[10] = local_10.top;
        puVar6[0xb] = local_10.right;
        puVar6[0xc] = local_10.bottom;
        local_10.left = local_10.right + *puVar1;
        param_2 = (uint *)((int)param_2 + 1);
        puVar6 = puVar6 + 0xe;
      } while (param_2 < puVar2[0x2c]);
    }
  }
  puVar2[0x28] = local_10.left;
  puVar2[0x29] = local_10.bottom;
  puVar2[0x23] = puVar2[0x23] & 0xffffff80;
  FUN_0111aa00(param_1,puVar2,0);
  if (puVar2[0x11] != 0) {
    SelectObject(hdc,local_24);
  }
  ReleaseDC(param_1,hdc);
  return;
}


