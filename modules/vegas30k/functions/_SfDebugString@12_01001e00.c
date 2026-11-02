/* Module: vegas30k.dll
   Function: _SfDebugString@12
   Address: 01001e00
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfDebugString_12(LPCSTR param_1,int param_2,int param_3)

{
  char cVar1;
  POINT pt;
  HDC hdc;
  HGDIOBJ pvVar2;
  UINT UVar3;
  BOOL BVar4;
  uint uVar5;
  LPCSTR pCVar6;
  tagSIZE local_20;
  tagSIZE local_18;
  tagRECT local_10;
  
                    /* 0x1e00  811  _SfDebugString@12 */
  if (param_3 == 2) {
    FUN_01001c80(param_1,param_2);
    return;
  }
  hdc = GetDC((HWND)0x0);
  pvVar2 = GetStockObject(0xb);
  SelectObject(hdc,pvVar2);
  if (DAT_01209028 == DAT_01209030) {
    GetClipBox(hdc,&local_10);
    DAT_0120902c = local_10.top;
    DAT_01209030 = local_10.right + -0x50;
    DAT_01209034 = local_10.bottom;
    DAT_01209028 = 1;
    UVar3 = GetProfileIntA("Debug","LogToScreenLines",5);
    if (0 < (int)UVar3) {
      GetTextExtentPointA(hdc,"0",1,&local_18);
      DAT_0120902c = DAT_01209034 - local_18.cy * UVar3;
    }
    pvVar2 = GetStockObject(1);
    SelectObject(hdc,pvVar2);
    PatBlt(hdc,DAT_01209028,DAT_0120902c,DAT_01209030 - DAT_01209028,DAT_01209034 - DAT_0120902c,
           0xf00021);
    PatBlt(hdc,DAT_01209028 + -1,DAT_0120902c + -1,(DAT_01209030 - DAT_01209028) + 2,1,0x42);
    PatBlt(hdc,DAT_01209028 + -1,DAT_0120902c + -1,1,(DAT_01209034 - DAT_0120902c) + -2,0x42);
    PatBlt(hdc,DAT_01209028 + -1,DAT_01209034,(DAT_01209030 - DAT_01209028) + 2,1,0x42);
    PatBlt(hdc,DAT_01209030,DAT_0120902c + -1,1,(DAT_01209034 - DAT_0120902c) + -2,0x42);
    InflateRect((LPRECT)&DAT_01209028,-1,-1);
    DAT_01209038 = DAT_01209028;
    DAT_0120903c = DAT_0120902c;
  }
  uVar5 = 0xffffffff;
  pCVar6 = param_1;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pCVar6;
    pCVar6 = pCVar6 + 1;
  } while (cVar1 != '\0');
  GetTextExtentPointA(hdc,param_1,~uVar5 - 1,&local_20);
  PatBlt(hdc,DAT_01209038,DAT_0120903c,local_20.cx + 2,local_20.cy,0xff0062);
  TextOutA(hdc,DAT_01209038,DAT_0120903c,param_1,~uVar5 - 1);
  if (param_2 == 0) {
    DAT_01209038 = DAT_01209038 + local_20.cx;
  }
  else {
    DAT_0120903c = DAT_0120903c + local_20.cy;
    DAT_01209038 = DAT_01209028;
  }
  pt.y = DAT_0120903c;
  pt.x = DAT_01209038;
  BVar4 = PtInRect((RECT *)&DAT_01209028,pt);
  if ((BVar4 == 0) || (DAT_01209034 < DAT_0120903c + local_20.cy)) {
    DAT_0120903c = DAT_0120902c;
    DAT_01209038 = DAT_01209028;
  }
  if (local_20.cy * 2 < DAT_01209034 - DAT_0120902c) {
    pvVar2 = GetStockObject(1);
    SelectObject(hdc,pvVar2);
    PatBlt(hdc,DAT_01209038,DAT_0120903c,DAT_01209030 - DAT_01209038,local_20.cy,0xf00021);
  }
  ReleaseDC((HWND)0x0,hdc);
  return;
}


