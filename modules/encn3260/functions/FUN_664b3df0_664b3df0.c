/* Module: encn3260.dll
   Function: FUN_664b3df0
   Address: 664b3df0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664b3df0(void *param_1)

{
  void *this;
  int iVar1;
  HDC hdc;
  void *this_00;
  HBRUSH pHVar2;
  HPEN pHVar3;
  LPCSTR pCVar4;
  int *piVar5;
  COLORREF color;
  int iVar6;
  uint uVar7;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_60;
  int local_5c;
  int local_54 [3];
  LPCSTR local_48 [3];
  LOGBRUSH local_3c;
  uint local_30;
  int local_2c;
  tagSIZE local_28;
  HGDIOBJ local_20;
  HGDIOBJ local_1c;
  COLORREF local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  HDC local_8;
  
  this = (void *)((int)param_1 + 0x163c);
  *(undefined4 *)((int)param_1 + 0x11a0) = 1;
  iVar1 = FUN_664b48a0(this,(byte *)s_TextOverlay_664e39c4);
  if (iVar1 == 0) {
    hdc = GetDC((HWND)0x0);
    FUN_664b42f0(param_1,hdc);
    GetTextExtentPointA(hdc,&DAT_664e3658,4,&local_28);
    FUN_664b4380(param_1,hdc);
    ReleaseDC((HWND)0x0,hdc);
    local_30 = *(uint *)((int)param_1 + 0x3c);
    local_2c = local_28.cy + 4;
    this_00 = operator_new(0x8cc);
    if (this_00 == (void *)0x0) {
      local_c = (undefined4 *)0x0;
    }
    else {
      local_c = FUN_664b4420(this_00,(int)param_1 + 0x48);
    }
    FUN_664b44e0(local_c,&local_30,*(int *)((int)param_1 + 0x2c));
  }
  else {
    FUN_664b4580(local_c,&local_30);
    if (*(int *)((int)param_1 + 0x3c) <= (int)local_30) goto LAB_664b3ee9;
    FUN_664b48c0(this,(byte *)s_TextOverlay_664e39c4,(int)param_1 + 0xd40);
    local_30 = *(uint *)((int)param_1 + 0x3c);
    FUN_664b44e0(local_c,&local_30,*(int *)((int)param_1 + 0x2c));
  }
  FUN_664b4a20(this,(byte *)s_TextOverlay_664e39c4,(int)local_c);
LAB_664b3ee9:
  iVar1 = *(int *)((int)param_1 + 0x34);
  local_8 = (HDC)0x0;
  local_5c = iVar1;
  FUN_664b4640(local_c,(uint *)&local_8);
  if (*(int *)((int)param_1 + 0x1624) == 0) {
    local_3c.lbColor = *(COLORREF *)((int)param_1 + 0x1630);
    local_3c.lbStyle = 0;
    local_3c.lbHatch = 0;
    pHVar2 = CreateBrushIndirect(&local_3c);
    *(HBRUSH *)((int)param_1 + 0x1624) = pHVar2;
  }
  if (*(int *)((int)param_1 + 0x1628) == 0) {
    pHVar3 = CreatePen(0,0,*(COLORREF *)((int)param_1 + 0x162c));
    *(HPEN *)((int)param_1 + 0x1628) = pHVar3;
  }
  local_1c = SelectObject(local_8,*(HGDIOBJ *)((int)param_1 + 0x1624));
  local_20 = SelectObject(local_8,*(HGDIOBJ *)((int)param_1 + 0x1628));
  FUN_664bb2e0(local_48,(int *)((int)param_1 + 0x1610));
  FUN_664b42f0(param_1,local_8);
  pCVar4 = *(LPCSTR *)((int)param_1 + 0x1610);
  GetTextExtentPointA(local_8,pCVar4,*(int *)(pCVar4 + -8),&local_28);
  if (iVar1 + -4 < local_28.cx) {
    pCVar4 = *(LPCSTR *)((int)param_1 + 0x1610);
    local_14 = 1;
    if (0 < *(int *)(pCVar4 + -8)) {
      local_18 = local_5c + -4;
      local_10 = local_18;
      do {
        iVar1 = local_14;
        GetTextExtentPointA(local_8,pCVar4,local_14,&local_28);
        if (local_10 < local_28.cx) {
          uVar7 = iVar1 - 1;
          if (0 < (int)uVar7) {
            local_10 = local_18;
            do {
              piVar5 = FUN_664bbab0((void *)((int)param_1 + 0x1610),local_54,uVar7);
              FUN_664bb570(local_48,piVar5);
              FUN_664bb3e0(local_54);
              piVar5 = FUN_664bb6c0(&local_60,local_48,&DAT_664e3384);
              FUN_664bb570(local_48,piVar5);
              FUN_664bb3e0(&local_60);
              GetTextExtentPointA(local_8,local_48[0],*(int *)(local_48[0] + -8),&local_28);
              if (local_28.cx <= local_10) break;
              uVar7 = uVar7 - 1;
            } while (0 < (int)uVar7);
          }
          local_3c.lbColor = 3;
          local_3c.lbHatch = 3;
          iVar1 = local_14;
        }
        pCVar4 = *(LPCSTR *)((int)param_1 + 0x1610);
        local_14 = iVar1 + 1;
      } while (local_14 <= *(int *)(pCVar4 + -8));
    }
  }
  else {
    local_3c.lbHatch = 3;
    local_3c.lbColor = (*(int *)((int)param_1 + 0x34) - local_28.cx) / 2;
  }
  local_70 = 0;
  iVar1 = (local_28.cx + *(int *)((int)param_1 + 0x34)) / 2;
  iVar6 = (*(int *)((int)param_1 + 0x34) - local_28.cx) / 2;
  local_6c = iVar1 + 2;
  local_68 = local_28.cy + 4;
  local_74 = iVar6 + -2;
  Rectangle(local_8,-2,iVar6 + -4,local_28.cy + 6,iVar1 + 4);
  color = SetTextColor(local_8,*(COLORREF *)((int)param_1 + 0x162c));
  local_18 = SetBkColor(local_8,*(COLORREF *)((int)param_1 + 0x1630));
  TextOutA(local_8,local_3c.lbColor,local_3c.lbHatch,local_48[0],*(int *)(local_48[0] + -8));
  SetBkColor(local_8,local_18);
  SetTextColor(local_8,color);
  FUN_664b4380(param_1,local_8);
  SelectObject(local_8,local_1c);
  SelectObject(local_8,local_20);
  GdiFlush();
  FUN_664b4660(local_c,(uint)local_8);
  FUN_664b4550(local_c,&local_74);
  FUN_664b41c0(local_c);
  local_68 = *(int *)((int)param_1 + 0x38);
  local_70 = (local_68 - local_28.cy) + -4;
  FUN_664b4680(local_c,&local_74,(uint *)((int)param_1 + 0xd40));
  FUN_664bb3e0((int *)local_48);
  return;
}


