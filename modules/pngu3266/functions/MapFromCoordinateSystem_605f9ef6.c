/* Module: pngu3266.dll
   Function: MapFromCoordinateSystem
   Address: 605f9ef6
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::MapFromCoordinateSystem(class CPNxSize &)const  */

void __thiscall CPNWindow::MapFromCoordinateSystem(CPNWindow *this,CPNxSize *param_1)

{
  undefined4 uVar1;
  
                    /* 0x9ef6  1562  ?MapFromCoordinateSystem@CPNWindow@@QBEXAAVCPNxSize@@@Z */
  uVar1 = ftol();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


