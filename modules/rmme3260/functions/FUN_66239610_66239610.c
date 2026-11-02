/* Module: rmme3260.dll
   Function: FUN_66239610
   Address: 66239610
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66239610(void *this,int param_1,HANDLE param_2)

{
  int *piVar1;
  char cVar2;
  HBITMAP pHVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  HDC hdc;
  HDC hdc_00;
  COLORREF color;
  DWORD DVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 local_2dc [328];
  char local_194 [256];
  undefined1 local_94 [4];
  int local_90;
  int local_8c;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  char *local_5c [3];
  HGDIOBJ local_50;
  HGDIOBJ local_4c;
  HDC local_48;
  HGDIOBJ local_44;
  HBRUSH local_40;
  uint local_3c;
  HDC local_38;
  HWND local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  HBITMAP local_24;
  void *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  local_20 = this;
  FUN_66245cd0(local_2dc,*(int **)((int)this + 0x28));
  local_14 = 0;
  local_28 = 0;
  local_38 = (HDC)0x0;
  local_34 = (HWND)0x0;
  local_8 = (int *)0x0;
  local_1c = 0;
  FUN_662500f0(local_5c);
  local_18 = (int *)0x0;
  local_c = (int *)0x0;
  local_3c = 0;
  iVar4 = (**(code **)**(undefined4 **)((int)this + 0x28))
                    (*(undefined4 **)((int)this + 0x28),&DAT_6626abb8,&local_18);
  if (iVar4 == 0) {
    uVar9 = 0xffffffff;
    pcVar5 = s_FullScreenData_6626fd54;
    do {
      pcVar12 = pcVar5;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    pcVar5 = pcVar12 + -uVar9;
    pcVar12 = local_194;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar5 = &DAT_6626fdc0;
    do {
      pcVar12 = pcVar5;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar4 = -1;
    pcVar5 = local_194;
    do {
      pcVar11 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar5 = pcVar12 + -uVar9;
    pcVar12 = pcVar11 + -1;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar9 = 0xffffffff;
    pcVar5 = s_NewStringFormat_6626fe54;
    do {
      pcVar12 = pcVar5;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar12;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9;
    iVar4 = -1;
    pcVar5 = local_194;
    do {
      pcVar11 = pcVar5;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar11 = pcVar5 + 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar11;
    } while (cVar2 != '\0');
    pcVar5 = pcVar12 + -uVar9;
    pcVar12 = pcVar11 + -1;
    for (uVar10 = uVar9 >> 2; piVar1 = local_18, uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar12 = pcVar12 + 1;
    }
    (**(code **)(*piVar1 + 0xc))(piVar1,local_194,&local_c);
    if (local_c != (int *)0x0) {
      pcVar5 = (char *)(**(code **)(*local_c + 0x1c))(local_c);
      iVar4 = atoi(pcVar5);
      local_3c = (uint)(iVar4 == 1);
    }
    if (local_18 != (int *)0x0) {
      (**(code **)(*local_18 + 8))(local_18);
      local_18 = (int *)0x0;
    }
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 8))(local_c);
      local_c = (int *)0x0;
    }
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x34))(param_1 + 4,&local_30);
  puVar6 = operator_new(8);
  if (puVar6 == (undefined4 *)0x0) {
    local_10 = (undefined4 *)0x0;
  }
  else {
    local_10 = (undefined4 *)FUN_662463c0(puVar6);
  }
  hdc = CreateCompatibleDC((HDC)0x0);
  local_48 = GetDC((HWND)0x0);
  local_24 = CreateCompatibleBitmap(local_48,local_30,local_2c);
  local_44 = SelectObject(hdc,local_24);
  hdc_00 = CreateCompatibleDC((HDC)0x0);
  local_50 = SelectObject(hdc_00,param_2);
  color = GetPixel(hdc_00,1,1);
  local_40 = CreateSolidBrush(color);
  local_4c = SelectObject(hdc,local_40);
  GetObjectA(param_2,0x18,local_94);
  Rectangle(hdc,0,0,local_30,local_2c);
  BitBlt(hdc,(local_30 - local_90) / 2,(local_2c - local_8c) / 2,local_90,local_8c,hdc_00,0,0,
         0xcc0020);
  SelectObject(hdc_00,local_50);
  SelectObject(hdc,local_44);
  SelectObject(hdc,local_4c);
  DeleteObject(local_40);
  DeleteDC(hdc_00);
  ReleaseDC((HWND)0x0,local_48);
  puVar6 = local_10;
  iVar4 = FUN_66246420(local_10,hdc,local_24,&local_28,&local_14);
  if (iVar4 == 0) {
    local_6c = 0;
    local_64 = *(undefined4 *)(local_14 + 4);
    local_68 = 0;
    local_60 = *(undefined4 *)(local_14 + 8);
    local_7c = 0;
    local_74 = *(undefined4 *)(local_14 + 4);
    local_78 = 0;
    local_70 = *(undefined4 *)(local_14 + 8);
    piVar1 = (int *)(param_1 + 0x14);
    (**(code **)(*(int *)(param_1 + 0x14) + 0x24))(piVar1,&local_8);
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_8);
    if (local_14 != 0) {
      (**(code **)(*local_8 + 0x10))(local_8,local_14);
    }
    if (((*(byte *)((int)local_20 + 0x61) & 2) == 0) &&
       (puVar6 = (undefined4 *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(param_1 + 8),
       puVar6 != (undefined4 *)0x0)) {
      local_34 = (HWND)*puVar6;
      local_38 = GetDC(local_34);
      FUN_66243ef0(*(void **)(param_1 + 0x5c),local_38);
    }
    piVar1 = (int *)(param_1 + 0x18);
    (**(code **)(*(int *)(param_1 + 0x18) + 0x20))(piVar1,0);
    (**(code **)(*piVar1 + 0x10))(piVar1,0);
    (**(code **)(*piVar1 + 0x28))(piVar1,0);
    (**(code **)(*piVar1 + 0x18))(piVar1,0);
    DVar7 = GetTickCount();
    local_1c = 0;
    uVar9 = 4;
    DVar8 = GetTickCount();
    uVar10 = DVar8 - DVar7;
    while (puVar6 = local_10, uVar10 < 3000) {
      (**(code **)(*local_8 + 0x14))(local_8,local_28,&local_7c,&local_6c);
      iVar4 = FUN_662395a0();
      puVar6 = local_10;
      if (iVar4 != 0) break;
      local_1c = local_1c + 1;
      DVar8 = GetTickCount();
      if ((int)((DVar7 + 3000) - DVar8) / 1000 < (int)uVar9) {
        DVar8 = GetTickCount();
        uVar9 = ((DVar7 + 3000) - DVar8) / 1000;
        if (local_3c == 0) {
          pcVar5 = s__d__s_6626fe44;
        }
        else {
          pcVar5 = s__s__d_6626fe4c;
        }
        FUN_662508c0(local_5c,pcVar5);
        pHVar3 = local_24;
        FUN_66239aa0(local_5c[0],hdc,local_24);
        FUN_66246420(local_10,hdc,pHVar3,&local_28,&local_14);
      }
      DVar8 = GetTickCount();
      uVar10 = DVar8 - DVar7;
    }
  }
  DeleteObject(local_24);
  if (local_38 != (HDC)0x0) {
    ReleaseDC(local_34,local_38);
  }
  if (hdc != (HDC)0x0) {
    DeleteDC(hdc);
  }
  if (puVar6 != (undefined4 *)0x0) {
    (**(code **)*puVar6)(1);
  }
  (**(code **)(*local_8 + 0x18))(local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
    local_8 = (int *)0x0;
  }
  FUN_66250210((int *)local_5c);
  FUN_66245e10((int)local_2dc);
  return local_1c / 3;
}


