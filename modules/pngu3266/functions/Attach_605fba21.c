/* Module: pngu3266.dll
   Function: Attach
   Address: 605fba21
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNDC::Attach(struct HDC__ *) */

void __thiscall CPNDC::Attach(CPNDC *this,HDC__ *param_1)

{
  HDC__ *pHVar1;
  CPNWindow *this_00;
  long local_8;
  
                    /* 0xba21  807  ?Attach@CPNDC@@QAEXPAUHDC__@@@Z */
  pHVar1 = param_1;
  local_8 = 100;
  param_1 = (HDC__ *)0x64;
  *(HDC__ **)(this + 0x1cf) = pHVar1;
  this_00 = CPNWindow::GetPNWindow(*(void **)(this + 0x1d3));
  if (this_00 != (CPNWindow *)0x0) {
    CPNWindow::GetCoordinateSystem(this_00,&local_8,(long *)&param_1);
  }
  if ((local_8 != 100) || (param_1 != (HDC__ *)0x64)) {
    SetMapMode(*(HDC *)(this + 0x1cf),8);
    SetWindowExtEx(*(HDC *)(this + 0x1cf),100,100,(LPSIZE)0x0);
    SetViewportExtEx(*(HDC *)(this + 0x1cf),local_8,(int)param_1,(LPSIZE)0x0);
  }
  XPNDC::SetupDefaultTools((XPNDC *)this);
  return;
}


