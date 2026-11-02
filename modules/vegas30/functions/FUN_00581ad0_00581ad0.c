/* Module: vegas30.exe
   Function: FUN_00581ad0
   Address: 00581ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_00581ad0(int param_1,HDC param_2,int param_3,int param_4,RECT *param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  HBRUSH pHVar3;
  HGDIOBJ pvVar4;
  COLORREF CVar5;
  COLORREF CVar6;
  DWORD DVar7;
  HIMAGELIST himl;
  int iVar8;
  uint uVar9;
  int y;
  int x;
  DWORD *pDVar10;
  tagRECT local_48;
  DWORD local_38;
  HIMAGELIST local_34;
  int local_30;
  HDC local_2c;
  int local_28;
  int local_24;
  UINT local_8;
  DWORD local_4;
  
  uVar1 = *(uint *)(param_6 + 0x10);
  uVar9 = uVar1 & 1;
  uVar2 = uVar1 & 8;
  x = param_5->left + ((param_5->right - *(int *)(param_1 + 0x40)) - param_5->left >> 1);
  y = param_5->top + ((param_5->bottom - *(int *)(param_1 + 0x44)) - param_5->top >> 1);
  if (((uVar1 & 2) != 0) && (*(int *)(param_3 + 0x14) == 0)) {
    pHVar3 = GetSysColorBrush(0x14);
    pvVar4 = SelectObject(param_2,pHVar3);
    CVar5 = SetTextColor(param_2,0);
    CVar6 = SetBkColor(param_2,0xffffff);
    pDVar10 = &local_38;
    for (iVar8 = 0xe; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pDVar10 = 0;
      pDVar10 = pDVar10 + 1;
    }
    local_34 = *(HIMAGELIST *)(param_3 + 0xc);
    local_30 = param_4;
    local_28 = x + 1;
    local_24 = y + 1;
    local_38 = 0x38;
    local_2c = param_2;
    local_4 = 0xb8074a;
    local_8 = 0x50;
    ImageList_DrawIndirect((IMAGELISTDRAWPARAMS *)&local_38);
    local_28 = local_28 + -1;
    local_24 = local_24 + -1;
    pHVar3 = GetSysColorBrush(0x10);
    SelectObject(param_2,pHVar3);
    ImageList_DrawIndirect((IMAGELISTDRAWPARAMS *)&local_38);
    SetTextColor(param_2,CVar5);
    SetBkColor(param_2,CVar6);
    SelectObject(param_2,pvVar4);
    return;
  }
  if ((uVar2 == 0) || (uVar9 != 0)) {
    DVar7 = GetSysColor(4);
    SetBkColor(param_2,DVar7);
    ExtTextOutA(param_2,0,0,2,param_5,(LPCSTR)0x0,0,(INT *)0x0);
  }
  else {
    pvVar4 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    if (pvVar4 != (HGDIOBJ)0x0) {
      SetBrushOrgEx(param_2,param_5->left,param_5->top,(LPPOINT)&local_48);
      pvVar4 = SelectObject(param_2,pvVar4);
      DVar7 = GetSysColor(0x14);
      CVar5 = SetTextColor(param_2,DVar7);
      DVar7 = GetSysColor(4);
      CVar6 = SetBkColor(param_2,DVar7);
      PatBlt(param_2,param_5->left,param_5->top,param_5->right - param_5->left,
             param_5->bottom - param_5->top,0xf00021);
      SelectObject(param_2,pvVar4);
      SetTextColor(param_2,CVar5);
      SetBkColor(param_2,CVar6);
      SetBrushOrgEx(param_2,local_48.left,local_48.top,(LPPOINT)&local_48);
    }
  }
  if ((uVar1 & 2) == 0) {
    if ((uVar9 != 0) || (uVar2 != 0)) {
      local_48.top = param_5->top;
      local_48.left = param_5->left;
      local_48.right = param_5->right;
      local_48.bottom = param_5->bottom;
      DrawEdge(param_2,&local_48,(-(uint)(uVar2 != 0) & 0xfffffffe) + 4,0xf);
      if ((uVar9 != 0) && (himl = *(HIMAGELIST *)(param_3 + 0x10), himl != (HIMAGELIST)0x0))
      goto LAB_00581d6f;
    }
    himl = *(HIMAGELIST *)(param_3 + 0xc);
  }
  else {
    himl = *(HIMAGELIST *)(param_3 + 0x14);
  }
LAB_00581d6f:
  ImageList_Draw(himl,param_4,param_2,x,y,1);
  return;
}


