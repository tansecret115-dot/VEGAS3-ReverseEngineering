/* Module: vegas30.exe
   Function: FUN_00412c60
   Address: 00412c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412c60(int param_1,HDC param_2,int param_3,LONG *param_4,int *param_5,RECT *param_6,
                 int param_7,uchar *param_8,uchar *param_9)

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
  RECT local_128;
  tagSIZE local_118;
  int local_110;
  UINT local_10c;
  COLORREF local_108;
  uchar local_104 [260];
  
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) || ((*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    local_118.cx = 1;
  }
  else {
    local_118.cx = 0;
  }
  if (((param_5 == (int *)0x0) || (param_5[2] <= *param_5)) ||
     (bVar2 = true, param_5[3] <= param_5[1])) {
    bVar2 = false;
  }
  if (((param_6 == (RECT *)0x0) || (param_6->right <= param_6->left)) ||
     ((param_6->bottom <= param_6->top || (bVar1 = true, param_7 == 0)))) {
    bVar1 = false;
  }
  DVar3 = GetSysColor(0xf);
  color = SetBkColor(param_2,DVar3);
  local_128.left = *param_4;
  local_128.top = param_4[1];
  local_128.right = param_4[2];
  local_128.bottom = param_4[3];
  ExtTextOutA(param_2,0,0,2,&local_128,(LPCSTR)0x0,0,(INT *)0x0);
  SetBkColor(param_2,color);
  if ((bVar2) && (param_3 != 0)) {
    local_128.left = *param_5;
    local_128.top = param_5[1];
    local_128.right = param_5[2];
    local_128.bottom = param_5[3];
    FUN_004d05e0(DAT_00647630,param_3,param_2,&local_128);
  }
  if (bVar1) {
    local_128.left = 0;
    local_128.top = 0;
    DVar3 = GetSysColor(0x12);
    local_108 = SetTextColor(param_2,DVar3);
    local_10c = SetTextAlign(param_2,8);
    local_110 = SetBkMode(param_2,1);
    if (local_118.cx != 0) {
      puVar4 = &DAT_0061036c;
      if (param_8 == (uchar *)0x0) {
        puVar4 = &DAT_0060f98c;
      }
      UVar5 = SfPrintF(local_104,&DAT_00610364,param_7,puVar4);
      pvVar6 = (HGDIOBJ)_SfGetUIFont_4(0x92);
      pvVar6 = SelectObject(param_2,pvVar6);
      GetTextExtentPoint32A(param_2,(LPCSTR)local_104,UVar5,(LPSIZE)&local_128);
      ExtTextOutA(param_2,param_6->left,param_6->bottom,4,param_6,(LPCSTR)local_104,UVar5,(INT *)0x0
                 );
      SelectObject(param_2,pvVar6);
    }
    if (param_8 != (uchar *)0x0) {
      iVar8 = (param_6->right - param_6->left) - local_128.left;
      pvVar6 = (HGDIOBJ)_SfGetUIFont_4(0x91);
      pvVar6 = SelectObject(param_2,pvVar6);
      iVar7 = lstrlenA((LPCSTR)param_8);
      GetTextExtentPoint32A(param_2,(LPCSTR)param_8,iVar7,&local_118);
      if ((param_9 == (uchar *)0x0) || (local_118.cx <= iVar8)) {
        param_9 = param_8;
      }
      _mbscpy(local_104,param_9);
      iVar7 = lstrlenA((LPCSTR)local_104);
      _SfCalcStringEllipsis_16(param_2,local_104,iVar7,iVar8);
      UVar5 = lstrlenA((LPCSTR)local_104);
      ExtTextOutA(param_2,param_6->left + local_128.left,param_6->bottom,4,param_6,(LPCSTR)local_104
                  ,UVar5,(INT *)0x0);
      SelectObject(param_2,pvVar6);
    }
    SetBkMode(param_2,local_110);
    SetTextAlign(param_2,local_10c);
    SetTextColor(param_2,local_108);
  }
  return;
}


