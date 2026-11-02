/* Module: vegas30.exe
   Function: FUN_00468a60
   Address: 00468a60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00468a60(HDC param_1,int *param_2)

{
  HFONT h;
  HGDIOBJ pvVar1;
  int iVar2;
  UINT align;
  COLORREF color;
  DWORD color_00;
  int y;
  int x;
  RECT local_70;
  CHAR local_60 [40];
  tagTEXTMETRICA local_38;
  
  if (0x1f < param_2[3] - param_2[1]) {
    _DAT_0063e2dc = 0;
    _DAT_0063e2d8 = param_2[3] - param_2[1];
    h = CreateFontIndirectA((LOGFONTA *)&DAT_0063e2d8);
    if (h != (HFONT)0x0) {
      pvVar1 = SelectObject(param_1,h);
      GetTextFaceA(param_1,0x28,local_60);
      iVar2 = lstrcmpiA(local_60,s_SfLogo_0063e2f4);
      if (iVar2 == 0) {
        GetTextMetricsA(param_1,&local_38);
        local_70.left = *param_2;
        local_70.right = param_2[2];
        local_70.top = param_2[1];
        local_70.bottom = param_2[3];
        y = local_70.bottom - local_38.tmDescent / 2;
        x = (local_70.left + local_70.right) / 2;
        iVar2 = SetBkMode(param_1,1);
        align = SetTextAlign(param_1,0x1e);
        color = GetTextColor(param_1);
        color_00 = GetSysColor(0xf);
        SetTextColor(param_1,0x808080);
        ExtTextOutA(param_1,x,y,4,&local_70,"adefgh",1,(INT *)0x0);
        SetTextColor(param_1,color_00);
        ExtTextOutA(param_1,x,y,4,&local_70,"efgh",1,(INT *)0x0);
        pvVar1 = SelectObject(param_1,pvVar1);
        SetTextAlign(param_1,align);
        SetBkMode(param_1,iVar2);
        SetTextColor(param_1,color);
        DeleteObject(pvVar1);
        return;
      }
      pvVar1 = SelectObject(param_1,pvVar1);
      DeleteObject(pvVar1);
    }
  }
  return;
}


