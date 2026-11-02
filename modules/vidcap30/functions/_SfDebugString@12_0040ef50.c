/* Module: vidcap30.exe
   Function: _SfDebugString@12
   Address: 0040ef50
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
  
                    /* 0xef50  282  _SfDebugString@12 */
  if (param_3 == 2) {
    FUN_0040edd0(param_1,param_2);
    return;
  }
  hdc = GetDC((HWND)0x0);
  pvVar2 = GetStockObject(0xb);
  SelectObject(hdc,pvVar2);
  if (DAT_005bbd10 == DAT_005bbd18) {
    GetClipBox(hdc,&local_10);
    DAT_005bbd14 = local_10.top;
    DAT_005bbd18 = local_10.right + -0x50;
    DAT_005bbd1c = local_10.bottom;
    DAT_005bbd10 = 1;
    UVar3 = GetProfileIntA("Debug","LogToScreenLines",5);
    if (0 < (int)UVar3) {
      GetTextExtentPointA(hdc,"0",1,&local_18);
      DAT_005bbd14 = DAT_005bbd1c - local_18.cy * UVar3;
    }
    pvVar2 = GetStockObject(1);
    SelectObject(hdc,pvVar2);
    PatBlt(hdc,DAT_005bbd10,DAT_005bbd14,DAT_005bbd18 - DAT_005bbd10,DAT_005bbd1c - DAT_005bbd14,
           0xf00021);
    PatBlt(hdc,DAT_005bbd10 + -1,DAT_005bbd14 + -1,(DAT_005bbd18 - DAT_005bbd10) + 2,1,0x42);
    PatBlt(hdc,DAT_005bbd10 + -1,DAT_005bbd14 + -1,1,(DAT_005bbd1c - DAT_005bbd14) + -2,0x42);
    PatBlt(hdc,DAT_005bbd10 + -1,DAT_005bbd1c,(DAT_005bbd18 - DAT_005bbd10) + 2,1,0x42);
    PatBlt(hdc,DAT_005bbd18,DAT_005bbd14 + -1,1,(DAT_005bbd1c - DAT_005bbd14) + -2,0x42);
    InflateRect((LPRECT)&DAT_005bbd10,-1,-1);
    DAT_005bbd20 = DAT_005bbd10;
    DAT_005bbd24 = DAT_005bbd14;
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
  PatBlt(hdc,DAT_005bbd20,DAT_005bbd24,local_20.cx + 2,local_20.cy,0xff0062);
  TextOutA(hdc,DAT_005bbd20,DAT_005bbd24,param_1,~uVar5 - 1);
  if (param_2 == 0) {
    DAT_005bbd20 = DAT_005bbd20 + local_20.cx;
  }
  else {
    DAT_005bbd24 = DAT_005bbd24 + local_20.cy;
    DAT_005bbd20 = DAT_005bbd10;
  }
  pt.y = DAT_005bbd24;
  pt.x = DAT_005bbd20;
  BVar4 = PtInRect((RECT *)&DAT_005bbd10,pt);
  if ((BVar4 == 0) || (DAT_005bbd1c < DAT_005bbd24 + local_20.cy)) {
    DAT_005bbd24 = DAT_005bbd14;
    DAT_005bbd20 = DAT_005bbd10;
  }
  if (local_20.cy * 2 < DAT_005bbd1c - DAT_005bbd14) {
    pvVar2 = GetStockObject(1);
    SelectObject(hdc,pvVar2);
    PatBlt(hdc,DAT_005bbd20,DAT_005bbd24,DAT_005bbd18 - DAT_005bbd20,local_20.cy,0xf00021);
  }
  ReleaseDC((HWND)0x0,hdc);
  return;
}


