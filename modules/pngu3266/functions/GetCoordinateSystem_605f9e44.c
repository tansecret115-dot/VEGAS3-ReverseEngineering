/* Module: pngu3266.dll
   Function: GetCoordinateSystem
   Address: 605f9e44
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::GetCoordinateSystem(long &,long &) */

void __thiscall CPNWindow::GetCoordinateSystem(CPNWindow *this,long *param_1,long *param_2)

{
                    /* 0x9e44  1153  ?GetCoordinateSystem@CPNWindow@@QAEXAAJ0@Z */
  *param_1 = *(long *)(this + 0x50);
  *param_2 = *(long *)(this + 0x54);
  return;
}


