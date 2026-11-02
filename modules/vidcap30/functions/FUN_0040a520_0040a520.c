/* Module: vidcap30.exe
   Function: FUN_0040a520
   Address: 0040a520
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040a520(int param_1,HDC param_2,HIMAGELIST param_3,int param_4,LONG *param_5,int *param_6,
                 RECT *param_7,int param_8,uchar *param_9,uchar *param_10)

{
  bool bVar1;
  bool bVar2;
  DWORD DVar3;
  COLORREF color;
  undefined1 *puVar4;
  UINT UVar5;
  HGDIOBJ pvVar6;
  int iVar7;
  int iVar8;
  tagSIZE local_128;
  RECT local_120;
  int local_110;
  UINT local_10c;
  COLORREF local_108;
  uchar local_104 [260];
  
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) || ((*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    local_128.cx = 1;
  }
  else {
    local_128.cx = 0;
  }
  if ((((param_6 == (int *)0x0) || (param_6[2] <= *param_6)) || (param_6[3] <= param_6[1])) ||
     (bVar2 = true, param_3 == (HIMAGELIST)0x0)) {
    bVar2 = false;
  }
  if (((param_7 == (RECT *)0x0) || (param_7->right <= param_7->left)) ||
     ((param_7->bottom <= param_7->top || (bVar1 = true, param_8 == 0)))) {
    bVar1 = false;
  }
  DVar3 = GetSysColor(0xf);
  color = SetBkColor(param_2,DVar3);
  local_120.left = *param_5;
  local_120.top = param_5[1];
  local_120.right = param_5[2];
  local_120.bottom = param_5[3];
  ExtTextOutA(param_2,0,0,2,&local_120,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_2,color);
  if (bVar2) {
    ImageList_Draw(param_3,param_4,param_2,*param_6,param_6[1],1);
  }
  if (bVar1) {
    local_120.left = 0;
    local_120.top = 0;
    DVar3 = GetSysColor(0x12);
    local_108 = SetTextColor(param_2,DVar3);
    local_10c = SetTextAlign(param_2,8);
    local_110 = SetBkMode(param_2,1);
    if (local_128.cx != 0) {
      puVar4 = &DAT_00586f14;
      if (param_9 == (uchar *)0x0) {
        puVar4 = &DAT_00586c70;
      }
      UVar5 = SfPrintF(local_104,&DAT_00586f0c,param_8,puVar4);
      pvVar6 = (HGDIOBJ)_SfGetUIFont_4(0x92);
      pvVar6 = SelectObject(param_2,pvVar6);
      GetTextExtentPoint32A(param_2,(LPCSTR)local_104,UVar5,(LPSIZE)&local_120);
      ExtTextOutA(param_2,param_7->left,param_7->bottom,4,param_7,(LPCSTR)local_104,UVar5,(INT *)0x0
                 );
      SelectObject(param_2,pvVar6);
    }
    if (param_9 != (uchar *)0x0) {
      iVar8 = (param_7->right - param_7->left) - local_120.left;
      pvVar6 = (HGDIOBJ)_SfGetUIFont_4(0x91);
      pvVar6 = SelectObject(param_2,pvVar6);
      iVar7 = lstrlenA((LPCSTR)param_9);
      GetTextExtentPoint32A(param_2,(LPCSTR)param_9,iVar7,&local_128);
      if ((param_10 == (uchar *)0x0) || (local_128.cx <= iVar8)) {
        param_10 = param_9;
      }
      _mbscpy(local_104,param_10);
      iVar7 = lstrlenA((LPCSTR)local_104);
      _SfCalcStringEllipsis_16(param_2,local_104,iVar7,iVar8);
      UVar5 = lstrlenA((LPCSTR)local_104);
      ExtTextOutA(param_2,param_7->left + local_120.left,param_7->bottom,4,param_7,(LPCSTR)local_104
                  ,UVar5,(INT *)0x0);
      SelectObject(param_2,pvVar6);
    }
    SetBkMode(param_2,local_110);
    SetTextAlign(param_2,local_10c);
    SetTextColor(param_2,local_108);
  }
  return;
}


