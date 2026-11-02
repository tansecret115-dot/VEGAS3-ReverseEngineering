/* Module: pngu3266.dll
   Function: MapToCoordinateSystem
   Address: 605f9e8c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::MapToCoordinateSystem(class CPNxSize &)const  */

void __thiscall CPNWindow::MapToCoordinateSystem(CPNWindow *this,CPNxSize *param_1)

{
  undefined4 uVar1;
  
                    /* 0x9e8c  1565  ?MapToCoordinateSystem@CPNWindow@@QBEXAAVCPNxSize@@@Z */
  uVar1 = ftol();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


