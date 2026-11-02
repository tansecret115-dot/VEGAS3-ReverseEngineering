/* Module: pngu3266.dll
   Function: MapCoordinatesTo
   Address: 605f9c37
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::MapCoordinatesTo(class CPNWindow *,class CPNxPoint
   &)const  */

void __thiscall CPNWindow::MapCoordinatesTo(CPNWindow *this,CPNWindow *param_1,CPNxPoint *param_2)

{
  HWND__ *pHVar1;
  HWND hWndTo;
  tagPOINT *lpPoints;
  UINT cPoints;
  tagPOINT local_c;
  
                    /* 0x9c37  1559  ?MapCoordinatesTo@CPNWindow@@UBEXPAV1@AAVCPNxPoint@@@Z */
  if ((*(int *)(this + 0xc) != 0) && (param_1 != (CPNWindow *)0x0)) {
    local_c.x = (LONG)this;
    local_c.y = (LONG)this;
    pHVar1 = GetHWND(param_1);
    if (pHVar1 != (HWND__ *)0x0) {
      cPoints = 1;
      local_c.x = *(LONG *)param_2;
      local_c.y = *(LONG *)(param_2 + 4);
      lpPoints = &local_c;
      hWndTo = *(HWND *)(this + 0xc);
      pHVar1 = GetHWND(param_1);
      MapWindowPoints(pHVar1,hWndTo,lpPoints,cPoints);
      *(LONG *)param_2 = local_c.x;
      *(LONG *)(param_2 + 4) = local_c.y;
    }
  }
  return;
}


