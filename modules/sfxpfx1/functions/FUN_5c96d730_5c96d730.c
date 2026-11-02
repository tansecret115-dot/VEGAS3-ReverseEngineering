/* Module: sfxpfx1.dll
   Function: FUN_5c96d730
   Address: 5c96d730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c96d730(int param_1,LPSTR param_2,int param_3,undefined2 *param_4)

{
  HDC hdc;
  HGDIOBJ pvVar1;
  int iVar2;
  tagTEXTMETRICA local_38;
  
  hdc = GetDC((HWND)0x0);
  pvVar1 = GetStockObject(param_1);
  pvVar1 = SelectObject(hdc,pvVar1);
  if (param_2 != (LPSTR)0x0) {
    GetTextFaceA(hdc,param_3,param_2);
  }
  GetTextMetricsA(hdc,&local_38);
  if (param_4 != (undefined2 *)0x0) {
    iVar2 = GetDeviceCaps(hdc,0x5a);
    iVar2 = MulDiv(local_38.tmHeight - local_38.tmInternalLeading,0x48,iVar2);
    *param_4 = (short)iVar2;
  }
  SelectObject(hdc,pvVar1);
  ReleaseDC((HWND)0x0,hdc);
  return -(local_38.tmHeight - local_38.tmInternalLeading);
}


