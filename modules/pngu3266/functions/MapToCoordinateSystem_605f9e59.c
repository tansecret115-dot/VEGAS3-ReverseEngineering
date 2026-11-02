/* Module: pngu3266.dll
   Function: MapToCoordinateSystem
   Address: 605f9e59
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::MapToCoordinateSystem(class CPNxPoint &)const  */

void __thiscall CPNWindow::MapToCoordinateSystem(CPNWindow *this,CPNxPoint *param_1)

{
  undefined4 uVar1;
  
                    /* 0x9e59  1564  ?MapToCoordinateSystem@CPNWindow@@QBEXAAVCPNxPoint@@@Z */
  uVar1 = ftol();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


