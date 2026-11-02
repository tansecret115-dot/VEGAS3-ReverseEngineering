/* Module: vegas30k.dll
   Function: FUN_011446c0
   Address: 011446c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011446c0(int param_1,HCURSOR param_2,uchar *param_3)

{
  uchar *_Dest;
  uchar uVar1;
  HWND hWnd;
  uchar *lpsz;
  uchar *puVar2;
  
  hWnd = *(HWND *)(param_1 + 0x18);
  _Dest = (uchar *)(param_1 + 0x250);
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  uVar1 = *_Dest;
  lpsz = _Dest;
  puVar2 = _Dest;
  while (uVar1 != '\0') {
    if (uVar1 == '\\') {
      puVar2 = lpsz;
    }
    lpsz = (uchar *)CharNextA((LPCSTR)lpsz);
    uVar1 = *lpsz;
  }
  if (*puVar2 == '\\') {
    *puVar2 = '\0';
    uVar1 = *param_3;
    while ((uVar1 != '\0' && (uVar1 != '\\'))) {
      param_3 = (uchar *)CharNextA((LPCSTR)param_3);
      uVar1 = *param_3;
    }
    if (param_3 != (uchar *)0x0) {
      _mbscat(_Dest,param_3);
    }
    SendMessageA(hWnd,0xb,0,0);
    FUN_0112fdb0(param_1,_Dest,1,1);
    SendMessageA(hWnd,0xb,1,0);
  }
  else {
    FUN_01131090(param_1);
  }
  SetCursor(param_2);
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return;
}


