/* Module: mp3plug.dll
   Function: FUN_5f685910
   Address: 5f685910
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f685910(undefined4 param_1,int param_2)

{
  HGDIOBJ pvVar1;
  HFONT h;
  int cchText;
  tagRECT *lprc;
  UINT format;
  tagRECT local_24c;
  LOGFONTA local_23c;
  CHAR local_200 [512];
  
  if (param_2 != 0) {
    FUN_5f69dd80(DAT_5f74d2f4,0x8a,local_200,0x200);
    pvVar1 = GetStockObject(0xc);
    pvVar1 = SelectObject(*(HDC *)(param_2 + 0x18),pvVar1);
    GetObjectA(pvVar1,0x3c,&local_23c);
    local_23c.lfUnderline = '\x01';
    h = CreateFontIndirectA(&local_23c);
    SelectObject(*(HDC *)(param_2 + 0x18),h);
    SetTextColor(*(HDC *)(param_2 + 0x18),0xff0000);
    GetClientRect(*(HWND *)(param_2 + 0x14),&local_24c);
    lprc = &local_24c;
    format = 0x25;
    cchText = lstrlenA(local_200);
    DrawTextA(*(HDC *)(param_2 + 0x18),local_200,cchText,lprc,format);
    SelectObject(*(HDC *)(param_2 + 0x18),pvVar1);
    DeleteObject(h);
    return 1;
  }
  return 1;
}


