/* Module: encn3260.dll
   Function: FUN_664a9110
   Address: 664a9110
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_664a9110(void *this,HBITMAP param_1,undefined4 param_2)

{
  char cVar1;
  SHORT SVar2;
  HDC hdc;
  int iVar3;
  int iVar4;
  HFONT h;
  HGDIOBJ pvVar5;
  DWORD DVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  code *pcVar11;
  int nDenominator;
  char local_178 [256];
  tagSIZE local_78;
  undefined1 local_70 [16];
  DWORD local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  COLORREF local_40;
  HGDIOBJ local_3c;
  HGDIOBJ local_38;
  undefined4 local_34 [2];
  COLORREF local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  DWORD local_14;
  undefined4 local_10;
  void *local_c;
  int local_8;
  
  local_18 = (uint *)((int)this + 0x144);
  local_c = this;
  hdc = GetDC((HWND)*local_18);
  FUN_664b0f60(local_34);
  local_8 = 0;
  local_10 = 0;
  iVar3 = FUN_664b0fc0(local_34,hdc,param_1,&local_10,&local_8);
  if (iVar3 != 0) {
    FUN_664b0fa0(local_34);
    return 0;
  }
  iVar3 = SetMapMode(hdc,1);
  nDenominator = 0x48;
  iVar4 = GetDeviceCaps(hdc,0x5a);
  iVar4 = MulDiv(0xf,iVar4,nDenominator);
  h = CreateFontA(-iVar4,0,0,0,400,0,0,0,1,0,0,0,0,s_Ariel_664e365c);
  SetMapMode(hdc,iVar3);
  SelectObject(hdc,h);
  GetTextExtentPointA(hdc,&DAT_664e3658,4,&local_78);
  local_44 = local_78.cy + 2;
  pvVar5 = GetStockObject(4);
  local_38 = SelectObject(hdc,pvVar5);
  pvVar5 = GetStockObject(8);
  local_3c = SelectObject(hdc,pvVar5);
  local_40 = SetTextColor(hdc,0xff00);
  local_2c = SetBkColor(hdc,0);
  pcVar11 = GetSystemMetrics_exref;
  local_28 = 0;
  local_54 = 0;
  local_24 = 0;
  local_50 = 0;
  local_20 = 0;
  local_1c = 0;
  local_4c = *(undefined4 *)(local_8 + 4);
  local_48 = *(undefined4 *)(local_8 + 8);
  iVar3 = GetSystemMetrics(1);
  piVar7 = (int *)(local_8 + 4);
  iVar4 = (iVar3 + *(int *)(local_8 + 8) * -2) / 2;
  iVar3 = GetSystemMetrics(0);
  local_28 = (iVar3 + *piVar7 * -2) / 2;
  local_1c = iVar4 + *(int *)(local_8 + 8) * 2;
  local_20 = local_28 + *piVar7 * 2;
  local_24 = iVar4;
  GetAsyncKeyState(0x1b);
  local_14 = GetTickCount();
  uVar9 = 0;
  param_1 = (HBITMAP)0x0;
  do {
    FUN_664b3410(*(void **)((int)local_c + 0x140));
    (**(code **)(**(int **)((int)local_c + 0x140) + 0x10))
              (*(int **)((int)local_c + 0x140),local_10,local_8,&local_28,&local_54);
    FUN_664b3460(*(void **)((int)local_c + 0x140),0,local_18);
    DVar6 = GetTickCount();
    if (uVar9 < DVar6 - local_14) {
      local_70._12_4_ = 0;
      local_58 = (*pcVar11)(1);
      local_58 = local_58 + 1;
      local_60 = local_58 - local_44;
      local_5c = (*pcVar11)(0);
      local_5c = local_5c + 1;
      Rectangle(hdc,local_70._12_4_,local_60,local_5c,local_58);
      uVar9 = uVar9 + 1000;
      sprintf(local_178,s__s__d_664e336c,param_2,(6000 - uVar9) / 1000);
      uVar8 = 0xffffffff;
      pcVar10 = local_178;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      DrawTextA(hdc,local_178,~uVar8 - 1,(LPRECT)(local_70 + 0xc),5);
      pcVar11 = GetSystemMetrics_exref;
      if (uVar9 == 6000) goto LAB_664a93e4;
    }
    param_1 = (HBITMAP)((int)&param_1->unused + 1);
    SVar2 = GetAsyncKeyState(0x1b);
  } while (SVar2 == 0);
  iVar3 = PeekMessageA((LPMSG)local_70,(HWND)0x0,0x100,0x108,1);
  while (iVar3 != 0) {
    iVar3 = PeekMessageA((LPMSG)local_70,(HWND)0x0,0x100,0x108,1);
  }
LAB_664a93e4:
  SetTextColor(hdc,local_40);
  SetBkColor(hdc,local_2c);
  SelectObject(hdc,local_3c);
  SelectObject(hdc,local_38);
  ReleaseDC((HWND)*local_18,hdc);
  DVar6 = GetTickCount();
  if (DVar6 < local_14) {
    uVar9 = (DVar6 - local_14) - 1;
  }
  else {
    uVar9 = DVar6 - local_14;
  }
  FUN_664b0fa0(local_34);
  return (uint)((int)param_1 * 1000) / uVar9;
}


