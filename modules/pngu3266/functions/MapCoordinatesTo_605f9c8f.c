/* Module: pngu3266.dll
   Function: MapCoordinatesTo
   Address: 605f9c8f
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall CPNWindow::MapCoordinatesTo(class CPNWindow *,class CPNxRect
   &)const  */

void __thiscall CPNWindow::MapCoordinatesTo(CPNWindow *this,CPNWindow *param_1,CPNxRect *param_2)

{
  HWND__ *pHVar1;
  HWND hWndTo;
  tagPOINT *lpPoints;
  UINT cPoints;
  tagPOINT local_14;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x9c8f  1560  ?MapCoordinatesTo@CPNWindow@@UBEXPAV1@AAVCPNxRect@@@Z */
  if ((*(int *)(this + 0xc) != 0) && (param_1 != (CPNWindow *)0x0)) {
    pHVar1 = GetHWND(param_1);
    if (pHVar1 != (HWND__ *)0x0) {
      cPoints = 2;
      local_14.x = *(LONG *)param_2;
      local_14.y = *(LONG *)(param_2 + 4);
      local_c = *(undefined4 *)(param_2 + 8);
      local_8 = *(undefined4 *)(param_2 + 0xc);
      lpPoints = &local_14;
      hWndTo = *(HWND *)(this + 0xc);
      pHVar1 = GetHWND(param_1);
      MapWindowPoints(pHVar1,hWndTo,lpPoints,cPoints);
      *(LONG *)param_2 = local_14.x;
      *(LONG *)(param_2 + 4) = local_14.y;
      *(undefined4 *)(param_2 + 8) = local_c;
      *(undefined4 *)(param_2 + 0xc) = local_8;
    }
  }
  return;
}


