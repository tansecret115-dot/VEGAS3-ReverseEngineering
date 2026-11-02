/* Module: rmme3260.dll
   Function: FUN_66248520
   Address: 66248520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66248520(void *this,undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  HWND hWnd;
  undefined4 *puVar2;
  HDC hdc;
  HBRUSH h;
  HPEN h_00;
  HGDIOBJ h_01;
  HGDIOBJ h_02;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 8) + 0x1c))(iVar1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      hWnd = (HWND)*puVar2;
      if (hWnd != (HWND)0x0) {
        hdc = GetDC(hWnd);
        h = CreateSolidBrush(0x8000);
        h_00 = CreatePen(0,1,0xff0000);
        h_01 = SelectObject(hdc,h);
        h_02 = SelectObject(hdc,h_00);
        Rectangle(hdc,*param_3,param_3[1],param_3[2],param_3[3]);
        SelectObject(hdc,h_01);
        SelectObject(hdc,h_02);
        DeleteObject(h);
        DeleteObject(h_00);
        ReleaseDC(hWnd,hdc);
      }
    }
  }
  return 0;
}


