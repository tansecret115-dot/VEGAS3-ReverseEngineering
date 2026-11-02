/* Module: pngu3266.dll
   Function: MapFromCoordinateSystem
   Address: 605f9ebf
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall CPNWindow::MapFromCoordinateSystem(class CPNxPoint &)const  */

void __thiscall CPNWindow::MapFromCoordinateSystem(CPNWindow *this,CPNxPoint *param_1)

{
  undefined4 uVar1;
  
                    /* 0x9ebf  1561  ?MapFromCoordinateSystem@CPNWindow@@QBEXAAVCPNxPoint@@@Z */
  uVar1 = ftol();
  *(undefined4 *)param_1 = uVar1;
  uVar1 = ftol();
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


