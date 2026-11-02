/* Module: vidpcore.dll
   Function: FUN_5deaa7c0
   Address: 5deaa7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5deaa7c0(int param_1)

{
  HDC hdc;
  int w;
  int h;
  HGDIOBJ pvVar1;
  DWORD color;
  HBRUSH pHVar2;
  
  if (param_1 == 0) {
    return 0x80070057;
  }
  hdc = *(HDC *)(param_1 + 0x3d8);
  pvVar1 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x3dc));
  w = *(int *)(param_1 + 0x3e4);
  *(HGDIOBJ *)(param_1 + 0x410) = pvVar1;
  h = *(int *)(param_1 + 1000);
  color = GetSysColor(0xf);
  pHVar2 = CreateSolidBrush(color);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,0,0,w,h,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  pHVar2 = CreateSolidBrush(0);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,10,2,2,1,0xf00021);
  PatBlt(hdc,0xb,3,2,2,0xf00021);
  PatBlt(hdc,10,4,1,1,0xf00021);
  PatBlt(hdc,9,3,1,6,0xf00021);
  PatBlt(hdc,6,4,6,1,0xf00021);
  PatBlt(hdc,7,5,2,2,0xf00021);
  PatBlt(hdc,6,6,2,2,0xf00021);
  PatBlt(hdc,5,7,2,2,0xf00021);
  PatBlt(hdc,4,8,2,2,0xf00021);
  PatBlt(hdc,3,9,2,2,0xf00021);
  PatBlt(hdc,2,10,2,2,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  pHVar2 = CreateSolidBrush(0xffffff);
  pvVar1 = SelectObject(hdc,pHVar2);
  PatBlt(hdc,7,6,1,1,0xf00021);
  PatBlt(hdc,6,7,1,1,0xf00021);
  PatBlt(hdc,5,8,1,1,0xf00021);
  PatBlt(hdc,4,9,1,1,0xf00021);
  PatBlt(hdc,3,10,1,1,0xf00021);
  pvVar1 = SelectObject(hdc,pvVar1);
  DeleteObject(pvVar1);
  return 0;
}


