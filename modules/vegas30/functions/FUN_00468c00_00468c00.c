/* Module: vegas30.exe
   Function: FUN_00468c00
   Address: 00468c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00468c00(HDC param_1,LPRECT param_2,int param_3,int param_4,int param_5,HIMAGELIST param_6,
                 HIMAGELIST param_7,undefined4 param_8,int param_9,int param_10,int param_11,
                 int param_12,int param_13)

{
  bool bVar1;
  HBRUSH pHVar2;
  HGDIOBJ pvVar3;
  COLORREF CVar4;
  COLORREF CVar5;
  DWORD DVar6;
  uint uVar7;
  int iVar8;
  DWORD *pDVar9;
  UINT edge;
  tagPOINT local_50;
  tagRECT local_48;
  DWORD local_38;
  HIMAGELIST local_34;
  int local_30;
  HDC local_2c;
  int local_28;
  int local_24;
  UINT local_8;
  DWORD local_4;
  
  uVar7 = 0x800;
  if ((param_6 == param_7) || (DAT_0064b3dc != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  local_50.x = (LONG)param_6;
  iVar8 = 0;
  if (param_9 == 0) {
    pHVar2 = GetSysColorBrush(0x14);
    pvVar3 = SelectObject(param_1,pHVar2);
    CVar4 = SetTextColor(param_1,0);
    CVar5 = SetBkColor(param_1,0xffffff);
    pDVar9 = &local_38;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pDVar9 = 0;
      pDVar9 = pDVar9 + 1;
    }
    local_34 = param_6;
    local_30 = param_5;
    local_38 = 0x38;
    local_28 = param_2->left + 1 + param_3;
    local_2c = param_1;
    local_24 = param_2->top + 1 + param_4;
    local_4 = 0xb8074a;
    local_8 = 0x50;
    ImageList_DrawIndirect((IMAGELISTDRAWPARAMS *)&local_38);
    local_28 = local_28 + -1;
    local_24 = local_24 + -1;
    pHVar2 = GetSysColorBrush(0x10);
    SelectObject(param_1,pHVar2);
    ImageList_DrawIndirect((IMAGELISTDRAWPARAMS *)&local_38);
    SetTextColor(param_1,CVar4);
    SetBkColor(param_1,CVar5);
    SelectObject(param_1,pvVar3);
    return;
  }
  if (param_12 == 0) {
    if (param_11 != 0) goto LAB_00468e3a;
    if ((param_10 == 0) || (local_50.x = (LONG)param_7, !bVar1)) goto LAB_00468e7c;
    uVar7 = 0x80f;
    edge = 4;
  }
  else {
    pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    if (pvVar3 != (HGDIOBJ)0x0) {
      SetBrushOrgEx(param_1,param_2->left,param_2->top,&local_50);
      pvVar3 = SelectObject(param_1,pvVar3);
      DVar6 = GetSysColor(0x14);
      CVar4 = SetTextColor(param_1,DVar6);
      DVar6 = GetSysColor(0xf);
      CVar5 = SetBkColor(param_1,DVar6);
      PatBlt(param_1,param_2->left,param_2->top,param_2->right - param_2->left,
             param_2->bottom - param_2->top,0xf00021);
      SelectObject(param_1,pvVar3);
      SetTextColor(param_1,CVar4);
      SetBkColor(param_1,CVar5);
      SetBrushOrgEx(param_1,local_50.x,local_50.y,&local_50);
      local_48.left = param_2->left;
      local_48.top = param_2->top;
      local_48.right = param_2->right;
      local_48.bottom = param_2->bottom;
      InflateRect(&local_48,-1,-1);
      pHVar2 = (HBRUSH)_SfGetUIBrush_4(0xf);
      FrameRect(param_1,&local_48,pHVar2);
      uVar7 = 0;
    }
LAB_00468e3a:
    uVar7 = uVar7 | 0xf;
    iVar8 = 1;
    edge = 2;
  }
  local_50.x = (LONG)param_7;
  DrawEdge(param_1,param_2,edge,uVar7);
LAB_00468e7c:
  if (param_13 != 0) {
    ImageList_DrawEx((HIMAGELIST)local_50.x,param_5,param_1,param_2->left + param_3 + iVar8,
                     param_2->top + param_4 + iVar8,0,0,0xffffffff,0xffffffff,4);
    return;
  }
  ImageList_Draw((HIMAGELIST)local_50.x,param_5,param_1,param_2->left + param_3 + iVar8,
                 param_2->top + param_4 + iVar8,0);
  return;
}


