/* Module: vegas30.exe
   Function: FUN_0044f090
   Address: 0044f090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044f090(HDC param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  HDC hdc;
  HGDIOBJ h;
  COLORREF color;
  COLORREF color_00;
  HGDIOBJ pvVar1;
  
  pvVar1 = (HGDIOBJ)*param_3;
  if (pvVar1 != (HGDIOBJ)0x0) {
    hdc = CreateCompatibleDC(param_1);
    if ((HGDIOBJ)param_3[1] == (HGDIOBJ)0x0) {
      pvVar1 = SelectObject(hdc,pvVar1);
      BitBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],hdc,param_4,
             param_5,0xcc0020);
    }
    else {
      if (DAT_0064bd98 == 0) {
        h = SelectObject(hdc,(HGDIOBJ)param_3[1]);
        color = SetTextColor(param_1,0);
        color_00 = SetBkColor(param_1,0xffffff);
        BitBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],hdc,param_4
               ,param_5,0x8800c6);
        SetBkColor(param_1,color_00);
        SetTextColor(param_1,color);
        SelectObject(hdc,pvVar1);
        BitBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],hdc,param_4
               ,param_5,0x660046);
        SelectObject(hdc,h);
        DeleteDC(hdc);
        return;
      }
      pvVar1 = SelectObject(hdc,pvVar1);
      MaskBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],hdc,param_4,
              param_5,(HBITMAP)param_3[1],param_4,param_5,0xccaa0029);
    }
    SelectObject(hdc,pvVar1);
    DeleteDC(hdc);
  }
  return;
}


