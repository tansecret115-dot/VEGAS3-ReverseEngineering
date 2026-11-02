/* Module: pngu3266.dll
   Function: SetCoordinateSystem
   Address: 605f9e33
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::SetCoordinateSystem(long,long) */

void __thiscall CPNWindow::SetCoordinateSystem(CPNWindow *this,long param_1,long param_2)

{
                    /* 0x9e33  1876  ?SetCoordinateSystem@CPNWindow@@QAEXJJ@Z */
  *(long *)(this + 0x50) = param_1;
  *(long *)(this + 0x54) = param_2;
  return;
}


